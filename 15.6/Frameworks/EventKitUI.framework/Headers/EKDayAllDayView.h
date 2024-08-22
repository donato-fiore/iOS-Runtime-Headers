// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKDAYALLDAYVIEW_H
#define EKDAYALLDAYVIEW_H

@class UIView, NSMutableArray, UILabel, UIScrollView, EKEvent, UIColor, NSMutableDictionary;
@protocol EKDayOccurrenceViewDelegate, EKUITintColorUpdateDelegate, EKDayAllDayViewDelegate;


#import "EKUIVisualEffectView.h"
#import "EKDayOccurrenceView.h"

@interface EKDayAllDayView : UIView <EKDayOccurrenceViewDelegate, EKUITintColorUpdateDelegate>

 {
    NSInteger _orientation;
    NSMutableArray *_occurrenceViews;
    UILabel *_allDay;
    BOOL _allDayLabelHighlighted;
    UIScrollView *_scroller;
    CGFloat _occurrenceInset;
    BOOL _allowSelection;
    BOOL _showSelection;
    EKEvent *_selectedEvent;
    BOOL _usesSmallText;
    BOOL _smallTextSettingLocked;
    BOOL _showBirthdayCount;
    NSInteger _birthdayCount;
    NSInteger _targetSizeClass;
    UIView *_dividerLineViewTop;
    UIView *_dividerLineViewBottom;
    EKUIVisualEffectView *_dividerLineSuperview;
    UIColor *_dividerLineVisualEffectColor;
    EKDayOccurrenceView *_birthdayCountOccurrenceView;
    NSMutableDictionary *_temporaryViewCache;
}


@property (nonatomic) BOOL allowsOccurrenceSelection;
@property (weak, nonatomic) NSObject<EKDayAllDayViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) EKEvent *dimmedOccurrence; // ivar: _dimmedOccurrence
@property (nonatomic) CGFloat fixedHeight; // ivar: _fixedHeight
@property (nonatomic) BOOL forceSingleColumnLayout; // ivar: _forceSingleColumnLayout
@property (nonatomic) BOOL hideOccurrenceBackground; // ivar: _hideOccurrenceBackground
@property (nonatomic) int maxVisibleRows; // ivar: _maxVisibleRows
@property (readonly, nonatomic) CGFloat naturalHeight;
@property (nonatomic) BOOL showBirthdayCountInsteadOfEvents;
@property (nonatomic) BOOL showsBorderLines; // ivar: _showsBorderLines
@property (nonatomic) BOOL showsLabel; // ivar: _showsLabel
@property (nonatomic) BOOL showsSelection;


+(id)allDayLabelBoldFont;
+(id)allDayLabelFont;
+(id)unscaledAllDayFont;
-(BOOL)containsEvent:(id)arg0 ;
-(BOOL)isAllDayLabelHighlighted;
-(CGFloat)_allDayAreaHeightForEventCount:(NSInteger)arg0 ;
-(CGFloat)_borderLineWidth;
-(CGFloat)_height;
-(CGFloat)firstEventYOffset;
-(CGFloat)nextAvailableOccurrenceViewYOrigin;
-(NSInteger)_sizeClass;
-(id)_findSelectedCopySubviewOfView:(id)arg0 ;
-(id)_selectedCopyView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 sizeClass:(NSInteger)arg1 ;
-(id)occurrenceViewForEvent:(id)arg0 ;
-(id)occurrenceViews;
-(id)selectedEvent;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_clearTemporaryViews;
-(void)_configureOccurrenceViewMarginAndPadding:(id)arg0 ;
-(void)_saveTemporaryViews;
-(void)_setUpBirthdayCountViewIfNeeded;
-(void)_smallTextSettingChanged;
-(void)addViewToScroller:(id)arg0 ;
-(void)configureOccurrenceViewForGestureController:(id)arg0 ;
-(void)dayOccurrenceViewSelected:(id)arg0 atPoint:(struct CGPoint )arg1 wasTapped:(BOOL)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)lockUseOfSmallTextToState:(BOOL)arg0 ;
-(void)removeAllOccurrenceViews;
-(void)selectEvent:(id)arg0 ;
-(void)setAllDayLabelColor:(id)arg0 ;
-(void)setAllDayLabelHighlighted:(BOOL)arg0 ;
-(void)setBorderColor:(id)arg0 ;
-(void)setDividerLineVisualEffect:(id)arg0 ;
-(void)setOccurrenceInset:(CGFloat)arg0 labelInset:(CGFloat)arg1 ;
-(void)setOccurrences:(id)arg0 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setTopBorderLineHidden:(BOOL)arg0 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateLabelFont;
-(void)viewTintColorDidChangeForView:(id)arg0 toColor:(id)arg1 ;


@end


#endif