// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCMODIFYNOTIFICATIONSFORCHANNELSCOMMAND_H
#define FCMODIFYNOTIFICATIONSFORCHANNELSCOMMAND_H

@class NSArray, NSString;


#import "FCCommand.h"

@interface FCModifyNotificationsForChannelsCommand : FCCommand

@property (copy, nonatomic) NSArray *channelIDsToAdd; // ivar: _channelIDsToAdd
@property (copy, nonatomic) NSArray *channelIDsToRemove; // ivar: _channelIDsToRemove
@property (nonatomic) int deviceDigestMode; // ivar: _deviceDigestMode
@property (copy, nonatomic) NSString *deviceToken; // ivar: _deviceToken
@property (copy, nonatomic) NSArray *paidChannelIDsToAdd; // ivar: _paidChannelIDsToAdd
@property (copy, nonatomic) NSString *storefrontID; // ivar: _storefrontID
@property (copy, nonatomic) NSString *userID; // ivar: _userID


+(BOOL)supportsSecureCoding;
-(BOOL)canCoalesceWithCommand:(id)arg0 ;
-(id)initWithChannelIDsToAdd:(id)arg0 paidChannelIDsToAdd:(id)arg1 channelIDsToRemove:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 deviceDigestMode:(int)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)coalesceWithCommand:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 delegate:(id)arg1 qualityOfService:(NSInteger)arg2 ;


@end


#endif