// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWPORTRAITHDRSTAGINGNODE_H
#define BWPORTRAITHDRSTAGINGNODE_H



#import "BWNode.h"

@interface BWPortraitHDRStagingNode : BWNode {
    os_unfair_lock_s _lock;
    NSInteger _settingsID;
    BOOL _passthroughBuffer;
    *opaqueCMSampleBuffer _stagedBuffer;
}




+(void)initialize;
-(id)init;
-(id)nodeSubType;
-(id)nodeType;
-(void)bufferReceivedWithFlags:(unsigned int)arg0 error:(int)arg1 ;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif