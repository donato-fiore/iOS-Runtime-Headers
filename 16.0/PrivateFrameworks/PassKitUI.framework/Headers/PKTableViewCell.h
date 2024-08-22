// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTABLEVIEWCELL_H
#define PKTABLEVIEWCELL_H

@class UITableViewCell, UIColor;



@interface PKTableViewCell : UITableViewCell

@property (copy, nonatomic) UIColor *checkmarkAccessoryColor; // ivar: _checkmarkAccessoryColor
@property (copy, nonatomic) UIColor *customAccessoryColor; // ivar: _customAccessoryColor
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (nonatomic) BOOL showsActionSpinner; // ivar: _showsActionSpinner


-(id)_checkmarkImage:(BOOL)arg0 ;
-(id)_disclosureChevronImage:(BOOL)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif