// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWCWEATHERTEMPLATEFORMATTER_H
#define NWCWEATHERTEMPLATEFORMATTER_H

@class NSString;
@protocol NWCTemplateFormattable;

#import <Foundation/Foundation.h>

#import "NWMTemperatureFormatter.h"

@interface NWCWeatherTemplateFormatter : NSObject <NWCTemplateFormattable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NWMTemperatureFormatter *temperatureFormatter; // ivar: _temperatureFormatter


+(id)sharedFormatter;
-(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_richCircularTemplateForComplicationFamily:(NSInteger)arg0 entryModel:(id)arg1 ;
-(id)circularMediumTemplateForEntryModel:(id)arg0 ;
-(id)circularSmallTemplateForEntryModel:(id)arg0 ;
-(id)extraLargeTemplateForEntryModel:(id)arg0 ;
-(id)graphicBezelTemplateForEntryModel:(id)arg0 ;
-(id)graphicCircularTemplateForEntryModel:(id)arg0 ;
-(id)graphicCornerTemplateForEntryModel:(id)arg0 ;
-(id)graphicExtraLargeCircularTemplateForEntryModel:(id)arg0 ;
-(id)modularLargeTemplateForLocation:(id)arg0 isLocalLocation:(BOOL)arg1 entryModel:(id)arg2 ;
-(id)modularSmallTemplateForEntryModel:(id)arg0 ;
-(id)switcherTemplateWithFamily:(NSInteger)arg0 ;
-(id)utilitarianLargeTemplateForEntryModel:(id)arg0 ;
-(id)utilitarianSmallTemplateForEntryModel:(id)arg0 ;


@end


#endif