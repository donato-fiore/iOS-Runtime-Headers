// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWCAIRQUALITYTEMPLATEFORMATTER_H
#define NWCAIRQUALITYTEMPLATEFORMATTER_H

@class NSString, NSNumberFormatter;
@protocol NWCTemplateFormattable;

#import <Foundation/Foundation.h>


@interface NWCAirQualityTemplateFormatter : NSObject <NWCTemplateFormattable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumberFormatter *indexNumberFormatter; // ivar: _indexNumberFormatter
@property (readonly) Class superclass;


+(id)sharedFormatter;
-(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_localizedIndexForConditions:(id)arg0 ;
-(id)_richCircularTemplateForComplicationFamily:(NSInteger)arg0 conditions:(id)arg1 location:(id)arg2 ;
-(id)_segmentedTemplate:(id)arg0 family:(NSInteger)arg1 ;
-(id)circularMediumTemplateForConditions:(id)arg0 ;
-(id)circularSmallTemplateForConditions:(id)arg0 ;
-(id)extraLargeTemplateForConditions:(id)arg0 ;
-(id)graphicBezelTemplateForConditions:(id)arg0 location:(id)arg1 ;
-(id)graphicCircularTemplateForConditions:(id)arg0 location:(id)arg1 ;
-(id)graphicCornerTemplateForConditions:(id)arg0 location:(id)arg1 ;
-(id)graphicExtraLargeTemplateForConditions:(id)arg0 location:(id)arg1 ;
-(id)init;
-(id)modularLargeTemplateForLocation:(id)arg0 isLocalLocation:(BOOL)arg1 conditions:(id)arg2 ;
-(id)modularSmallTemplateForLocation:(id)arg0 conditions:(id)arg1 ;
-(id)switcherTemplateWithFamily:(NSInteger)arg0 ;
-(id)utilitarianLargeTemplateForLocation:(id)arg0 conditions:(id)arg1 ;
-(id)utilitarianSmallTemplateForConditions:(id)arg0 ;


@end


#endif