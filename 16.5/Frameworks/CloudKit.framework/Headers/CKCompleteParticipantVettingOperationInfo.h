// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCOMPLETEPARTICIPANTVETTINGOPERATIONINFO_H
#define CKCOMPLETEPARTICIPANTVETTINGOPERATIONINFO_H

@class NSString, NSData;
@protocol NSSecureCoding;


#import "CKOperationInfo.h"

@interface CKCompleteParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSString *baseToken; // ivar: _baseToken
@property (retain, nonatomic) NSString *displayedHostname; // ivar: _displayedHostname
@property (retain, nonatomic) NSData *encryptedKey; // ivar: _encryptedKey
@property (retain, nonatomic) NSString *routingKey; // ivar: _routingKey
@property (retain, nonatomic) NSString *vettingEmail; // ivar: _vettingEmail
@property (retain, nonatomic) NSString *vettingPhone; // ivar: _vettingPhone
@property (copy, nonatomic) NSString *vettingToken; // ivar: _vettingToken


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif