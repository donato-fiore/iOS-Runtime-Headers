// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSBLOOKUPCONTEXT_H
#define SSBLOOKUPCONTEXT_H

@class NSString;
@protocol MCProfileConnectionObserver;

#import <Foundation/Foundation.h>


@interface SSBLookupContext : NSObject <MCProfileConnectionObserver>

 {
    shared_ptr<SafeBrowsing::LookupContext> _lookupContext;
    unsigned int _observerToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedLookupContext;
-(id)init;
-(void)_deleteAllDatabasesWithCompletionHandler:(id)arg0 ;
-(void)_fetchCellularDataPlanWithCompletionHandler:(id)arg0 ;
-(void)_forceDatabaseUpdateWithCompletionHandler:(id)arg0 ;
-(void)_forceDeviceIdentificationTokenUpdateWithCompletionHandler:(id)arg0 ;
-(void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(id)arg0 ;
-(void)_forceLookUpURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(id)arg0 ;
-(void)_getDatabaseStatusWithCompletionHandler:(id)arg0 ;
-(void)_getLastDatabaseUpdateTimeWithCompletionHandler:(id)arg0 ;
-(void)_getSafeBrowsingEnabledState:(id)arg0 ;
-(void)_getServiceStatusWithCompletionHandler:(id)arg0 ;
-(void)_lookUpURL:(id)arg0 ignoreEnableState:(int)arg1 completionHandler:(id)arg2 ;
-(void)_lookUpURLs:(id)arg0 forProtectionType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)_setSafeBrowsingEnabledStateNeedsUpdate;
-(void)dealloc;
-(void)lookUpURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif