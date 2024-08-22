// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPELINESTATEPROMISE_H
#define PIPELINESTATEPROMISE_H

@class NSMapTable;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface PipelineStatePromise : NSObject {
    NSMapTable *pipelineStates;
    NSMapTable *errors;
    NSObject<OS_dispatch_group> *group;
    uint8_t initialization_completed;
}




-(BOOL)groupWasSuccessful;
-(BOOL)timesOutWaitingForPipelineStates:(CGFloat)arg0 ;
-(id)errorForFunction:(id)arg0 ;
-(id)initWithDispatchGroup:(id)arg0 pipelineStates:(id)arg1 errors:(id)arg2 ;
-(id)pipelineStateForFunction:(id)arg0 ;


@end


#endif