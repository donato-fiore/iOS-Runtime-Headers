// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUI5GSTANDALONECACHE_H
#define PSUI5GSTANDALONECACHE_H

@class CoreTelephonyClient, PSSimStatusCache, Logger, NSMutableDictionary, NSString;
@protocol CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate;

#import <Foundation/Foundation.h>


@interface PSUI5GStandaloneCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate>

 {
    CoreTelephonyClient *_client;
    PSSimStatusCache *_simStatusCache;
    BOOL _cacheNeedsRefresh;
    Logger *_logger;
}


@property (retain) NSMutableDictionary *SACapabilityDict; // ivar: _SACapabilityDict
@property (retain) NSMutableDictionary *SAEnabledDict; // ivar: _SAEnabledDict
@property (retain) NSMutableDictionary *SAStatusDict; // ivar: _SAStatusDict
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)is5GSAEnabledForContext:(id)arg0 ;
-(BOOL)is5GSASupportedForContext:(id)arg0 ;
-(BOOL)is5GSASwitchUserInteractableForContext:(id)arg0 ;
-(NSUInteger)getUserInteractableStatusReasonMaskForContext:(id)arg0 ;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(id)initWithCoreTelephonyClient:(id)arg0 simStatusCache:(id)arg1 ;
-(id)set5GSAEnabled:(BOOL)arg0 forContext:(id)arg1 ;
-(void)carrierBundleChange:(id)arg0 ;
-(void)clearCache;
-(void)clearCacheAndRefresh;
-(void)currentDataSimChanged:(id)arg0 ;
-(void)dealloc;
-(void)fetch5GSupportAndEnabledStatusIfNeeded;
-(void)fetchNRDisableStatus;
-(void)notifyClientsNeedRefresh;
-(void)nrDisableStatusChanged:(id)arg0 status:(id)arg1 ;
-(void)willEnterForeground;


@end


#endif