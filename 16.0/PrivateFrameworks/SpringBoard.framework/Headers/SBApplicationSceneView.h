// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONSCENEVIEW_H
#define SBAPPLICATIONSCENEVIEW_H

@class SBSceneView;


#import "SBApplication.h"
#import "SBApplicationSceneHandle.h"

@interface SBApplicationSceneView : SBSceneView

@property (readonly, nonatomic) SBApplication *application;
@property (readonly, nonatomic) SBApplicationSceneHandle *sceneHandle;


-(id)deviceApplicationSceneView;
-(id)initWithSceneHandle:(id)arg0 referenceSize:(struct CGSize )arg1 orientation:(NSInteger)arg2 hostRequester:(id)arg3 ;
-(void)_modifyPresentationContext:(id)arg0 ;


@end


#endif