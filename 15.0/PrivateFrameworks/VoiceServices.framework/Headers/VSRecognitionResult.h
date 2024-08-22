// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSRECOGNITIONRESULT_H
#define VSRECOGNITIONRESULT_H


#import <Foundation/Foundation.h>


@interface VSRecognitionResult : NSObject



+(id)recognitionResultWithModelIdentifier:(id)arg0 classIdentifiers:(id)arg1 values:(id)arg2 ;
+(void)initialize;
-(BOOL)getElementClassIdentifier:(*id)arg0 value:(*id)arg1 atIndex:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)elementCount;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)createHandler;
-(id)description;
-(id)init;
-(id)modelIdentifier;
-(id)recognitionAction;
-(id)recognitionResultByReplacingValueForClassIdentifier:(id)arg0 withValue:(id)arg1 ;
-(id)retain;
-(id)valueOfFirstElementWithClassIdentifier:(id)arg0 ;
-(void)release;
-(void)setRecognitionAction:(id)arg0 ;


@end


#endif