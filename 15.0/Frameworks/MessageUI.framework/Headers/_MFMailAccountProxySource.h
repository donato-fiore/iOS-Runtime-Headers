// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFMAILACCOUNTPROXYSOURCE_H
#define _MFMAILACCOUNTPROXYSOURCE_H

@class NSLock, NSArray;

#import <Foundation/Foundation.h>


@interface _MFMailAccountProxySource : NSObject {
    NSLock *_lock;
    NSArray *_accountProxies;
    int _lastSourceAccountManagementQueried;
    BOOL _registeredForNotifications;
    int _notifyToken;
}




+(id)defaultInstance;
-(id)accountProxiesOriginatingBundleID:(id)arg0 sourceAccountManagement:(int)arg1 ;
-(id)init;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_deregisterForNotifications_nts;
-(void)_registerForNotifications_nts;
-(void)_resetAccountsChanged:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif