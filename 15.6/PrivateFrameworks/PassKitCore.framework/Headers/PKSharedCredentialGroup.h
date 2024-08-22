// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHAREDCREDENTIALGROUP_H
#define PKSHAREDCREDENTIALGROUP_H

@class NSSet, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAppletSubcredential.h"
#import "PKAppletSubcredentialEntitlement.h"

@interface PKSharedCredentialGroup : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKAppletSubcredential *credential; // ivar: _credential
@property (readonly, nonatomic) PKAppletSubcredentialEntitlement *entitlement; // ivar: _entitlement
@property (readonly, nonatomic, getter=isLocalGroup) BOOL localGroup; // ivar: _localGroup
@property (readonly, nonatomic) NSSet *receipts; // ivar: _receipts
@property (readonly, nonatomic) NSString *recipientHandle; // ivar: _recipientHandle
@property (readonly, nonatomic) NSString *recipientName; // ivar: _recipientName
@property (readonly, nonatomic) NSSet *sharedCredentials; // ivar: _sharedCredentials
@property (readonly, nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredential:(id)arg0 sharedCredentials:(id)arg1 receipts:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)parseGroupItems;


@end


#endif