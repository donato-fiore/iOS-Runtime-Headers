// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSTICKERCAMERA_H
#define AVTSTICKERCAMERA_H

@class SCNNode;

#import <Foundation/Foundation.h>


@interface AVTStickerCamera : NSObject

@property (retain, nonatomic) SCNNode *node; // ivar: _node


+(id)cameraFromDictionary:(id)arg0 assetsPath:(id)arg1 ;
+(id)stickerCameraCache;
-(id)buildNode;
-(id)initWithScene:(id)arg0 cameraName:(id)arg1 ;


@end


#endif