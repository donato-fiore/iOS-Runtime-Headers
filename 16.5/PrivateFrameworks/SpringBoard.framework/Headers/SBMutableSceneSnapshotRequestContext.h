// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMUTABLESCENESNAPSHOTREQUESTCONTEXT_H
#define SBMUTABLESCENESNAPSHOTREQUESTCONTEXT_H

@protocol SBSceneSnapshotReferenceFrameProviding;


#import "SBSceneSnapshotRequestContext.h"
#import "SBLayoutStateTransitionContext.h"

@interface SBMutableSceneSnapshotRequestContext : SBSceneSnapshotRequestContext

@property (retain, nonatomic) NSObject<SBSceneSnapshotReferenceFrameProviding> *embeddedDisplayReferenceFrameProvider;
@property (retain, nonatomic) SBLayoutStateTransitionContext *sceneDisplayLayoutStateTransitionContext;
@property (retain, nonatomic) NSObject<SBSceneSnapshotReferenceFrameProviding> *sceneDisplayReferenceFrameProvider;
@property (nonatomic) NSUInteger sceneDisplayWindowManagementStyle;




@end


#endif