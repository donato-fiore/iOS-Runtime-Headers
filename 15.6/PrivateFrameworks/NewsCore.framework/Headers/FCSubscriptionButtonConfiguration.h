// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSUBSCRIPTIONBUTTONCONFIGURATION_H
#define FCSUBSCRIPTIONBUTTONCONFIGURATION_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FCColor.h"

@interface FCSubscriptionButtonConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) FCColor *buttonColor; // ivar: _buttonColor
@property (retain, nonatomic) FCColor *buttonTextColor; // ivar: _buttonTextColor
@property (nonatomic, getter=shouldDismissLandingPagePostPurchase) BOOL dismissLandingPagePostPurchase; // ivar: _dismissLandingPagePostPurchase
@property (copy, nonatomic) NSString *landingPageArticleID; // ivar: _landingPageArticleID
@property (copy, nonatomic) NSString *nonTrialText; // ivar: _nonTrialText
@property (nonatomic) NSUInteger postPurchaseActionType; // ivar: _postPurchaseActionType
@property (copy, nonatomic) NSURL *postPurchaseURL; // ivar: _postPurchaseURL
@property (nonatomic) NSUInteger subscriptionButtonType; // ivar: _subscriptionButtonType
@property (nonatomic) NSUInteger targetType; // ivar: _targetType
@property (copy, nonatomic) NSString *trialText; // ivar: _trialText


+(id)defaultAmsSheetTargetSubscriptionButton;
+(id)defaultArticleSubscriptionButtonWithLandingPageArticleID:(id)arg0 ;
+(id)defaultIssueCoverSubscriptionButtonWithLandingPageArticleID:(id)arg0 ;
+(id)defaultLandingPageSubscriptionButtonWithLandingPageArticleID:(id)arg0 ;
+(id)defaultLandingPageTargetSubscriptionButtonWithLandingPageArticleID:(id)arg0 ;
+(id)defaultNonTrialText;
+(id)defaultOsloSheetTargetSubscriptionButton;
+(id)defaultSubscriptionButtonText;
+(id)defaultTrialText;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithSubscriptionButtonType:(NSUInteger)arg0 trialText:(id)arg1 nonTrialText:(id)arg2 buttonColor:(id)arg3 buttonTextColor:(id)arg4 targetType:(NSUInteger)arg5 postPurchaseActionType:(NSUInteger)arg6 postPurchaseURL:(id)arg7 landingPageArticleID:(id)arg8 dismissLandingPagePostPurchase:(BOOL)arg9 ;


@end


#endif