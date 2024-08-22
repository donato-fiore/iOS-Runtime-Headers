// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINTERACTIVECHARTINFOGRAPHICFACTORY_H
#define HKINTERACTIVECHARTINFOGRAPHICFACTORY_H


#import <Foundation/Foundation.h>


@interface HKInteractiveChartInfographicFactory : NSObject



+(BOOL)infographicSupportedForDisplayType:(id)arg0 healthStore:(id)arg1 ;
+(BOOL)infographicSupportedForDisplayType:(id)arg0 secondaryDisplayType:(id)arg1 healthStore:(id)arg2 ;
+(id)_appleWalkingSteadinessInfographicForDisplayType:(id)arg0 ;
+(id)_attributedSymbolForAudioClassification:(NSUInteger)arg0 textStyle:(id)arg1 ;
+(id)_environmentalAudioExposureInfographic;
+(id)_exposureLimitTextItem;
+(id)_headphoneAudioExposureInfographic;
+(id)_itemForAppleWalkingSteadinessInfographicWithClassification:(NSInteger)arg0 ;
+(id)_itemForAudioInfographicWithClassification:(NSUInteger)arg0 descriptionKey:(id)arg1 ;
+(id)_itemWithTitleKey:(id)arg0 valueKey:(id)arg1 ;
+(id)_itemWithTitleKey:(id)arg0 valueKey:(id)arg1 hideSeparator:(BOOL)arg2 ;
+(id)_tableTitleAttributes;
+(id)_titleAttributes;
+(id)_whoExposureTextItem;
+(id)infographicViewControllerForDisplayType:(id)arg0 healthStore:(id)arg1 ;
+(id)infographicViewControllerForDisplayType:(id)arg0 secondaryDisplayType:(id)arg1 addDataViewControllerProvider:(id)arg2 healthStore:(id)arg3 ;


@end


#endif