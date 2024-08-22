// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINDEXBARVISUALSTYLE_LEGACYIOS_H
#define UIINDEXBARVISUALSTYLE_LEGACYIOS_H

@class Base, NSArray, UIFont;


#import "UIColor.h"

@interface UIIndexBarVisualStyle_LegacyiOS : Base {
    NSArray *_titles;
    UIFont *_font;
    NSInteger _selectedSection;
    BOOL _pastTop;
    BOOL _pastBottom;
    CGSize _cachedSize;
    CGSize _cachedSizeToFit;
    CGFloat _topPadding;
    CGFloat _bottomPadding;
    CGFloat _verticalTextHeightEstimate;
}


@property (copy, nonatomic) UIColor *nonTrackingBackgroundColor; // ivar: _nonTrackingBackgroundColor


-(BOOL)canBecomeFocused;
-(BOOL)overlay;
-(BOOL)updateSectionForTouch:(id)arg0 withEvent:(id)arg1 ;
-(CGFloat)minLineHeight;
-(NSInteger)_accessibility_indexForEntryAtPoint:(struct CGPoint )arg0 ;
-(id)displayEntryFromEntry:(id)arg0 ;
-(id)font;
-(id)initWithView:(id)arg0 ;
-(struct CGRect )_visibleBoundsForRect:(struct CGRect )arg0 stride:(*CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)displayEntriesUpdated;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)indexColorUpdated;
-(void)sizeUpdated;


@end


#endif