// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHCAMPAIGNTOKENS_H
#define SHCAMPAIGNTOKENS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SHCampaignTokens : NSObject

@property (readonly, nonatomic) NSDictionary *campaignTokens; // ivar: _campaignTokens


-(id)initWithConfiguration:(id)arg0 ;
-(id)tokenForClientIdentifier:(id)arg0 ;


@end


#endif