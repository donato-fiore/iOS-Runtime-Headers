// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYPRIMARYACTIONCELL_H
#define PKAPPLYPRIMARYACTIONCELL_H

@class UICollectionViewCell, NSString;


#import "PKContinuousButton.h"

@interface PKApplyPrimaryActionCell : UICollectionViewCell {
    PKContinuousButton *_button;
    BOOL _isTemplateLayout;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (nonatomic) BOOL loading; // ivar: _loading
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif