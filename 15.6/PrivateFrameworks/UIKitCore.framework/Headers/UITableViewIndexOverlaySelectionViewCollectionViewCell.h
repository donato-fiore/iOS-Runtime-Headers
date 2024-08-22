// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITABLEVIEWINDEXOVERLAYSELECTIONVIEWCOLLECTIONVIEWCELL_H
#define UITABLEVIEWINDEXOVERLAYSELECTIONVIEWCOLLECTIONVIEWCELL_H

@class NSString;


#import "UICollectionViewCell.h"
#import "UIButton.h"
#import "UILabel.h"

@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell {
    CGFloat _rightMargin;
    BOOL _rightMarginAdjusted;
    id *_tapTarget;
    SEL _tapAction;
}


@property (readonly) UIButton *button; // ivar: _button
@property (readonly) UILabel *label;
@property (nonatomic) CGFloat rightMargin;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif