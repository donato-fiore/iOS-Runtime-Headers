// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUHOMEPODSTEREOSWAPPERCELL_H
#define HUHOMEPODSTEREOSWAPPERCELL_H

@class UITableViewCell, UIButton;
@protocol HUHomePodStereoSwapperCellDelegate;


#import "HUHomePodDetailView.h"

@interface HUHomePodStereoSwapperCell : UITableViewCell

@property (weak, nonatomic) NSObject<HUHomePodStereoSwapperCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger homePodVariant; // ivar: _homePodVariant
@property (retain, nonatomic) HUHomePodDetailView *leftHomePod; // ivar: _leftHomePod
@property (retain, nonatomic) HUHomePodDetailView *rightHomePod; // ivar: _rightHomePod
@property (retain, nonatomic) UIButton *swapButton; // ivar: _swapButton


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupConstraints;
-(void)_swap;
-(void)finishSetupWithDelegate:(id)arg0 selectionStyle:(NSInteger)arg1 homePodVariant:(NSUInteger)arg2 ;


@end


#endif