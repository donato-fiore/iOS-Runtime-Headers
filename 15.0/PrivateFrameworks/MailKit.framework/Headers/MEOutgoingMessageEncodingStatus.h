// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEOUTGOINGMESSAGEENCODINGSTATUS_H
#define MEOUTGOINGMESSAGEENCODINGSTATUS_H

@class NSArray, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MEOutgoingMessageEncodingStatus : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *addressesFailingEncryption; // ivar: _addressesFailingEncryption
@property (readonly, nonatomic) BOOL canEncrypt; // ivar: _canEncrypt
@property (readonly, nonatomic) BOOL canSign; // ivar: _canSign
@property (readonly, copy, nonatomic) NSError *securityError; // ivar: _securityError


+(BOOL)supportsSecureCoding;
-(id)initWithCanSign:(BOOL)arg0 canEncrypt:(BOOL)arg1 securityError:(id)arg2 addressesFailingEncryption:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif