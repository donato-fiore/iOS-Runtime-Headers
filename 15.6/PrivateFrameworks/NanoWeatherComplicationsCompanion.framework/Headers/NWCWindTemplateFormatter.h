// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWCWINDTEMPLATEFORMATTER_H
#define NWCWINDTEMPLATEFORMATTER_H

@class NSString;
@protocol NWCTemplateFormattable;

#import <Foundation/Foundation.h>


@interface NWCWindTemplateFormatter : NSObject <NWCTemplateFormattable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedFormatter;
-(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_graphicRectangularTemplateWithTextProvider:(id)arg0 hourlyForecastEntryModels:(id)arg1 timeZone:(id)arg2 ;
-(id)_richCircularTemplateForFamily:(NSInteger)arg0 entryModel:(id)arg1 ;
-(id)_windDirectionAbbreviationFromConditions:(id)arg0 ;
-(id)_windSpeedFromConditions:(id)arg0 ;
-(id)_windUnit;
-(id)circularMediumTemplateForEntryModel:(id)arg0 ;
-(id)circularSmallTemplateForEntryModel:(id)arg0 ;
-(id)extraLargeTemplateForEntryModel:(id)arg0 ;
-(id)graphicBezelTemplateForEntryModel:(id)arg0 ;
-(id)graphicCircularTemplateForEntryModel:(id)arg0 ;
-(id)graphicCornerTemplateForEntryModel:(id)arg0 ;
-(id)graphicExtraLargeCircularTemplateForEntryModel:(id)arg0 ;
-(id)graphicRectangularTemplateForLocalLocation:(BOOL)arg0 timeZone:(id)arg1 entryModel:(id)arg2 ;
-(id)modularLargeTemplateForLocation:(id)arg0 isLocalLocation:(BOOL)arg1 entryModel:(id)arg2 ;
-(id)modularSmallTemplateForEntryModel:(id)arg0 ;
-(id)switcherTemplateWithFamily:(NSInteger)arg0 ;
-(id)utilitarianLargeTemplateForEntryModel:(id)arg0 ;
-(id)utilitarianSmallTemplateForEntryModel:(id)arg0 ;


@end


#endif