// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTUIALARMVIEW_H
#define MTUIALARMVIEW_H

@class NUIContainerGridView, NSArray, UILabel, UISwitch, NSString, UIFont, NSDictionary;


#import "MTUIDigitalClockLabel.h"

@interface MTUIAlarmView : NUIContainerGridView {
    id *_contentSizeFontAdjustObserver;
}


@property (retain, nonatomic) NSArray *currentConstraints; // ivar: _currentConstraints
@property (readonly, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (readonly, nonatomic) UISwitch *enabledSwitch; // ivar: _enabledSwitch
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) UIFont *nameFont; // ivar: _nameFont
@property (retain, nonatomic) UIFont *repeatFont; // ivar: _repeatFont
@property (copy, nonatomic) NSString *repeatText; // ivar: _repeatText
@property (nonatomic) BOOL shouldAddLayoutConstraints; // ivar: _shouldAddLayoutConstraints
@property (nonatomic) NSInteger style; // ivar: _style
@property (nonatomic, getter=isSwitchVisible) BOOL switchVisible;
@property (readonly, nonatomic) MTUIDigitalClockLabel *timeLabel; // ivar: _timeLabel
@property (readonly, nonatomic) NSDictionary *viewsByIdentifier; // ivar: _viewsByIdentifier


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_loadFontsWithTextStyles;
-(void)setLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(void)tearDownContentSizeChangeObserver;
-(void)updatePreferredMaxLayoutWidthForDetailContainerLabels;


@end


#endif