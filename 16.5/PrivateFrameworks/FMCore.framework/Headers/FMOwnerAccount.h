// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMOWNERACCOUNT_H
#define FMOWNERACCOUNT_H

@class ACAccount, NSString;
@protocol FMOwnerAccountIdentity;

#import <Foundation/Foundation.h>


@interface FMOwnerAccount : NSObject <FMOwnerAccountIdentity>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy, nonatomic) NSString *authToken; // ivar: _authToken
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) NSString *hostName; // ivar: _hostName
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (nonatomic) BOOL legacyBehavior; // ivar: _legacyBehavior
@property (copy, nonatomic) NSString *personId; // ivar: _personId
@property (copy, nonatomic) NSString *username; // ivar: _username


+(id)authTokenForSubAccount:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
+(id)hostNameForAccount:(id)arg0 type:(NSInteger)arg1 ;
+(id)ownerAccount;
+(id)ownerAccountWithType:(NSInteger)arg0 ;
+(id)personIdForAccount:(id)arg0 error:(*id)arg1 ;
+(id)primaryAccountWithStore:(id)arg0 error:(*id)arg1 ;
+(id)sharedInstance;
+(id)subAccountForAccount:(id)arg0 type:(NSInteger)arg1 ;
+(void)renewCredentialsWithBundleId:(id)arg0 force:(BOOL)arg1 reason:(id)arg2 completion:(id)arg3 ;
-(id)description;
-(id)hostNameOfType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithAuthToken:(id)arg0 personId:(id)arg1 ;
-(id)tokenOfType:(NSInteger)arg0 ;
-(void)dealloc;
-(void)initializeAccount;


@end


#endif