// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSOFTWAREUPDATEFETCHCELL_H
#define HUSOFTWAREUPDATEFETCHCELL_H

@class UITableViewCell, UIActivityIndicatorView, NSString, HFItem, UIStackView, UILabel, UIView;
@protocol HUCellProtocol, HUResizableCellDelegate;


#import "HUIconView.h"

@interface HUSoftwareUpdateFetchCell : UITableViewCell <HUCellProtocol>



@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner; // ivar: _checkingForUpdateSpinner
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger iconSize; // ivar: _iconSize
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) UIStackView *mainStackView; // ivar: _mainStackView
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIView *titleSpinnerView; // ivar: _titleSpinnerView


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif