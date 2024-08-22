// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWCULTRAVIOLETINDEXTEMPLATEFORMATTER_H
#define NWCULTRAVIOLETINDEXTEMPLATEFORMATTER_H

@class NSString, NSNumberFormatter;
@protocol NWCTemplateFormattable;

#import <Foundation/Foundation.h>


@interface NWCUltravioletIndexTemplateFormatter : NSObject <NWCTemplateFormattable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumberFormatter *indexNumberFormatter; // ivar: _indexNumberFormatter
@property (readonly) Class superclass;


+(id)sharedFormatter;
-(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_graphicRectangularTemplateWithTextProvider:(id)arg0 conditions:(id)arg1 sevenDayDailyForecastedConditions:(id)arg2 timeZone:(id)arg3 ;
-(id)_localizedIndexForConditions:(id)arg0 ;
-(id)_richCircularTemplateForFamily:(NSInteger)arg0 conditions:(id)arg1 ;
-(id)circularMediumTemplateForConditions:(id)arg0 ;
-(id)circularSmallTemplateForConditions:(id)arg0 ;
-(id)extraLargeTemplateForConditions:(id)arg0 ;
-(id)graphicBezelTemplateForConditions:(id)arg0 ;
-(id)graphicCircularTemplateForConditions:(id)arg0 ;
-(id)graphicCornerTemplateForConditions:(id)arg0 ;
-(id)graphicExtraLargeCircularTemplateForConditions:(id)arg0 ;
-(id)graphicRectangularTemplateForLocalLocation:(BOOL)arg0 timeZone:(id)arg1 conditions:(id)arg2 dailyForecastedConditions:(id)arg3 ;
-(id)init;
-(id)modularLargeTemplateForLocation:(id)arg0 isLocalLocation:(BOOL)arg1 conditions:(id)arg2 ;
-(id)modularSmallTemplateForConditions:(id)arg0 ;
-(id)switcherTemplateWithFamily:(NSInteger)arg0 ;
-(id)utilitarianLargeTemplateForConditions:(id)arg0 ;
-(id)utilitarianSmallTemplateForConditions:(id)arg0 ;


@end


#endif