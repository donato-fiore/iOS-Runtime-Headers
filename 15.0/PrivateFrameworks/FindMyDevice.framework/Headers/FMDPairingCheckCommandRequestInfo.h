// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMDPAIRINGCHECKCOMMANDREQUESTINFO_H
#define FMDPAIRINGCHECKCOMMANDREQUESTINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDPairingCheckCommandRequestInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accessoryType; // ivar: _accessoryType
@property (retain, nonatomic) NSString *authNonce; // ivar: _authNonce
@property (retain, nonatomic) NSString *pairingCheckToken; // ivar: _pairingCheckToken


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif