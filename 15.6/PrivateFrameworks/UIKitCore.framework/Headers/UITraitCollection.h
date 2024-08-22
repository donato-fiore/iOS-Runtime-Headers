// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITRAITCOLLECTION_H
#define UITRAITCOLLECTION_H

@class NSDictionary, NSString;
@protocol _UIFallbackEnvironment, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UITraitCollection : NSObject <_UIFallbackEnvironment, NSCopying, NSSecureCoding>

 {
    ? _builtinTraits;
    NSDictionary *_clientDefinedTraits;
    NSObject *_environmentWrapper;
    UIColor *_tintColor;
}


@property (readonly, nonatomic) BOOL _isLargeContentViewerEnabled;
@property (readonly, nonatomic) NSInteger accessibilityContrast;
@property (readonly, nonatomic) NSInteger activeAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayGamut;
@property (readonly, nonatomic) CGFloat displayScale;
@property (readonly, nonatomic) NSInteger forceTouchCapability;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger horizontalSizeClass;
@property (readonly, nonatomic) NSInteger layoutDirection;
@property (readonly, nonatomic) NSInteger legibilityWeight;
@property (readonly, copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger userInterfaceIdiom;
@property (readonly, nonatomic) NSInteger userInterfaceLevel;
@property (readonly, nonatomic) NSInteger userInterfaceStyle;
@property (readonly, nonatomic) NSInteger verticalSizeClass;


+(BOOL)supportsSecureCoding;
+(id)_currentTraitCollection;
+(id)_descriptionForChangeFromTraitCollection:(id)arg0 toTraitCollection:(id)arg1 ;
+(id)_traitCollectionForSidebarAppearance;
+(id)_traitCollectionWithBackgroundLevel:(NSInteger)arg0 ;
+(id)_traitCollectionWithContrast:(NSInteger)arg0 ;
+(id)_traitCollectionWithEnvironmentWrapper:(id)arg0 ;
+(id)_traitCollectionWithFocusSystemState:(NSInteger)arg0 ;
+(id)_traitCollectionWithPresentationSemanticContext:(NSInteger)arg0 ;
+(id)_traitCollectionWithSplitViewControllerContext:(NSInteger)arg0 ;
+(id)_traitCollectionWithUserInterfaceActiveAppearance:(NSInteger)arg0 ;
+(id)_traitCollectionWithValue:(id)arg0 forTraitNamed:(id)arg1 ;
+(id)_traitCollectionWithVibrancy:(NSInteger)arg0 ;
+(id)currentTraitCollection;
+(id)traitCollectionWithAccessibilityContrast:(NSInteger)arg0 ;
+(id)traitCollectionWithActiveAppearance:(NSInteger)arg0 ;
+(id)traitCollectionWithArtworkSubtype:(NSUInteger)arg0 ;
+(id)traitCollectionWithDisplayCornerRadius:(CGFloat)arg0 ;
+(id)traitCollectionWithDisplayGamut:(NSInteger)arg0 ;
+(id)traitCollectionWithDisplayScale:(CGFloat)arg0 ;
+(id)traitCollectionWithForceTouchCapability:(NSInteger)arg0 ;
+(id)traitCollectionWithHorizontalSizeClass:(NSInteger)arg0 ;
+(id)traitCollectionWithInteractionModel:(NSUInteger)arg0 ;
+(id)traitCollectionWithLayoutDirection:(NSInteger)arg0 ;
+(id)traitCollectionWithLegibilityWeight:(NSInteger)arg0 ;
+(id)traitCollectionWithPreferredContentSizeCategory:(id)arg0 ;
+(id)traitCollectionWithPrimaryInteractionModel:(NSUInteger)arg0 ;
+(id)traitCollectionWithTouchLevel:(NSInteger)arg0 ;
+(id)traitCollectionWithTraitsFromCollections:(id)arg0 ;
+(id)traitCollectionWithUserInterfaceIdiom:(NSInteger)arg0 ;
+(id)traitCollectionWithUserInterfaceLevel:(NSInteger)arg0 ;
+(id)traitCollectionWithUserInterfaceStyle:(NSInteger)arg0 ;
+(id)traitCollectionWithVerticalSizeClass:(NSInteger)arg0 ;
+(void)_setCurrentTraitCollection:(id)arg0 ;
+(void)setCurrentTraitCollection:(id)arg0 ;
-(BOOL)_hasSplitViewControllerContextPrimaryColumn;
-(BOOL)_hasSplitViewControllerContextSidebarColumn;
-(BOOL)containsTraitsInCollection:(id)arg0 ;
-(BOOL)hasDifferentColorAppearanceComparedToTraitCollection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)displayCornerRadius;
-(NSInteger)_backgroundLevel;
-(NSInteger)_compare:(id)arg0 ;
-(NSInteger)_contrast;
-(NSInteger)_focusSystemState;
-(NSInteger)_presentationSemanticContext;
-(NSInteger)_splitViewControllerContext;
-(NSInteger)_userInterfaceActiveAppearance;
-(NSInteger)_vibrancy;
-(NSInteger)touchLevel;
-(NSUInteger)artworkSubtype;
-(NSUInteger)interactionModel;
-(NSUInteger)primaryInteractionModel;
-(id)_environmentWrapper;
-(id)_fallbackTraitCollection;
-(id)_namedImageDescription;
-(id)_traitNamesForUnspecifiedBuiltInTraits;
-(id)_traitsDescription;
-(id)_valueForTraitNamed:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageConfiguration;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performAsCurrentTraitCollection:(id)arg0 ;


@end


#endif