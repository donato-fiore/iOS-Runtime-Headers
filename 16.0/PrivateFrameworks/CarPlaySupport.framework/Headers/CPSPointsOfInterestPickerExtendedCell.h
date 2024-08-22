// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSPOINTSOFINTERESTPICKEREXTENDEDCELL_H
#define CPSPOINTSOFINTERESTPICKEREXTENDEDCELL_H

@class UILabel, NSString;


#import "CPSPointsOfInterestPickerCell.h"

@interface CPSPointsOfInterestPickerExtendedCell : CPSPointsOfInterestPickerCell

@property (retain, nonatomic) UILabel *extendedInformativeLabel; // ivar: _extendedInformativeLabel
@property (retain, nonatomic) UILabel *extendedSubtitleLabel; // ivar: _extendedSubtitleLabel
@property (retain, nonatomic) UILabel *extendedTitleLabel; // ivar: _extendedTitleLabel
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)identifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setupViews;


@end


#endif