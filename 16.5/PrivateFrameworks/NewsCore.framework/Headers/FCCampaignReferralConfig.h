// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCAMPAIGNREFERRALCONFIG_H
#define FCCAMPAIGNREFERRALCONFIG_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface FCCampaignReferralConfig : NSObject

@property (copy, nonatomic) NSArray *autoFavoriteTagIDs; // ivar: _autoFavoriteTagIDs
@property (copy, nonatomic) NSString *campaignID; // ivar: _campaignID


-(id)initWithCampaignID:(id)arg0 configDictionary:(id)arg1 ;


@end


#endif