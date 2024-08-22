// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACENTRALTABLEVIEWCELL_H
#define CACENTRALTABLEVIEWCELL_H

@class UITableViewCell, NSArray, UIActivityIndicatorView, UILabel;



@interface CACentralTableViewCell : UITableViewCell

@property (retain, nonatomic) NSArray *activityHConstraints; // ivar: _activityHConstraints
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) NSArray *activityVConstraints; // ivar: _activityVConstraints
@property (retain, nonatomic) UILabel *connectionStatusLabel; // ivar: _connectionStatusLabel
@property (retain, nonatomic) UILabel *deviceNameLabel; // ivar: _deviceNameLabel
@property (retain, nonatomic) UILabel *inputLabel; // ivar: _inputLabel
@property (retain, nonatomic) NSArray *labelConstraints; // ivar: _labelConstraints
@property (retain, nonatomic) UILabel *outputLabel; // ivar: _outputLabel
@property (retain, nonatomic) UILabel *slashLabel; // ivar: _slashLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)createInitialConstraints;
-(void)dealloc;
-(void)startIndicator;
-(void)stopIndicator;
-(void)updateConstraints;


@end


#endif