// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBROWSERFULLSCREENCUBICSPRINGTIMINGPARAMETERS_H
#define CKBROWSERFULLSCREENCUBICSPRINGTIMINGPARAMETERS_H

@class UISpringTimingParameters, UICubicTimingParameters;



@interface CKBrowserFullscreenCubicSpringTimingParameters : UISpringTimingParameters

@property (retain, nonatomic) UICubicTimingParameters *springCubicTimingParameters; // ivar: _springCubicTimingParameters


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cubicTimingParameters;


@end


#endif