// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBARBUTTONITEMAPPEARANCESTORAGE_H
#define _UIBARBUTTONITEMAPPEARANCESTORAGE_H

@class UIBarItemAppearanceStorage, NSMutableDictionary, NSValue;


#import "_UIBarBackButtonItemAppearanceStorage.h"
#import "UIColor.h"

@interface _UIBarButtonItemAppearanceStorage : UIBarItemAppearanceStorage {
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
    _UIBarBackButtonItemAppearanceStorage *backButtonAppearance;
}


@property (retain, nonatomic) NSValue *backButtonTitlePositionOffset;
@property (retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;
@property (retain, nonatomic) NSValue *miniTitlePositionOffset; // ivar: miniTitlePositionOffset
@property (retain, nonatomic) UIColor *tintColor; // ivar: tintColor
@property (retain, nonatomic) NSValue *titlePositionOffset; // ivar: titlePositionOffset


-(CGFloat)backButtonBackgroundVerticalAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(CGFloat)backgroundVerticalAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(id)anyBackButtonBackgroundImage;
-(id)anyBackgroundImage;
-(id)backButtonBackgroundImageForState:(NSUInteger)arg0 isMini:(BOOL)arg1 ;
-(id)backgroundImageForState:(NSUInteger)arg0 style:(NSInteger)arg1 isMini:(BOOL)arg2 ;
-(void)setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 isMini:(BOOL)arg2 ;
-(void)setBackButtonBackgroundVerticalAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 style:(NSInteger)arg2 isMini:(BOOL)arg3 ;
-(void)setBackgroundVerticalAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;


@end


#endif