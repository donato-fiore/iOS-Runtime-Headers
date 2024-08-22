// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSPOINTSOFINTERESTPICKERCELL_H
#define CPSPOINTSOFINTERESTPICKERCELL_H

@class UITableViewCell;



@interface CPSPointsOfInterestPickerCell : UITableViewCell

@property (nonatomic) BOOL chosen; // ivar: _chosen


+(id)identifier;
-(BOOL)isSelected;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setupViews;


@end


#endif