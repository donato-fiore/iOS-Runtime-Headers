// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMUSICSUBSCRIPTIONFAIRPLAYKEYSTATUS_H
#define ICMUSICSUBSCRIPTIONFAIRPLAYKEYSTATUS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICMusicSubscriptionFairPlayKeyStatus : NSObject <NSCopying>



@property (nonatomic) NSUInteger accountUniqueIdentifier; // ivar: _accountUniqueIdentifier
@property (nonatomic) BOOL hasOfflinePlaybackKeys; // ivar: _hasOfflinePlaybackKeys
@property (nonatomic) BOOL hasOnlinePlaybackKeys; // ivar: _hasOnlinePlaybackKeys


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFairPlaySubscriptionInfo:(struct FPSubscriptionInfo_ )arg0 ;


@end


#endif