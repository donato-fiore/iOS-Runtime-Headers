// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRXOPTIONCOLLECTIONVIEWCELL_H
#define PRXOPTIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel;


#import "PRXSelectionIndicatorView.h"

@interface PRXOptionCollectionViewCell : UICollectionViewCell {
    PRXSelectionIndicatorView *_selectionIndicator;
}


@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif