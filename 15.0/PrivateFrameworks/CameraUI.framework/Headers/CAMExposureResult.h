// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMEXPOSURERESULT_H
#define CAMEXPOSURERESULT_H


#import <Foundation/Foundation.h>


@interface CAMExposureResult : NSObject

@property (readonly, nonatomic, getter=isAdjustingExposure) BOOL adjustingExposure; // ivar: _adjustingExposure
@property (readonly, nonatomic) BOOL deviceSupportsFocus; // ivar: _deviceSupportsFocus
@property (readonly, nonatomic) BOOL exposureDidEnd; // ivar: _exposureDidEnd
@property (readonly, nonatomic) BOOL exposureDidStart; // ivar: _exposureDidStart
@property (readonly, nonatomic) NSInteger exposureMode; // ivar: _exposureMode
@property (readonly, nonatomic) float exposureTargetBias; // ivar: _exposureTargetBias
@property (readonly, nonatomic) CGPoint pointOfInterest; // ivar: _pointOfInterest


-(id)description;
-(id)initWithMode:(NSInteger)arg0 pointOfInterest:(struct CGPoint )arg1 exposureTargetBias:(float)arg2 adjusting:(BOOL)arg3 exposureDidStart:(BOOL)arg4 exposureDidEnd:(BOOL)arg5 deviceSupportsFocus:(BOOL)arg6 ;


@end


#endif