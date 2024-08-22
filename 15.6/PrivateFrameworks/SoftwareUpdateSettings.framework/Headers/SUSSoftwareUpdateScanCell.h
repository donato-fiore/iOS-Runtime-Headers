// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSSOFTWAREUPDATESCANCELL_H
#define SUSSOFTWAREUPDATESCANCELL_H

@class PSTableCell, UIActivityIndicatorView, NSString, UILabel;



@interface SUSSoftwareUpdateScanCell : PSTableCell

@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner; // ivar: _checkingForUpdateSpinner
@property (retain, nonatomic) NSString *currentVersion; // ivar: _currentVersion
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) UILabel *statusLabel; // ivar: _statusLabel
@property BOOL suPathsRestricted; // ivar: _suPathsRestricted
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property BOOL updatesDeferred; // ivar: _updatesDeferred


+(NSInteger)cellStyle;
-(CGFloat)preferredHeightWithTable:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)upToDateManagedText;
-(id)upToDateText;
-(id)upToDateWithAlternate;
-(void)layoutSubviews;
-(void)setupConstraints;


@end


#endif