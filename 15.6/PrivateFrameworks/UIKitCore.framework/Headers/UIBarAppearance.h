// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIBARAPPEARANCE_H
#define UIBARAPPEARANCE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding, _UIBarAppearanceChangeObserver;

#import <Foundation/Foundation.h>

#import "_UIBarBackgroundAppearanceData.h"
#import "UIColor.h"
#import "UIBlurEffect.h"
#import "UIImage.h"
#import "UIVibrancyEffect.h"

@interface UIBarAppearance : NSObject <NSCopying, NSSecureCoding>

 {
    _UIBarBackgroundAppearanceData *_backgroundData;
}


@property (weak, nonatomic, setter=_setChangeObserver:) NSObject<_UIBarAppearanceChangeObserver> *_changeObserver; // ivar: _changeObserver
@property (readonly) BOOL _hasTransparentBackground;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIBlurEffect *backgroundEffect;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) NSInteger backgroundImageContentMode;
@property (readonly, nonatomic) NSInteger idiom; // ivar: _idiom
@property (copy, nonatomic) UIColor *shadowColor;
@property (copy, nonatomic) UIVibrancyEffect *shadowEffect;
@property (retain, nonatomic) UIImage *shadowImage;


+(BOOL)supportsSecureCoding;
-(BOOL)_checkEqualTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hashInto:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)_backButtonAppearance;
-(id)_backButtonAppearanceData;
-(id)_backgroundData;
-(id)_barTitleData;
-(id)_compactInlineTabButtonAppearanceData;
-(id)_doneButtonAppearance;
-(id)_doneButtonAppearanceData;
-(id)_inlineTabButtonAppearanceData;
-(id)_plainButtonAppearance;
-(id)_plainButtonAppearanceData;
-(id)_stackedTabButtonAppearanceData;
-(id)_tabLayoutAppearanceData;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBarAppearance:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdiom:(NSInteger)arg0 ;
-(void)_completeInit;
-(void)_copyFromAppearance:(id)arg0 ;
-(void)_decodeFromCoder:(id)arg0 ;
-(void)_describeInto:(id)arg0 ;
-(void)_setupDefaults;
-(void)configureWithDefaultBackground;
-(void)configureWithDefaultShadow;
-(void)configureWithOpaqueBackground;
-(void)configureWithTransparentBackground;
-(void)configureWithoutShadow;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif