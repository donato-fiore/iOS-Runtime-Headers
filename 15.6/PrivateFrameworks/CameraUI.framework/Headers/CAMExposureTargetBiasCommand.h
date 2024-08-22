// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMEXPOSURETARGETBIASCOMMAND_H
#define CAMEXPOSURETARGETBIASCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMExposureTargetBiasCommand : CAMCaptureCommand

@property (readonly, nonatomic) float _exposureTargetBias; // ivar: __exposureTargetBias


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExposureTargetBias:(float)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif