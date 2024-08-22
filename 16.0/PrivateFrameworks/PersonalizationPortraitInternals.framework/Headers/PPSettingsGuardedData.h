// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSETTINGSGUARDEDDATA_H
#define PPSETTINGSGUARDEDDATA_H

@class NSSet, NSMutableDictionary, NSDate, NSData, NSString;

#import <Foundation/Foundation.h>


@interface PPSettingsGuardedData : NSObject {
    CGFloat _cachedWeightMultiplier;
    NSSet *_donationDisabledBundleIdentifiers;
    NSSet *_cloudKitDisabledBundleIdentifiers;
    NSMutableDictionary *_donationDisabledChangeHandlers;
    NSMutableDictionary *_queryPlanLoggingChangeHandlers;
    int _nextChangeHandlerToken;
    BOOL _appConnectionsLocationsEnabled;
    NSDate *_entitiesBackfillTimestamp;
    NSData *_entitiesMappingTrieSha256;
    NSString *_abGroupOverride;
}






@end


#endif