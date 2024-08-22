// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXLAYOUTOPTIONS_H
#define SXLAYOUTOPTIONS_H

@class NSString, UITraitCollection;

#import <Foundation/Foundation.h>

#import "SXColumnLayout.h"

@interface SXLayoutOptions : NSObject

@property (readonly, nonatomic) NSInteger bundleSubscriptionStatus; // ivar: _bundleSubscriptionStatus
@property (readonly, nonatomic) NSInteger channelSubscriptionStatus; // ivar: _channelSubscriptionStatus
@property (readonly, nonatomic) SXColumnLayout *columnLayout; // ivar: _columnLayout
@property (readonly, nonatomic) CGFloat contentScaleFactor; // ivar: _contentScaleFactor
@property (readonly, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, nonatomic) NSUInteger newsletterSubscriptionStatus; // ivar: _newsletterSubscriptionStatus
@property (readonly, nonatomic) NSInteger offerUpsellScenario; // ivar: _offerUpsellScenario
@property (readonly, nonatomic) BOOL smartInvertColorsEnabled; // ivar: _smartInvertColorsEnabled
@property (readonly, nonatomic) NSInteger subscriptionActivationEligibility; // ivar: _subscriptionActivationEligibility
@property (readonly, nonatomic) BOOL testing; // ivar: _testing
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) NSUInteger viewingLocation; // ivar: _viewingLocation
@property (readonly, nonatomic) CGSize viewportSize; // ivar: _viewportSize


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)diffWithLayoutOptions:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithColumnLayout:(id)arg0 viewportSize:(struct CGSize )arg1 traitCollection:(id)arg2 contentSizeCategory:(id)arg3 bundleSubscriptionStatus:(NSInteger)arg4 channelSubscriptionStatus:(NSInteger)arg5 testing:(BOOL)arg6 viewingLocation:(NSUInteger)arg7 contentScaleFactor:(CGFloat)arg8 newsletterSubscriptionStatus:(NSUInteger)arg9 offerUpsellScenario:(NSInteger)arg10 subscriptionActivationEligibility:(NSInteger)arg11 smartInvertColorsEnabled:(BOOL)arg12 ;


@end


#endif