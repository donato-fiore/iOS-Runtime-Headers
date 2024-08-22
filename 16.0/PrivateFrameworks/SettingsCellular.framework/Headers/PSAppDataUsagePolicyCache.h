// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSAPPDATAUSAGEPOLICYCACHE_H
#define PSAPPDATAUSAGEPOLICYCACHE_H

@class CoreTelephonyClient, NSCache;

#import <Foundation/Foundation.h>


@interface PSAppDataUsagePolicyCache : NSObject

@property (retain, nonatomic) CoreTelephonyClient *ctClient; // ivar: _ctClient
@property (retain, nonatomic) *__CTServerConnection ctServerConnection; // ivar: _ctServerConnection
@property (retain, nonatomic) NSCache *policyCache; // ivar: _policyCache


+(id)sharedInstance;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(id)policiesFor:(id)arg0 ;
-(void)addPoliciesToCache:(id)arg0 ;
-(void)clearCache;
-(void)dealloc;
-(void)fetchUsagePoliciesFor:(id)arg0 ;
-(void)fetchUsagePolicyFor:(id)arg0 ;
-(void)handlePolicyChangedNotification;
-(void)managedConfigurationProfileListDidChange;
-(void)managedConfigurationSettingsDidChange;
-(void)setPolicies:(id)arg0 completion:(id)arg1 ;
-(void)willEnterForeground;


@end


#endif