// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSMSFILTERCAPABILITIESBINDER_H
#define IMSMSFILTERCAPABILITIESBINDER_H


#import <Foundation/Foundation.h>


@interface IMSMSFilterCapabilitiesBinder : NSObject



+(BOOL)firstPartyFilterExtensionActive;
+(BOOL)isValidSubAction:(NSInteger)arg0 subAction:(NSInteger)arg1 ;
+(NSInteger)localizeSubAction:(NSInteger)arg0 ;
+(int)updateFilterParamsBindings:(id)arg0 promotionalSubActions:(id)arg1 ;
+(void)IMMetricsCollectorForSMSSubClassification:(NSUInteger)arg0 ;
+(void)executeCompletionBlockForFilterParamsUpdate:(id)arg0 promo:(id)arg1 ;
+(void)handleSubClassificationFilterChange;


@end


#endif