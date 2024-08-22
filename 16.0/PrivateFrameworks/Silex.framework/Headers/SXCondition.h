// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCONDITION_H
#define SXCONDITION_H

@class NSString, NSSet;
@protocol SXCondition;


#import "SXJSONObject.h"

@interface SXCondition : SXJSONObject <SXCondition>



@property (readonly, nonatomic) NSString *app;
@property (readonly, nonatomic) NSString *configurationKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger horizontalSizeClass;
@property (readonly, nonatomic) NSUInteger maxColumns;
@property (readonly, nonatomic) NSString *maxContentSizeCategory;
@property (readonly, nonatomic) NSString *maxSpecVersion;
@property (readonly, nonatomic) CGFloat maxViewportAspectRatio;
@property (readonly, nonatomic) CGFloat maxViewportWidth;
@property (readonly, nonatomic) NSUInteger minColumns;
@property (readonly, nonatomic) NSString *minContentSizeCategory;
@property (readonly, nonatomic) NSString *minSpecVersion;
@property (readonly, nonatomic) CGFloat minViewportAspectRatio;
@property (readonly, nonatomic) CGFloat minViewportWidth;
@property (readonly, nonatomic) NSUInteger newsletterSubscriptionStatus;
@property (readonly, nonatomic) NSInteger offerUpsellScenario;
@property (readonly, nonatomic) NSString *platform;
@property (readonly, nonatomic) NSUInteger preferredColorScheme;
@property (readonly, nonatomic) NSInteger subscriptionActivationEligibility;
@property (readonly, nonatomic) NSString *subscriptionStatus;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger testing;
@property (readonly, nonatomic) NSSet *types;
@property (readonly, nonatomic) NSInteger verticalSizeClass;
@property (readonly, nonatomic) NSString *viewLocation;


+(id)jsonPropertyNameForObjCPropertyName:(id)arg0 ;
-(CGFloat)maxViewportAspectRatioWithValue:(id)arg0 withType:(int)arg1 ;
-(CGFloat)maxViewportWidthWithValue:(id)arg0 withType:(int)arg1 ;
-(CGFloat)minViewportAspectRatioWithValue:(id)arg0 withType:(int)arg1 ;
-(CGFloat)minViewportWidthWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)horizontalSizeClassWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)interfaceSizeClassFromJSONSizeClass:(id)arg0 ;
-(NSInteger)offerUpsellScenarioWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)subscriptionActivationEligibilityWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)verticalSizeClassWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)newsletterSubscriptionStatusWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)preferredColorSchemeWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)testingWithValue:(id)arg0 withType:(int)arg1 ;
-(id)contentSizeCategoryFromJSONContentSizeCategory:(id)arg0 ;
-(id)maxContentSizeCategoryWithValue:(id)arg0 withType:(int)arg1 ;
-(id)minContentSizeCategoryWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif