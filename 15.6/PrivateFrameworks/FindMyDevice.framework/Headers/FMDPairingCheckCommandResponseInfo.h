// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMDPAIRINGCHECKCOMMANDRESPONSEINFO_H
#define FMDPAIRINGCHECKCOMMANDRESPONSEINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDPairingCheckCommandResponseInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *lostModeInfo; // ivar: _lostModeInfo
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) NSString *serverNonce; // ivar: _serverNonce
@property (retain, nonatomic) NSString *signature; // ivar: _signature
@property (retain, nonatomic) NSString *statusCode; // ivar: _statusCode
@property (retain, nonatomic) NSString *useEraseKeyType; // ivar: _useEraseKeyType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif