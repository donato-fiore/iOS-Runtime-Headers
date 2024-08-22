// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFTEMPERATURECOLOR_H
#define HFTEMPERATURECOLOR_H

@class NSString;
@protocol HFColorPrimitive, NSCopying;

#import <Foundation/Foundation.h>


@interface HFTemperatureColor : NSObject <HFColorPrimitive, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) float temperatureInKelvin;
@property (readonly, nonatomic) float temperatureInMired; // ivar: _temperatureInMired


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hf_RGBColorRepresentation;
-(id)hf_temperatureColorRepresentation;
-(id)init;
-(id)initWithTemperatureInKelvin:(float)arg0 ;
-(id)initWithTemperatureInMired:(float)arg0 ;
-(id)valueDescription;
-(id)valueDescriptionInKelvin;


@end


#endif