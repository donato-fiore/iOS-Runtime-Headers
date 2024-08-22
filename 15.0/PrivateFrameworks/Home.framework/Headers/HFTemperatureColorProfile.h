// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFTEMPERATURECOLORPROFILE_H
#define HFTEMPERATURECOLORPROFILE_H

@class NSString;
@protocol HFColorProfile;

#import <Foundation/Foundation.h>


@interface HFTemperatureColorProfile : NSObject <HFColorProfile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float maximumTemperature; // ivar: _maximumTemperature
@property (readonly, nonatomic) float minimumTemperature; // ivar: _minimumTemperature
@property (readonly) Class superclass;


-(float)adjustedTemperatureForTemperature:(float)arg0 ;
-(id)adjustedColorPrimitiveForPrimitive:(id)arg0 ;
-(id)initWithMinimumTemperature:(float)arg0 maximumTemperature:(float)arg1 ;


@end


#endif