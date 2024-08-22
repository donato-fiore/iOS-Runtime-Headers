// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINFOBUTTONTABLEVIEWCELL_H
#define WFINFOBUTTONTABLEVIEWCELL_H

@class UITableViewCell, NSArray, UIImageView, UIButton;
@protocol WFInfoButtonTableViewCellDelegate;



@interface WFInfoButtonTableViewCell : UITableViewCell

@property (nonatomic) NSUInteger accessoryMode; // ivar: _accessoryMode
@property (readonly, nonatomic) NSArray *accessoryViews;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (readonly, nonatomic) UIImageView *checkmarkView; // ivar: _checkmarkView
@property (weak, nonatomic) NSObject<WFInfoButtonTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIButton *infoButton; // ivar: _infoButton


-(NSUInteger)accessibilityTraits;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)infoButtonPressed:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif