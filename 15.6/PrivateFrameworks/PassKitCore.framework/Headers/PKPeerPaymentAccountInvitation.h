// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTACCOUNTINVITATION_H
#define PKPEERPAYMENTACCOUNTINVITATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentAccountInvitation : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (nonatomic) NSUInteger registrationResult; // ivar: _registrationResult
@property (nonatomic) NSInteger remoteRegistrationRequestLevel; // ivar: _remoteRegistrationRequestLevel
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif