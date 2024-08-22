// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMANAGEDPROFILECONNECTION_H
#define CNMANAGEDPROFILECONNECTION_H

@class NSString, MCProfileConnection;
@protocol CNManagedProfileConnection;

#import <Foundation/Foundation.h>


@interface CNManagedProfileConnection : NSObject <CNManagedProfileConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MCProfileConnection *profileConnection; // ivar: _profileConnection
@property (readonly) Class superclass;


+(id)sharedConnection;
-(BOOL)isOpenInRestrictionInEffect;
-(BOOL)mayShowLocalContactsAccountsForBundleID:(id)arg0 sourceAccountManagement:(NSInteger)arg1 ;
-(BOOL)mayShowLocalContactsAccountsForTargetBundleID:(id)arg0 targetAccountManagement:(NSInteger)arg1 ;
-(id)filteredOpenInAccounts:(id)arg0 originatingAppBundleID:(id)arg1 sourceAccountManagement:(NSInteger)arg2 ;
-(id)filteredOpenInOriginatingAccounts:(id)arg0 targetAppBundleID:(id)arg1 targetAccountManagement:(NSInteger)arg2 ;
-(id)init;
-(id)initWithProfileConnection:(id)arg0 ;


@end


#endif