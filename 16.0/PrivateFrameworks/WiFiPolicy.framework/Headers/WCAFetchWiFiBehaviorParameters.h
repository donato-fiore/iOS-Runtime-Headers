// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WCAFETCHWIFIBEHAVIORPARAMETERS_H
#define WCAFETCHWIFIBEHAVIORPARAMETERS_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface WCAFetchWiFiBehaviorParameters : NSObject

@property (retain, nonatomic) NSArray *ambiguousSSIDs; // ivar: _ambiguousSSIDs
@property (retain, nonatomic) NSDictionary *apProfile; // ivar: _apProfile
@property (retain, nonatomic) NSDictionary *beaconParsing; // ivar: _beaconParsing
@property (retain, nonatomic) NSDictionary *datapathTelemetry; // ivar: _datapathTelemetry
@property (retain, nonatomic) NSDictionary *disabledMacRandomizationVersions; // ivar: _disabledMacRandomizationVersions
@property (retain, nonatomic) NSArray *internalSSIDs; // ivar: _internalSSIDs
@property (retain, nonatomic) NSDictionary *jtrnDefaults; // ivar: _jtrnDefaults
@property (retain, nonatomic) NSDictionary *softErrors; // ivar: _softErrors


+(void)fetchWiFiBehaviorWithCompletion:(id)arg0 ;


@end


#endif