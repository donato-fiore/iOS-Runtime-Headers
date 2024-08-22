// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCRESTOREPAIDSUBSCRIPTIONITEM_H
#define FCRESTOREPAIDSUBSCRIPTIONITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCRestorePaidSubscriptionItem : NSObject

@property (readonly, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, nonatomic) BOOL isNewsAppPurchase; // ivar: _isNewsAppPurchase


-(id)initWithChannelID:(id)arg0 isNewsAppPurchase:(BOOL)arg1 ;


@end


#endif