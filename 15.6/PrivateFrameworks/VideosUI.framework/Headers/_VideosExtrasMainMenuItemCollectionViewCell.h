// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _VIDEOSEXTRASMAINMENUITEMCOLLECTIONVIEWCELL_H
#define _VIDEOSEXTRASMAINMENUITEMCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel, NSLayoutConstraint;



@interface _VideosExtrasMainMenuItemCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) NSLayoutConstraint *textLabelConstraint; // ivar: _textLabelConstraint


+(id)_createLabelInCell:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicTypeChanged;
-(void)dealloc;
-(void)safeAreaInsetsDidChange;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif