// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAUTHENTICATEACCOUNTSSERVICECONFIGURATION_H
#define SFAUTHENTICATEACCOUNTSSERVICECONFIGURATION_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SFAuthenticateAccountsServiceConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSSet *existingAccountsIdentifiers; // ivar: _existingAccountsIdentifiers
@property (nonatomic) BOOL isHomeKitSetupNeeded; // ivar: _isHomeKitSetupNeeded
@property (nonatomic) BOOL isHomeSharingSetupNeeded; // ivar: _isHomeSharingSetupNeeded
@property (nonatomic) unsigned int serviceType; // ivar: _serviceType
@property (nonatomic) unsigned int targetedAccountTypes; // ivar: _targetedAccountTypes


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif