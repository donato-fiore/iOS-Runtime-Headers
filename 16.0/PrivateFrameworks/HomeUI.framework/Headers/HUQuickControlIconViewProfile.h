// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLICONVIEWPROFILE_H
#define HUQUICKCONTROLICONVIEWPROFILE_H

@class NSString, UIColor;
@protocol HFIconDescriptor;


#import "HUQuickControlViewProfile.h"

@interface HUQuickControlIconViewProfile : HUQuickControlViewProfile

@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor
@property (retain, nonatomic) NSString *statusString; // ivar: _statusString
@property (retain, nonatomic) UIColor *statusTextColor; // ivar: _statusTextColor
@property (retain, nonatomic) NSString *supplementaryString; // ivar: _supplementaryString


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif