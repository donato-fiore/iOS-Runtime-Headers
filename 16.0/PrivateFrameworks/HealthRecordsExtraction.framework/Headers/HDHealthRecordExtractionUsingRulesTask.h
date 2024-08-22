// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHRECORDEXTRACTIONUSINGRULESTASK_H
#define HDHEALTHRECORDEXTRACTIONUSINGRULESTASK_H

@class NSString;
@protocol HDHealthRecordPipelineTask;

#import <Foundation/Foundation.h>

#import "HDHealthRecordProcessingContext.h"

@interface HDHealthRecordExtractionUsingRulesTask : NSObject <HDHealthRecordPipelineTask>

 {
    HDHealthRecordProcessingContext *_processingContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)processWithError:(*id)arg0 ;
-(id)initWithProcessingContext:(id)arg0 ;


@end


#endif