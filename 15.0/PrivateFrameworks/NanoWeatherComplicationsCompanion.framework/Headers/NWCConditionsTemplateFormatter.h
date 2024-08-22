// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWCCONDITIONSTEMPLATEFORMATTER_H
#define NWCCONDITIONSTEMPLATEFORMATTER_H

@class NSString, CLKTextProvider;
@protocol NWCTemplateFormattable;

#import <Foundation/Foundation.h>

#import "NWMTemperatureFormatter.h"

@interface NWCConditionsTemplateFormatter : NSObject <NWCTemplateFormattable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLKTextProvider *noDataTextProvider; // ivar: _noDataTextProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NWMTemperatureFormatter *temperatureFormatter; // ivar: _temperatureFormatter


+(NSUInteger)_codeForConditions:(id)arg0 ;
+(id)sharedFormatter;
-(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_graphicRectangularTemplateWithTextProvider:(id)arg0 hourlyForecastEntryModels:(id)arg1 timeZone:(id)arg2 ;
-(id)_nonRichSymbolProviderForModel:(id)arg0 ;
-(id)_richCircularTemplateForComplicationFamily:(NSInteger)arg0 entryModel:(id)arg1 ;
-(id)circularMediumTemplateForEntryModel:(id)arg0 ;
-(id)circularSmallTemplateForEntryModel:(id)arg0 ;
-(id)extraLargeTemplateForEntryModel:(id)arg0 ;
-(id)graphicBezelTemplateForEntryModel:(id)arg0 ;
-(id)graphicCircularTemplateForEntryModel:(id)arg0 ;
-(id)graphicCornerTemplateForEntryModel:(id)arg0 ;
-(id)graphicExtraLargeCircularTemplateForEntryModel:(id)arg0 ;
-(id)graphicRectangularTemplateForLocalLocation:(BOOL)arg0 timeZone:(id)arg1 entryModel:(id)arg2 ;
-(id)modularSmallTemplateForEntryModel:(id)arg0 ;
-(id)switcherTemplateWithFamily:(NSInteger)arg0 ;
-(id)utilitarianSmallTemplateForEntryModel:(id)arg0 ;


@end


#endif