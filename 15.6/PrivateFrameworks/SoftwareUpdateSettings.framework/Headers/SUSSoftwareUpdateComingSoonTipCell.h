// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSSOFTWAREUPDATECOMINGSOONTIPCELL_H
#define SUSSOFTWAREUPDATECOMINGSOONTIPCELL_H

@class PSTableCell, TPKTipContentTableViewCell;



@interface SUSSoftwareUpdateComingSoonTipCell : PSTableCell

@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) TPKTipContentTableViewCell *tipkitCell; // ivar: _tipkitCell


-(CGFloat)preferredHeightWithTable:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)updateConstraints;


@end


#endif