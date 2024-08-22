// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DSCENERENDERSETUP_H
#define TSCH3DSCENERENDERSETUP_H


#import <Foundation/Foundation.h>


@interface TSCH3DSceneRenderSetup : NSObject



+(id)camera;
+(id)cameraAndSceneTransform;
+(id)full;
+(id)identity;
+(id)null;
+(id)sceneTransform;
+(id)viewport;
-(id)renderingCameraFromOriginalCamera:(id)arg0 pipeline:(id)arg1 ;


@end


#endif