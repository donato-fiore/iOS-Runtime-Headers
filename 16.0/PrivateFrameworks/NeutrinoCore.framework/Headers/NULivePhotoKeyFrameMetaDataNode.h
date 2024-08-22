// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NULIVEPHOTOKEYFRAMEMETADATANODE_H
#define NULIVEPHOTOKEYFRAMEMETADATANODE_H



#import "NURenderNode.h"

@interface NULivePhotoKeyFrameMetaDataNode : NURenderNode {
    ? _timeFromAdjustment;
}




-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoProperties:(*id)arg0 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)initWithTime:(struct ? )arg0 input:(id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif