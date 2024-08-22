// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARBUTTONITEMDATA_H
#define _UIBARBUTTONITEMDATA_H

@class UIBarAppearanceData, NSString;
@protocol _UIBarButtonItemDataFallback;


#import "UIImageSymbolConfiguration.h"
#import "UIImage.h"

@interface _UIBarButtonItemData : UIBarAppearanceData <_UIBarButtonItemDataFallback>

 {
    NSDictionary" _titleTextAttributes;
    UIImage" _backgroundImage;
    UIOffset _titlePositionAdjustment;
    UIOffset _backgroundImagePositionAdjustment;
    UIImageSymbolConfiguration *_imageSymbolConfiguration;
    UIImageSymbolConfiguration *_compactImageSymbolConfiguration;
    UIImage *_backIndicatorImage;
    UIImage *_backIndicatorTransitionMaskImage;
    UIImageSymbolConfiguration *_backIndicatorSymbolConfiguration;
    UIImageSymbolConfiguration *_compactBackIndicatorSymbolConfiguration;
    id<_UIBarButtonItemDataFallback> *_fallback;
    ? _stateFlags;
    ? _dataFlags;
}


@property (readonly, nonatomic) UIImage *backIndicatorImage;
@property (readonly, nonatomic) UIImageSymbolConfiguration *backIndicatorSymbolConfiguration;
@property (readonly, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property (readonly, nonatomic) UIImageSymbolConfiguration *backIndicatorTransitionMaskSymbolConfiguration;
@property (readonly, nonatomic) UIImage *compactBackIndicatorImage;
@property (readonly, nonatomic) UIImageSymbolConfiguration *compactBackIndicatorSymbolConfiguration;
@property (readonly, nonatomic) UIImage *compactBackIndicatorTransitionMaskImage;
@property (readonly, nonatomic) UIImageSymbolConfiguration *compactBackIndicatorTransitionMaskSymbolConfiguration;
@property (readonly, nonatomic) UIImageSymbolConfiguration *compactImageSymbolConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<_UIBarButtonItemDataFallback> *fallback;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly, nonatomic) BOOL isBackButtonData;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


+(id)decodeFromCoder:(id)arg0 prefix:(id)arg1 ;
+(id)standardBackButtonData;
+(id)standardItemDataForStyle:(NSInteger)arg0 ;
-(BOOL)checkEqualTo:(id)arg0 ;
-(NSInteger)hashInto:(NSInteger)arg0 ;
-(id)_fallbackColorForState:(NSInteger)arg0 ;
-(id)_fallbackFontForState:(NSInteger)arg0 ;
-(id)backIndicatorTextStyleForSymbolConfiguration;
-(id)backgroundImageForState:(NSInteger)arg0 ;
-(id)backgroundImageForState:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(id)colorForState:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(id)copyAsBackButtonDataWithIndicatorsAndFallbackFrom:(id)arg0 ;
-(id)dataWithNewFallback:(id)arg0 ;
-(id)fontForState:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)replicate;
-(id)textStyleForSymbolConfiguration;
-(id)titleTextAttributesForState:(NSInteger)arg0 ;
-(struct UIOffset )backgroundImagePositionAdjustmentForState:(NSInteger)arg0 ;
-(struct UIOffset )backgroundImagePositionAdjustmentForState:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(struct UIOffset )titlePositionAdjustmentForState:(NSInteger)arg0 ;
-(struct UIOffset )titlePositionAdjustmentForState:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(void)_decodeBackgroundImagesFromCoder:(id)arg0 prefix:(id)arg1 ;
-(void)_decodeBackgroundPositionAdjustmentsFromCoder:(id)arg0 prefix:(id)arg1 ;
-(void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg0 prefix:(id)arg1 ;
-(void)_decodeTitleTextAttributesFromCoder:(id)arg0 prefix:(id)arg1 ;
-(void)describeInto:(id)arg0 ;
-(void)encodeToCoder:(id)arg0 prefix:(id)arg1 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSInteger)arg1 ;
-(void)setBackgroundImagePositionAdjustment:(struct UIOffset )arg0 forState:(NSInteger)arg1 ;
-(void)setTitlePositionAdjustment:(struct UIOffset )arg0 forState:(NSInteger)arg1 ;
-(void)setTitleTextAttributes:(id)arg0 forState:(NSInteger)arg1 ;


@end


#endif