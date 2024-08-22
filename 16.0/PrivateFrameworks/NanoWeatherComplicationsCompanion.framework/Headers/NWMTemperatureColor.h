// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWMTEMPERATURECOLOR_H
#define NWMTEMPERATURECOLOR_H

@class NSString;
@protocol NWMColorPalette;

#import <Foundation/Foundation.h>


@interface NWMTemperatureColor : NSObject <NWMColorPalette>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)colorForTemperature:(id)arg0 ;
+(id)colorSpectrum;
+(void)colorSpectrumBetweenLow:(id)arg0 high:(id)arg1 handler:(id)arg2 ;


@end


#endif