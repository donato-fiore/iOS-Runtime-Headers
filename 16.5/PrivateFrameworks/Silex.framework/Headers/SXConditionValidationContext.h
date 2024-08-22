// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCONDITIONVALIDATIONCONTEXT_H
#define SXCONDITIONVALIDATIONCONTEXT_H

@class NSString;
@protocol SXConditionValidationContext;

#import <Foundation/Foundation.h>

#import "SXLayoutOptions.h"

@interface SXConditionValidationContext : NSObject <SXConditionValidationContext>



@property (readonly, nonatomic, getter=isBundleSubscriber) BOOL bundleSubscriber;
@property (readonly, nonatomic, getter=isBundleTrialEligible) BOOL bundleTrialEligible;
@property (readonly, nonatomic, getter=isChannelSubscriber) BOOL channelSubscriber;
@property (readonly, nonatomic) CGFloat contentScaleFactor;
@property (readonly, nonatomic) NSString *contentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger horizontalSizeClass;
@property (readonly, nonatomic) SXLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly, nonatomic) NSUInteger newsletterSubscriptionStatus;
@property (readonly, nonatomic) NSUInteger numberOfColumns;
@property (readonly, nonatomic) NSInteger offerUpsellScenario;
@property (readonly, nonatomic) NSInteger subscriptionActivationEligibility;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL testing;
@property (readonly, nonatomic) NSInteger userInterfaceStyle;
@property (readonly, nonatomic) NSInteger verticalSizeClass;
@property (readonly, nonatomic) NSUInteger viewingLocation;
@property (readonly, nonatomic) CGSize viewportSize;


-(id)initWithLayoutOptions:(id)arg0 ;


@end


#endif