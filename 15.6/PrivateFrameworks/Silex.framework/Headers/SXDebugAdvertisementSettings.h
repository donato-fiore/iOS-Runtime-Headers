// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDEBUGADVERTISEMENTSETTINGS_H
#define SXDEBUGADVERTISEMENTSETTINGS_H

@class NSString;
@protocol SXAdvertisingSettings, SXAutoPlacementLayout;

#import <Foundation/Foundation.h>


@interface SXDebugAdvertisementSettings : NSObject <SXAdvertisingSettings>



@property (readonly, nonatomic) NSUInteger bannerType; // ivar: _bannerType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _SXConvertibleValue distanceFromMedia; // ivar: _distanceFromMedia
@property (readonly, nonatomic) NSUInteger frequency; // ivar: _frequency
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXAutoPlacementLayout> *layout; // ivar: _layout
@property (readonly) Class superclass;


-(id)initWithFrequency:(NSUInteger)arg0 bannerType:(id)arg1 layout:(id)arg2 distanceFromMedia:(struct _SXConvertibleValue )arg3 ;


@end


#endif