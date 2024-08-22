// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWPIPELINESTAGE_H
#define BWPIPELINESTAGE_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface BWPipelineStage : NSObject {
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_group> *_executionGroup;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
}


@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int priority; // ivar: _priority
@property (readonly, nonatomic) BOOL stillImagePipelineStage; // ivar: _stillImagePipelineStage
@property (readonly, nonatomic) NSString *stillImagePipelineStageEntryNodeName; // ivar: _stillImagePipelineStageEntryNodeName


+(id)pipelineStageForStillImagesWithName:(id)arg0 entryNodeName:(id)arg1 priority:(unsigned int)arg2 ;
+(id)pipelineStageForStillImagesWithName:(id)arg0 priority:(unsigned int)arg1 ;
+(id)pipelineStageWithName:(id)arg0 priority:(unsigned int)arg1 ;
+(id)pipelineStageWithName:(id)arg0 priority:(unsigned int)arg1 discardsLateSampleData:(BOOL)arg2 ;
+(id)pipelineStageWithName:(id)arg0 priority:(unsigned int)arg1 workgroup:(id)arg2 ;
+(id)pipelineStageWithName:(id)arg0 priority:(unsigned int)arg1 workgroup:(id)arg2 discardsLateSampleData:(BOOL)arg3 ;
+(void)initialize;
-(id)description;
-(void)dealloc;
-(void)sendMessage:(id)arg0 toInput:(id)arg1 ;
-(void)sendMessagesToInput:(id)arg0 messageProvider:(id)arg1 ;


@end


#endif