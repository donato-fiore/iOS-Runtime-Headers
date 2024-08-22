// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCREFRESHNOTIFICATIONSFORCHANNELSCOMMAND_H
#define FCREFRESHNOTIFICATIONSFORCHANNELSCOMMAND_H

@class NSArray, NSString;


#import "FCCommand.h"

@interface FCRefreshNotificationsForChannelsCommand : FCCommand

@property (copy, nonatomic) NSArray *channelIDs; // ivar: _channelIDs
@property (nonatomic) int deviceDigestMode; // ivar: _deviceDigestMode
@property (copy, nonatomic) NSString *deviceToken; // ivar: _deviceToken
@property (copy, nonatomic) NSArray *paidChannelIDs; // ivar: _paidChannelIDs
@property (copy, nonatomic) NSString *storefrontID; // ivar: _storefrontID
@property (copy, nonatomic) NSString *userID; // ivar: _userID


+(BOOL)supportsSecureCoding;
-(id)initWithChannelIDs:(id)arg0 paidChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 deviceDigestMode:(int)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 delegate:(id)arg1 qualityOfService:(NSInteger)arg2 ;


@end


#endif