// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCURRENTTIMEVIEW_H
#define HKCURRENTTIMEVIEW_H

@class UIView, UIButton, NSString;
@protocol HKCurrentTimeViewDelegate;


#import "HKCurrentTimeChevronButton.h"

@interface HKCurrentTimeView : UIView {
    UIButton *_currentTimeButton;
    HKCurrentTimeChevronButton *_previousTimeIndexButton;
    HKCurrentTimeChevronButton *_nextTimeIndexButton;
}


@property (nonatomic) BOOL currentTimeButtonEnabled; // ivar: _currentTimeButtonEnabled
@property (copy, nonatomic) NSString *currentTimeString; // ivar: _currentTimeString
@property (weak, nonatomic) NSObject<HKCurrentTimeViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableControls; // ivar: _disableControls
@property (nonatomic) BOOL nextTimeButtonEnabled;
@property (nonatomic) BOOL omitPrevNextButtons; // ivar: _omitPrevNextButtons
@property (nonatomic) BOOL previousTimeButtonEnabled;


-(CGFloat)_backgroundAlpha:(BOOL)arg0 ;
-(CGFloat)_currentTimeButtonBaselineToBottom;
-(CGFloat)_currentTimeButtonBaselineToTop;
-(CGFloat)_foregroundAlpha:(BOOL)arg0 ;
-(id)_backgroundColor:(BOOL)arg0 ;
-(id)_colorIfForeground:(BOOL)arg0 enabled:(BOOL)arg1 ;
-(id)_currentTimeButtonFont;
-(id)_foregroundColor:(BOOL)arg0 ;
-(id)_labelColor:(BOOL)arg0 ;
-(id)_tintColor:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithWideHorizontalMargin:(BOOL)arg0 ;
-(void)_handleContentSizeCategoryDidChange;
-(void)currentTimeButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)nextTimeIndexButtonTapped:(id)arg0 ;
-(void)previousTimeIndexButtonTapped:(id)arg0 ;
-(void)setupViewWithWideHorizontalMargin:(BOOL)arg0 ;


@end


#endif