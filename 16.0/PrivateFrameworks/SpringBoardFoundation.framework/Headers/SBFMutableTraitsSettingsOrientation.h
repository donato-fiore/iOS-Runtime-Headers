// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFMUTABLETRAITSSETTINGSORIENTATION_H
#define SBFMUTABLETRAITSSETTINGSORIENTATION_H

@protocol BSInterfaceOrientationMapResolving><BSXPCSecureCoding;


#import "SBFTraitsSettingsOrientation.h"
#import "SBFTraitsArbitrationDeviceOrientationInputs.h"

@interface SBFMutableTraitsSettingsOrientation : SBFTraitsSettingsOrientation

@property (nonatomic) NSInteger orientation;
@property (retain, nonatomic) NSObject<BSInterfaceOrientationMapResolving><BSXPCSecureCoding> *orientationMapResolver;
@property (retain, nonatomic) SBFTraitsArbitrationDeviceOrientationInputs *rawOrientationInputs;
@property (retain, nonatomic) SBFTraitsArbitrationDeviceOrientationInputs *validatedOrientationInputs;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif