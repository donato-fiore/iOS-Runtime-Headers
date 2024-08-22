// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVMUTABLEPLAYACTIVITYEVENTITEMIDS_H
#define SSVMUTABLEPLAYACTIVITYEVENTITEMIDS_H

@class NSString;


#import "SSVPlayActivityEventItemIDs.h"

@interface SSVMutablePlayActivityEventItemIDs : SSVPlayActivityEventItemIDs

@property (nonatomic) NSUInteger cloudID;
@property (nonatomic) NSInteger equivalencySourceAdamID;
@property (copy, nonatomic) NSString *lyricsID;
@property (nonatomic) NSInteger purchasedAdamID;
@property (nonatomic) NSInteger radioAdamID;
@property (nonatomic) NSInteger subscriptionAdamID;
@property (nonatomic) NSInteger tvShowPurchasedAdamID;
@property (nonatomic) NSInteger tvShowSubscriptionAdamID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif