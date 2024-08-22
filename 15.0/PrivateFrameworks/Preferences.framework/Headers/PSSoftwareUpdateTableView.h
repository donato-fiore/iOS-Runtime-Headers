// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSSOFTWAREUPDATETABLEVIEW_H
#define PSSOFTWAREUPDATETABLEVIEW_H

@class UITableView, UIActivityIndicatorView, UILabel, NSString;



@interface PSSoftwareUpdateTableView : UITableView

@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner; // ivar: _checkingForUpdateSpinner
@property (retain, nonatomic) UILabel *checkingStatusLabel; // ivar: _checkingStatusLabel
@property (retain, nonatomic) NSString *currentVersion; // ivar: _currentVersion
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property BOOL updatesDeferred; // ivar: _updatesDeferred


-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)preferredContentSizeChanged:(id)arg0 ;


@end


#endif