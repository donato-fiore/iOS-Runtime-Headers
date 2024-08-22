// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNHANDLESTRINGCLASSIFIER_H
#define CNHANDLESTRINGCLASSIFIER_H

@protocol _CNHandleStringClassificationStrategy;

#import <Foundation/Foundation.h>


@interface CNHandleStringClassifier : NSObject

@property (readonly, nonatomic) NSObject<_CNHandleStringClassificationStrategy> *classificationStrategy; // ivar: _classificationStrategy


+(id)classificationOfHandleStrings:(id)arg0 ;
+(id)classificationOfHandleStrings:(id)arg0 classificationQuality:(NSUInteger)arg1 ;
+(id)classificationStrategyForQuality:(NSUInteger)arg0 ;
-(NSUInteger)typeOfHandleString:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithClassificationQuality:(NSUInteger)arg0 ;
-(id)initWithClassificationStrategy:(id)arg0 ;
-(void)classifyHandleString:(id)arg0 builder:(id)arg1 ;


@end


#endif