// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFTRANSFORM_H
#define MFTRANSFORM_H

@protocol NSCopying, MFDeviceDriver;

#import <Foundation/Foundation.h>


@interface MFTransform : NSObject <NSCopying>

 {
    CGAffineTransform m_world;
    CGPoint m_windowOrg;
    CGPoint m_windowExt;
    CGPoint m_viewportOrg;
    CGPoint m_viewportExt;
    CGAffineTransform m_combinedTransform;
    int m_mapMode;
    NSObject<MFDeviceDriver> *m_deviceDriver;
}




-(BOOL)isUpsideDown;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDriver:(id)arg0 ;
-(int)getMapMode;
-(int)modifyWorldTransform:(struct CGAffineTransform *)arg0 in_command:(int)arg1 ;
-(int)offsetViewportOrg:(int)arg0 in_y:(int)arg1 ;
-(int)offsetWindowOrg:(int)arg0 in_y:(int)arg1 ;
-(int)scaleViewportExt:(int)arg0 in_xDenom:(int)arg1 in_yNum:(int)arg2 in_yDenom:(int)arg3 ;
-(int)scaleWindowExt:(int)arg0 in_xDenom:(int)arg1 in_yNum:(int)arg2 in_yDenom:(int)arg3 ;
-(int)setMapMode:(int)arg0 ;
-(int)setViewportExt:(int)arg0 in_y:(int)arg1 ;
-(int)setViewportOrg:(int)arg0 in_y:(int)arg1 ;
-(int)setWindowExt:(int)arg0 in_y:(int)arg1 ;
-(int)setWindowOrg:(int)arg0 in_y:(int)arg1 ;
-(int)setWorldTransform:(struct CGAffineTransform *)arg0 ;
-(int)updateTransform;
-(struct CGAffineTransform )getTransformMatrix;
-(struct CGAffineTransform )getWorldMatrix;
-(struct CGPoint )DPtoLP:(struct CGPoint )arg0 ;
-(struct CGPoint )LPtoDP:(struct CGPoint )arg0 ;
-(struct CGPoint )getViewportExtent;
-(struct CGPoint )getViewportOrg;
-(struct CGPoint )getWindowExtent;
-(struct CGPoint )getWindowOrg;
-(void)setTransformMatrix:(struct CGAffineTransform )arg0 ;
-(void)setViewportExt:(struct CGPoint )arg0 ;
-(void)setViewportOrg:(struct CGPoint )arg0 ;
-(void)setWindowExt:(struct CGPoint )arg0 ;
-(void)setWindowOrg:(struct CGPoint )arg0 ;
-(void)setWorldMatrix:(struct CGAffineTransform )arg0 ;


@end


#endif