// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADCAMERA_H
#define OADCAMERA_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OADRotation3D.h"

@interface OADCamera : NSObject <NSCopying>

 {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)fieldOfView;
-(float)zoom;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)rotation;
-(int)cameraType;
-(void)setCameraType:(int)arg0 ;
-(void)setFieldOfView:(float)arg0 ;
-(void)setRotation:(id)arg0 ;
-(void)setZoom:(float)arg0 ;


@end


#endif