// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXJSONADVERTISEMENTSETTINGS_H
#define SXJSONADVERTISEMENTSETTINGS_H

@class NSString;
@protocol SXAdvertisingSettings, SXAutoPlacementLayout;


#import "SXJSONObject.h"

@interface SXJSONAdvertisementSettings : SXJSONObject <SXAdvertisingSettings>



@property (readonly, nonatomic) NSUInteger bannerType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _SXConvertibleValue distanceFromMedia;
@property (readonly, nonatomic) NSUInteger frequency;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXAutoPlacementLayout> *layout;
@property (readonly) Class superclass;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;
-(NSUInteger)bannerTypeWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif