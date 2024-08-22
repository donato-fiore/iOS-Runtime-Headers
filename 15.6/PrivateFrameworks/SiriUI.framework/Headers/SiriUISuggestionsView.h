// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUISUGGESTIONSVIEW_H
#define SIRIUISUGGESTIONSVIEW_H

@class UIView, UILabel, NSArray, NSTimer, NSMutableOrderedSet, UIColor;
@protocol SiriUISuggestionsViewDelegate;


#import "SiriUIAcousticIDSpinner.h"
#import "SiriUISuggestionsHeaderText.h"

@interface SiriUISuggestionsView : UIView {
    UIView *_contentView;
    UILabel *_headerLabel;
    UILabel *_oldHeaderLabel;
    UILabel *_subheaderLabel;
    UILabel *_largeSubheaderLabel;
    NSArray *_suggestionLabels;
    NSArray *_oldSuggestionLabels;
    BOOL _firstSuggestionPresentation;
    NSTimer *_updateSuggestionsTimer;
    NSMutableOrderedSet *_pendedSuggestions;
    SiriUIAcousticIDSpinner *_acousticIDSpinner;
    NSUInteger _numberOfSuggestions;
    NSDirectionalEdgeInsets _edgeInsets;
}


@property (nonatomic) CGPoint contentOffset; // ivar: _contentOffset
@property (weak, nonatomic) NSObject<SiriUISuggestionsViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isGuideHidden) BOOL guideHidden;
@property (retain, nonatomic) UIView *guideView; // ivar: _guideView
@property (copy, nonatomic) SiriUISuggestionsHeaderText *headerText; // ivar: _headerText
@property (copy, nonatomic) SiriUISuggestionsHeaderText *largeSubheaderText; // ivar: _largeSubheaderText
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (copy, nonatomic) SiriUISuggestionsHeaderText *subheaderText; // ivar: _subheaderText
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor


-(BOOL)_isPadHeightType;
-(BOOL)_isPortrait;
-(BOOL)isShowingSuggestions;
-(CGFloat)_headerToLargeSubheaderOffset;
-(CGFloat)_headerToSubheaderOffset;
-(CGFloat)_suggestionFontSize;
-(CGFloat)_suggestionSpacing;
-(CGFloat)_updateSuggestionsDelay;
-(NSUInteger)_numberOfSuggestionsToDisplay;
-(id)_createSpringAnimation:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)_heightType;
-(void)_animateHeaderIn;
-(void)_animateHeaderOut;
-(void)_animateInSuggestionAtIndex:(NSUInteger)arg0 ;
-(void)_animateOutSuggestionAtIndex:(NSUInteger)arg0 ;
-(void)_loadLargeSubheaderViewIfNeeded;
-(void)_loadSubheaderViewIfNeeded;
-(void)_loadSuggestionsViewsIfNeeded;
-(void)_reallyShowAcousticIDSpinner;
-(void)_setSuggestionTexts:(id)arg0 ;
-(void)_updateSuggestions;
-(void)acousticIDSpinnerDidHide:(id)arg0 ;
-(void)animateOutWithCompletion:(id)arg0 ;
-(void)clearCurrentSuggestions;
-(void)hideAcousticIDSpinner;
-(void)layoutSubviews;
-(void)showAcousticIDSpinner;
-(void)startSuggesting;
-(void)stopSuggesting;


@end


#endif