// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSAUTOFILLPASSKEY_H
#define WBSAUTOFILLPASSKEY_H

@class NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WBSPublicKeyCredentialIdentifier.h"

@interface WBSAutoFillPasskey : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSUUID *operationUUID; // ivar: _operationUUID
@property (readonly, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsername:(id)arg0 relyingPartyIdentifier:(id)arg1 identifier:(id)arg2 operationUUID:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif