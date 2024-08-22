// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBDEVICEORIENTATION_H
#define WEBDEVICEORIENTATION_H


#import <Foundation/Foundation.h>

#import "WebDeviceOrientationInternal.h"

@interface WebDeviceOrientation : NSObject {
    WebDeviceOrientationInternal *m_internal;
}




-(id)initWithCanProvideAlpha:(BOOL)arg0 alpha:(CGFloat)arg1 canProvideBeta:(BOOL)arg2 beta:(CGFloat)arg3 canProvideGamma:(BOOL)arg4 gamma:(CGFloat)arg5 ;
-(id)initWithCoreDeviceOrientation:(*void)arg0 ;
-(void)dealloc;


@end


#endif