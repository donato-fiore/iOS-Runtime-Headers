// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADMCPROFILECONNECTIONMANAGEDCONFIGURATIONHANDLER_H
#define CADMCPROFILECONNECTIONMANAGEDCONFIGURATIONHANDLER_H

@class MCProfileConnection;
@protocol CADManagedConfigurationHandler;

#import <Foundation/Foundation.h>


@interface CADMCProfileConnectionManagedConfigurationHandler : NSObject <CADManagedConfigurationHandler>



@property (readonly, nonatomic) MCProfileConnection *connection; // ivar: _connection


-(BOOL)isOpenInRestrictionInEffect;
-(BOOL)mayShowLocalAccountsForBundleID:(id)arg0 sourceAccountManagement:(int)arg1 ;
-(BOOL)mayShowLocalAccountsForTargetBundleID:(id)arg0 targetAccountManagement:(int)arg1 ;
-(id)filteredOpenInAccounts:(id)arg0 originatingAppBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)filteredOpenInOriginatingAccounts:(id)arg0 targetAppBundleID:(id)arg1 targetAccountManagement:(int)arg2 ;
-(id)initWithMCProfileConnection:(id)arg0 ;


@end


#endif