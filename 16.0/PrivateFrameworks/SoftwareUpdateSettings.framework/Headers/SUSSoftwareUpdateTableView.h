// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSSOFTWAREUPDATETABLEVIEW_H
#define SUSSOFTWAREUPDATETABLEVIEW_H

@class UITableView, UIActivityIndicatorView, UILabel, NSString, NSDate;



@interface SUSSoftwareUpdateTableView : UITableView

@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner; // ivar: _checkingForUpdateSpinner
@property (retain, nonatomic) UILabel *checkingStatusLabel; // ivar: _checkingStatusLabel
@property (retain, nonatomic) NSString *currentVersion; // ivar: _currentVersion
@property BOOL disableScanUI; // ivar: _disableScanUI
@property (retain, nonatomic) NSDate *lastScannedDate; // ivar: _lastScannedDate
@property (nonatomic) int state; // ivar: _state
@property BOOL suPathsRestricted; // ivar: _suPathsRestricted
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property BOOL updatesDeferred; // ivar: _updatesDeferred


-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(id)upToDateManagedText;
-(id)upToDateText;
-(id)upToDateWithAlternate;
-(void)layoutSubviews;
-(void)preferredContentSizeChanged:(id)arg0 ;


@end


#endif