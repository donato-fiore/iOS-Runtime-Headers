// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKSYNCEDACCOUNT_H
#define NNMKSYNCEDACCOUNT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface NNMKSyncedAccount : NSObject

@property (retain, nonatomic) NSString *accountId; // ivar: _accountId
@property (retain, nonatomic) NSString *defaultEmailAddress; // ivar: _defaultEmailAddress
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *emailAddressToken; // ivar: _emailAddressToken
@property (retain, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) NSString *localId; // ivar: _localId
@property (retain, nonatomic) NSString *pccEmailAddress; // ivar: _pccEmailAddress
@property (nonatomic) NSUInteger resendInterval; // ivar: _resendInterval
@property (nonatomic) BOOL resendRequested; // ivar: _resendRequested
@property (nonatomic) BOOL shouldArchive; // ivar: _shouldArchive
@property (nonatomic) NSUInteger sourceType; // ivar: _sourceType
@property (retain, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier
@property (retain, nonatomic) NSString *username; // ivar: _username


-(id)account;
-(id)init;
-(id)initWithAccount:(id)arg0 ;


@end


#endif