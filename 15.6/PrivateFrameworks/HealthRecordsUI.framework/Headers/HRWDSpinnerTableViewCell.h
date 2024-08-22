// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRWDSPINNERTABLEVIEWCELL_H
#define HRWDSPINNERTABLEVIEWCELL_H

@class UITableViewCell, UIView, UIActivityIndicatorView, NSString, UILabel;



@interface HRWDSpinnerTableViewCell : UITableViewCell

@property (retain) UIView *contentContainerView; // ivar: _contentContainerView
@property (retain) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (retain, nonatomic) NSString *waitingReason;
@property (retain) UILabel *waitingReasonLabel; // ivar: _waitingReasonLabel


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)setupConstraints;
-(void)setupSubviews;


@end


#endif