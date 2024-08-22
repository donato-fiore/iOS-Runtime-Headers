// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCONDITIONHINTS_H
#define SXCONDITIONHINTS_H

@class NSString;
@protocol SXConditionHints;


#import "SXJSONObject.h"

@interface SXConditionHints : SXJSONObject <SXConditionHints>



@property (readonly, nonatomic) NSInteger configurationKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger horizontalSizeClass;
@property (readonly, nonatomic) NSInteger maxColumns;
@property (readonly, nonatomic) NSInteger maxContentSizeCategory;
@property (readonly, nonatomic) NSInteger maxSpecVersion;
@property (readonly, nonatomic) NSInteger maxViewportAspectRatio;
@property (readonly, nonatomic) NSInteger maxViewportWidth;
@property (readonly, nonatomic) NSInteger minColumns;
@property (readonly, nonatomic) NSInteger minContentSizeCategory;
@property (readonly, nonatomic) NSInteger minSpecVersion;
@property (readonly, nonatomic) NSInteger minViewportAspectRatio;
@property (readonly, nonatomic) NSInteger minViewportWidth;
@property (readonly, nonatomic) NSInteger newsletter;
@property (readonly, nonatomic) NSInteger platform;
@property (readonly, nonatomic) NSInteger preferredColorScheme;
@property (readonly, nonatomic) NSInteger subscriptionStatus;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger testing;
@property (readonly, nonatomic) NSInteger upsellScenario;
@property (readonly, nonatomic) NSInteger verticalSizeClass;
@property (readonly, nonatomic) NSInteger viewLocation;


+(id)jsonPropertyNameForObjCPropertyName:(id)arg0 ;
-(NSInteger)configurationKeyWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)horizontalSizeClassWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)maxColumnsWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)maxContentSizeCategoryWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)maxSpecVersionWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)maxViewportAspectRatioWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)maxViewportWidthWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)minColumnsWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)minContentSizeCategoryWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)minSpecVersionWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)minViewportAspectRatioWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)minViewportWidthWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)newsletterWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)platformWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)preferredColorSchemeWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)subscriptionStatusWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)ternaryValueForJSONValue:(id)arg0 type:(int)arg1 ;
-(NSInteger)testingWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)upsellScenarioWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)verticalSizeClassWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)viewLocationWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif