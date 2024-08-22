// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBADGEVIEW_H
#define _UIBADGEVIEW_H

@class NSMutableDictionary, NSString, NSDictionary;


#import "UIView.h"
#import "UILabel.h"
#import "UIColor.h"
#import "_UIBadgeVisualStyle.h"

@interface _UIBadgeView : UIView {
    UILabel *_label;
    NSMutableDictionary *_mergedTextAttributes;
}


@property (copy, nonatomic) UIColor *badgeColor; // ivar: _badgeColor
@property (retain, nonatomic) _UIBadgeVisualStyle *style; // ivar: _style
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSDictionary *textAttributes; // ivar: _textAttributes
@property (nonatomic) UIOffset textOffset; // ivar: _textOffset


-(id)initWithText:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyTextToLabel;
-(void)_setUpLabelIfNecessary;
-(void)layoutSubviews;


@end


#endif