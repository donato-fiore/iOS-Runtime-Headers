// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWMTEMPERATURECOLORINDEX_H
#define NWMTEMPERATURECOLORINDEX_H

@class NWKUIColorIndex, NSString, WFTemperature;
@protocol NWKUIColorIndexable;



@interface NWMTemperatureColorIndex : NWKUIColorIndex <NWKUIColorIndexable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFTemperature *temperature; // ivar: _temperature


+(id)allIndices;
+(id)indexWithTemperature:(id)arg0 color:(id)arg1 ;
-(id)initWithTemperature:(id)arg0 color:(id)arg1 ;


@end


#endif