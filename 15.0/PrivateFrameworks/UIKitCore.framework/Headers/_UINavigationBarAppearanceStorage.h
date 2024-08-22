// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINAVIGATIONBARAPPEARANCESTORAGE_H
#define _UINAVIGATIONBARAPPEARANCESTORAGE_H

@class UIBarAppearanceStorage, NSMutableDictionary, NSNumber, NSString, NSDictionary;


#import "_UIBarButtonItemAppearanceStorage.h"
#import "UIImage.h"

@interface _UINavigationBarAppearanceStorage : UIBarAppearanceStorage {
    NSMutableDictionary *titleVerticalAdjustmentsForBarMetrics;
    NSInteger barMetrics;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
}


@property (readonly, nonatomic) _UIBarButtonItemAppearanceStorage *_barButtonAppearanceStorage;
@property (nonatomic) NSInteger activeBarMetrics; // ivar: activeBarMetrics
@property (retain, nonatomic) UIImage *backIndicatorImage; // ivar: backIndicatorImage
@property (retain, nonatomic) NSNumber *backIndicatorLeftMargin; // ivar: backIndicatorLeftMargin
@property (retain, nonatomic) UIImage *backIndicatorTransitionMaskImage; // ivar: backIndicatorTransitionMaskImage
@property (retain, nonatomic) NSString *backdropViewGroupName; // ivar: _backdropViewGroupName
@property (readonly, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) _UIBarButtonItemAppearanceStorage *barButtonAppearanceStorage;
@property (nonatomic) NSInteger defaultBarMetrics; // ivar: defaultBarMetrics
@property (nonatomic) BOOL deferShadowToSearchBar; // ivar: _deferShadowToSearchBar
@property (nonatomic) BOOL hidesShadow; // ivar: hidesShadow
@property (readonly, nonatomic) UIImage *miniBackgroundImage;
@property (readonly, nonatomic) UIImage *miniPromptBackgroundImage;
@property (readonly, nonatomic) UIImage *promptBackgroundImage;
@property (nonatomic) BOOL reversesShadowOffset; // ivar: reversesShadowOffset
@property (retain, nonatomic) UIImage *shadowImage; // ivar: shadowImage
@property (copy, nonatomic) NSDictionary *textAttributes; // ivar: textAttributes


+(NSInteger)typicalBarPosition;
-(CGFloat)titleVerticalAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(id)representativeImageForIdiom:(NSInteger)arg0 ;
-(void)setTitleVerticalAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;


@end


#endif