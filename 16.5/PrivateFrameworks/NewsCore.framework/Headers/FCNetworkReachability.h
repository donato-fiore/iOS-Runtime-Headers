// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNETWORKREACHABILITY_H
#define FCNETWORKREACHABILITY_H

@class NSString, NSHashTable;
@protocol FCNetworkReachabilityType;

#import <Foundation/Foundation.h>


@interface FCNetworkReachability : NSObject <FCNetworkReachabilityType>



@property (nonatomic) BOOL accessRestrictedBecauseOfAppVersion; // ivar: _accessRestrictedBecauseOfAppVersion
@property (nonatomic) BOOL accessRestrictedBecauseOfCountry; // ivar: _accessRestrictedBecauseOfCountry
@property (nonatomic) BOOL accessRestrictedBecauseOfDeviceAbandoned; // ivar: _accessRestrictedBecauseOfDeviceAbandoned
@property (nonatomic) BOOL accessRestrictedBecauseOfOSVersion; // ivar: _accessRestrictedBecauseOfOSVersion
@property (nonatomic) NSInteger cellularRadioAccessTechnology; // ivar: _cellularRadioAccessTechnology
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCloudKitAccessAllowed; // ivar: _isCloudKitAccessAllowed
@property (readonly, nonatomic) BOOL isCloudKitReachable;
@property (nonatomic) BOOL isLowDataModeEnabled; // ivar: _isLowDataModeEnabled
@property (readonly, nonatomic) BOOL isNetworkOnlyReachableViaCellular;
@property (nonatomic) BOOL isNetworkReachable; // ivar: _isNetworkReachable
@property (nonatomic) BOOL isNetworkReachableViaCellular; // ivar: _isNetworkReachableViaCellular
@property (nonatomic) BOOL isNetworkReachableViaWiFi; // ivar: _isNetworkReachableViaWiFi
@property (nonatomic) BOOL isNetworkUsageExpensive; // ivar: _isNetworkUsageExpensive
@property (readonly, nonatomic) BOOL isNetworkUsageInexpensive;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) NSInteger offlineReason; // ivar: _offlineReason
@property (readonly, nonatomic) NSInteger reachabilityStatus;
@property (readonly) Class superclass;


+(id)sharedNetworkReachability;
-(NSInteger)_cellularRadioAccessTechnologyFromString:(id)arg0 ;
-(id)init;
-(void)_accessRestrictionsChanged;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)_updateReachability;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif