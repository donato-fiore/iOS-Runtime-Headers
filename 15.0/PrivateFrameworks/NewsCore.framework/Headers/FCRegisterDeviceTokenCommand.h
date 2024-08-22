// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCREGISTERDEVICETOKENCOMMAND_H
#define FCREGISTERDEVICETOKENCOMMAND_H

@class NSString;


#import "FCCommand.h"

@interface FCRegisterDeviceTokenCommand : FCCommand

@property (nonatomic) int deviceDigestMode; // ivar: _deviceDigestMode
@property (copy, nonatomic) NSString *deviceToken; // ivar: _deviceToken
@property (copy, nonatomic) NSString *storefrontID; // ivar: _storefrontID
@property (copy, nonatomic) NSString *userID; // ivar: _userID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserID:(id)arg0 deviceToken:(id)arg1 storefrontID:(id)arg2 deviceDigestMode:(int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 delegate:(id)arg1 qualityOfService:(NSInteger)arg2 ;


@end


#endif