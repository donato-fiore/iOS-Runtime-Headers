// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SESAUTHORIZATIONINFO_H
#define SESAUTHORIZATIONINFO_H

@class NSData, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SESAuthorizationInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *anonymizedDSID; // ivar: _anonymizedDSID
@property (retain, nonatomic) NSData *authorizationID; // ivar: _authorizationID
@property (retain, nonatomic) NSData *publicKeyIdentifier; // ivar: _publicKeyIdentifier
@property (retain, nonatomic) NSNumber *remainingCount; // ivar: _remainingCount
@property (retain, nonatomic) NSNumber *remainingTime; // ivar: _remainingTime
@property (nonatomic) unsigned char state; // ivar: _state


+(BOOL)supportsSecureCoding;
+(id)withState:(unsigned char)arg0 remaningCount:(id)arg1 remainingTime:(id)arg2 publicKeyIdentifier:(id)arg3 authorizationID:(id)arg4 anonymizedDSID:(id)arg5 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif