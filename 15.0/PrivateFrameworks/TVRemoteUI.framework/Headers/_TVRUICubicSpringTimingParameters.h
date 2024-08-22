// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRUICUBICSPRINGTIMINGPARAMETERS_H
#define _TVRUICUBICSPRINGTIMINGPARAMETERS_H

@class UISpringTimingParameters, UICubicTimingParameters;



@interface _TVRUICubicSpringTimingParameters : UISpringTimingParameters

@property (copy, nonatomic) UICubicTimingParameters *springCubicTimingParameters; // ivar: _springCubicTimingParameters


+(id)standardTimingParameters;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cubicTimingParameters;


@end


#endif