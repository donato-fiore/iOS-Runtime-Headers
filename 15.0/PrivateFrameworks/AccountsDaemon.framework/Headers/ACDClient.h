// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDCLIENT_H
#define ACDCLIENT_H

@class NSString, NSNumber, NSMutableDictionary, NSXPCConnection, NSSet;

#import <Foundation/Foundation.h>

#import "ACDAccountStoreFilter.h"

@interface ACDClient : NSObject {
    *__CFBundle _bundle;
    NSString *_bundleID;
    BOOL _didManuallySetBundleID;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_entitlementChecks;
    os_unfair_lock_s _clientPropertyLock;
}


@property (readonly, nonatomic) NSString *adamOrDisplayID;
@property (readonly, nonatomic) *__CFBundle bundle;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) ACDAccountStoreFilter *filter; // ivar: _filter
@property (readonly, nonatomic) NSString *localizedAppName;
@property (retain, nonatomic) NSSet *monitoredAccountTypes; // ivar: _monitoredAccountTypes
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *pid;


+(id)_bundleForNonPlugInPID:(int)arg0 ;
+(id)_bundleForPID:(int)arg0 ;
+(id)_bundleIDForPID:(int)arg0 ;
+(id)clientWithBundleID:(id)arg0 ;
-(BOOL)hasEntitlement:(id)arg0 ;
-(id)_displayNameFromBundleInfoDictionaryForPID:(int)arg0 ;
-(id)_displayNameFromLaunchServicesForPID:(int)arg0 ;
-(id)_rawValueForEntitlement:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(void)dealloc;


@end


#endif