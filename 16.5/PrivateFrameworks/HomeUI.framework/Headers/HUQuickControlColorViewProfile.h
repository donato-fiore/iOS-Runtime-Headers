// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLCOLORVIEWPROFILE_H
#define HUQUICKCONTROLCOLORVIEWPROFILE_H

@protocol HFColorProfile;


#import "HUQuickControlViewProfile.h"

@interface HUQuickControlColorViewProfile : HUQuickControlViewProfile

@property (retain, nonatomic) NSObject<HFColorProfile> *colorProfile; // ivar: _colorProfile
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) BOOL naturalLightingEnabled; // ivar: _naturalLightingEnabled
@property (nonatomic) BOOL supportsNaturalLighting; // ivar: _supportsNaturalLighting
@property (nonatomic) BOOL supportsRGBColor; // ivar: _supportsRGBColor


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif