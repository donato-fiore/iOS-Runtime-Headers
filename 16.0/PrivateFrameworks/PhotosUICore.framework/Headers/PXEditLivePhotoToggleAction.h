// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXEDITLIVEPHOTOTOGGLEACTION_H
#define PXEDITLIVEPHOTOTOGGLEACTION_H

@class NUComposition;
@protocol PXEditLivePhotoModel;


#import "PXEditCompositionAction.h"

@interface PXEditLivePhotoToggleAction : PXEditCompositionAction {
    id<PXEditLivePhotoModel> *_livePhotoModel;
    NUComposition *_sourceComposition;
    NUComposition *_targetComposition;
}




-(BOOL)_isLoopingVideo;
-(id)initWithCompositionController:(id)arg0 livePhotoModel:(id)arg1 ;
-(id)sourceComposition;
-(id)targetComposition;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif