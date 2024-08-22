// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDVIEW3D_H
#define CHDVIEW3D_H


#import <Foundation/Foundation.h>


@interface CHDView3D : NSObject {
    int mRotationX;
    int mRotationY;
    int mDepthPercent;
    int mGapDepthPercent;
    int mHeightPercent;
    int mPerspective;
    BOOL mRightAngleAxes;
    BOOL mCluster;
    BOOL mAutoscale;
}




-(BOOL)isAutoscale;
-(BOOL)isCluster;
-(BOOL)isRightAngleAxes;
-(id)description;
-(id)init;
-(int)depthPercent;
-(int)gapDepthPercent;
-(int)heightPercent;
-(int)perspective;
-(int)rotationX;
-(int)rotationY;
-(void)setAutoscale:(BOOL)arg0 ;
-(void)setCluster:(BOOL)arg0 ;
-(void)setDepthPercent:(int)arg0 ;
-(void)setGapDepthPercent:(int)arg0 ;
-(void)setHeightPercent:(int)arg0 ;
-(void)setPerspective:(int)arg0 ;
-(void)setRightAngleAxes:(BOOL)arg0 ;
-(void)setRotationX:(int)arg0 ;
-(void)setRotationY:(int)arg0 ;


@end


#endif