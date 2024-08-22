// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIMAGICHEADCOLLECTIONVIEWCELL_H
#define _UIMAGICHEADCOLLECTIONVIEWCELL_H

@class NSArray, UIView, SFMagicHeadWheelView;


#import "UIAirDropGroupActivityCell.h"

@interface _UIMagicHeadCollectionViewCell : UIAirDropGroupActivityCell

@property (retain, nonatomic) NSArray *largeTextMHConstraints; // ivar: _largeTextMHConstraints
@property (retain, nonatomic) UIView *magicHeadView; // ivar: _magicHeadView
@property (retain, nonatomic) SFMagicHeadWheelView *magicHeadWheelView; // ivar: _magicHeadWheelView
@property (retain, nonatomic) NSArray *regularMHConstraints; // ivar: _regularMHConstraints


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraints;
-(void)_updateMHForCurrentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDarkening;


@end


#endif