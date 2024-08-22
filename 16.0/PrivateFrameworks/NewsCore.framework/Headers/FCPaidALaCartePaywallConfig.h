// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPAIDALACARTEPAYWALLCONFIG_H
#define FCPAIDALACARTEPAYWALLCONFIG_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCPaidALaCartePaywallConfig : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *channelID; // ivar: _channelID
@property (copy, nonatomic) NSString *channelId; // ivar: _channelId
@property (copy, nonatomic) NSString *channelPaywallTitle; // ivar: _channelPaywallTitle
@property (copy, nonatomic) NSString *hardPaywallTitle; // ivar: _hardPaywallTitle
@property (copy, nonatomic) NSString *leakyPaywallTitle; // ivar: _leakyPaywallTitle
@property (copy, nonatomic) NSString *promotionalPaywallTitle; // ivar: _promotionalPaywallTitle


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithChannelID:(id)arg0 channelPaywallTitle:(id)arg1 hardPaywallTitle:(id)arg2 leakyPaywallTitle:(id)arg3 promotionalPaywallTitle:(id)arg4 ;
-(id)initWithChannelID:(id)arg0 configDictionary:(id)arg1 ;


@end


#endif