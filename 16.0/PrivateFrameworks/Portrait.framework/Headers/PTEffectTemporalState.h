// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTEFFECTTEMPORALSTATE_H
#define PTEFFECTTEMPORALSTATE_H

@protocol MTLDevice, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTUtil.h"

@interface PTEffectTemporalState : NSObject {
    id<MTLDevice> *_device;
    PTUtil *_util;
    id<MTLTexture> *_disparityNetworkTemporalState;
    id<MTLTexture> *_lastQuatersizeRGBA;
    ? _faceRects;
    int _numberOfFaceRects;
}




-(id)initWithDevice:(id)arg0 util:(id)arg1 ;
-(void)restoreState:(id)arg0 network:(id)arg1 disparityFilter:(id)arg2 faceRects:(**int)arg3 numberOfFaceRects;
-(void)saveState:(id)arg0 network:(id)arg1 msrColorPyramid:(id)arg2 faceRects:(*int)arg3 numberOfFaceRects;


@end


#endif