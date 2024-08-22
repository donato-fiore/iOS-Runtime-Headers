// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OUOBJECTCOMPLETENESS_H
#define OUOBJECTCOMPLETENESS_H


#import <Foundation/Foundation.h>


@interface OUObjectCompleteness : NSObject



-(BOOL)checkBoxFaceCompleteness:(struct box3d )arg0 faceIndex:(int)arg1 boxType:(id)arg2 pointCloud:(id)arg3 ;
-(BOOL)isPointInCameraView:(struct float4x4 )arg0 cameraPose:(id)arg1 camera:(float)arg2 marginRatio;
-(void)updateRawCornersStatus:(id)arg0 withOldObjects:(id)arg1 cameraPose:(struct float4x4 )arg2 camera:(id)arg3 ;
-(void)updateRawCornersStatusNoTimer:(id)arg0 withOldObjects:(id)arg1 cameraPose:(struct float4x4 )arg2 camera:(id)arg3 ;
-(void)updateRawFacesStatus:(id)arg0 withOldObjects:(id)arg1 pointCloud:(id)arg2 cameraPose:(struct float4x4 )arg3 camera:(id)arg4 ;


@end


#endif