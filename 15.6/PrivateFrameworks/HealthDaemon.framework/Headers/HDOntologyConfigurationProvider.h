// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDONTOLOGYCONFIGURATIONPROVIDER_H
#define HDONTOLOGYCONFIGURATIONPROVIDER_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "HDHealthOntologyConfiguration.h"
#import "HDProfile.h"

@interface HDOntologyConfigurationProvider : NSObject {
    HDHealthOntologyConfiguration *_ontologyConfiguration;
}


@property (readonly, copy, nonatomic) NSSet *allSupportedCountryCodes;
@property (readonly, copy, nonatomic) NSSet *improveHealthRecordsGatedAnalyticsEnabledCountryCodes;
@property (readonly, copy, nonatomic) NSSet *optInDataCollectionEnabledCountryCodes;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) HDHealthOntologyConfiguration *unitTesting_ontologyConfigurationOverride; // ivar: _unitTesting_ontologyConfigurationOverride


-(BOOL)isCountryCodeSupported:(id)arg0 ;
-(BOOL)isCountrySupported:(id)arg0 ;
-(id)init;
-(id)ontologyConfigurationForCountryCode:(id)arg0 ;


@end


#endif