// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNASSISTEDDATADETECTORSHANDLESTRINGCLASSIFICATIONSTRATEGY_H
#define _CNASSISTEDDATADETECTORSHANDLESTRINGCLASSIFICATIONSTRATEGY_H

@class NSString;
@protocol _CNHandleStringClassificationStrategy;

#import <Foundation/Foundation.h>


@interface _CNAssistedDataDetectorsHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy>

 {
    id<_CNHandleStringClassificationStrategy> *_strategy;
    id<_CNHandleStringClassificationStrategy> *_assistingStrategy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)classificationOfHandleString:(id)arg0 ;
-(id)init;
-(id)initWithStrategy:(id)arg0 ;
-(void)makeAssistingStrategyIfNecessary;


@end


#endif