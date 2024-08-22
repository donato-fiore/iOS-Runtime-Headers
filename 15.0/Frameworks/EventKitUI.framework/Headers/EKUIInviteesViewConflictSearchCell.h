// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUIINVITEESVIEWCONFLICTSEARCHCELL_H
#define EKUIINVITEESVIEWCONFLICTSEARCHCELL_H

@class UITableViewCell, UILabel, UIColor, NSArray, UIActivityIndicatorView;



@interface EKUIInviteesViewConflictSearchCell : UITableViewCell

@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) CGFloat leftInset; // ivar: _leftInset
@property (retain, nonatomic) UIColor *originalLabelFontColor; // ivar: _originalLabelFontColor
@property (retain, nonatomic) NSArray *persistentConstraints; // ivar: _persistentConstraints
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner


+(id)_grayTextColor;
+(id)_showMoreLocalizedString;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setText:(id)arg0 textColor:(id)arg1 spinnerEnabled:(BOOL)arg2 ;
-(void)setAvailabilityRequestInProgressState;
-(void)setInitialSearchInProgressState;
-(void)setNoAvailableTimesStateWithNumberOfExistingTimes:(NSUInteger)arg0 hasError:(BOOL)arg1 ;
-(void)setShowMoreState;
-(void)updateConstraints;


@end


#endif