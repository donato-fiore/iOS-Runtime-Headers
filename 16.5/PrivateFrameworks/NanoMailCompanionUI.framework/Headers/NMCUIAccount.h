// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMCUIACCOUNT_H
#define NMCUIACCOUNT_H

@class ACAccount, NSString, NNMKAccount;

#import <Foundation/Foundation.h>


@interface NMCUIAccount : NSObject

@property (retain) ACAccount *acAccount; // ivar: _acAccount
@property (readonly) NSString *accountTypeIdentifier;
@property (readonly, nonatomic) BOOL directPushNotificationsSupported;
@property (readonly) NSString *displayName;
@property (readonly) NSString *emailAddress;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly) NSString *identifier;
@property (retain) NNMKAccount *nnmkAccount; // ivar: _nnmkAccount
@property (readonly) NSString *username;


-(BOOL)_isIcloud;
-(id)initWithACAccount:(id)arg0 ;
-(id)initWithNNMKAccount:(id)arg0 ;
-(id)rootAccount:(id)arg0 ;


@end


#endif