// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISEARCHBARBACKGROUND_H
#define UISEARCHBARBACKGROUND_H

@class UIBarBackgroundImageView, NSMutableDictionary, NSString;
@protocol _UIBarPositioningInternal;


#import "UIImage.h"
#import "UIColor.h"

@interface UISearchBarBackground : UIBarBackgroundImageView <_UIBarPositioningInternal>

 {
    NSMutableDictionary *_customBackgroundImages;
    NSInteger _barPosition;
    NSUInteger _searchBarStyle;
    NSInteger _barStyle;
    NSInteger _barTranslucence;
    BOOL _usesEmbeddedAppearance;
    BOOL _usesContiguousBarBackground;
}


@property (readonly, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) UIImage *backgroundImagePrompt;
@property (nonatomic) NSInteger barStyle;
@property (retain, nonatomic) UIColor *barTintColor; // ivar: _barTintColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger searchBarStyle;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (nonatomic) BOOL usesContiguousBarBackground;
@property (nonatomic) BOOL usesEmbeddedAppearance;


-(BOOL)_hasCustomBackgroundImage;
-(NSInteger)_barPosition;
-(id)_backgroundImageForBarPosition:(NSInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)_createBackgroundImageForBarStyle:(NSInteger)arg0 alpha:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setBarPosition:(NSInteger)arg0 ;
-(void)_updateBackgroundImage;
-(void)_updateBackgroundImageIfPossible;
-(void)didMoveToWindow;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif