// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSETTINGS_H
#define CKVSETTINGS_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKVLocalization.h"
#import "CKVSearchContext.h"

@interface CKVSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL isSandboxInstance; // ivar: _isSandboxInstance
@property (readonly) CKVLocalization *localization; // ivar: _localization
@property (readonly, nonatomic) CKVSearchContext *searchContext; // ivar: _searchContext
@property (retain) NSDictionary *simulatedPriors;


+(BOOL)supportsSecureCoding;
+(id)defaultSandboxSettings;
+(id)defaultSettings;
+(id)sandboxSettingsWithLocale:(id)arg0 ;
-(BOOL)_shouldDonateAll;
-(BOOL)_shouldOverrideDonationSettings;
-(BOOL)isSkitEnabled;
-(BOOL)isVocabularyDonationEnabled;
-(BOOL)shouldDonateAppInfo;
-(BOOL)shouldDonateContacts;
-(BOOL)shouldDonateCustomVocabulary;
-(BOOL)shouldDonateHomeKit;
-(BOOL)shouldDonateMedia;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalization:(id)arg0 isSandboxInstance:(BOOL)arg1 ;
-(id)overrideRankerAbsoluteThreshold;
-(id)overrideRankerAllowApproximateMatch;
-(id)overrideRankerAllowPartialMatch;
-(id)overrideRankerGlobalRelativeThreshold;
-(id)overrideRankerMatchScoreWeight;
-(id)overrideRankerPriorScoreWeight;
-(id)overrideRankerPrioritizeExactMatch;
-(id)overrideRankerRegionalRelativeThreshold;
-(id)overrideRankerUsePriors;
-(id)overrideRankerUseTopFive;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif