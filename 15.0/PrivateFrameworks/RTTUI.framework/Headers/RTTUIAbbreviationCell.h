// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTTUIABBREVIATIONCELL_H
#define RTTUIABBREVIATIONCELL_H

@class UICollectionViewCell, UIView, UIVisualEffectView, UILabel;



@interface RTTUIAbbreviationCell : UICollectionViewCell {
    UIView *_abbreviationContainer;
    UIVisualEffectView *_hintContainer;
}


@property (retain, nonatomic) UILabel *abbreviation; // ivar: _abbreviation
@property (retain, nonatomic) UILabel *hint; // ivar: _hint


-(BOOL)accessibilityIgnoresInvertColors;
-(BOOL)isAccessibilityElement;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif