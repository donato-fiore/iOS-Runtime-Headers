// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APUISUGGESTIONVIEW_H
#define APUISUGGESTIONVIEW_H

@class UIView, MTVisualStylingProvider, UIImageView, NSArray, UILabel, UIStackView, ATXProactiveSuggestion;
@protocol APUISuggestionsWidgetViewDelegate;



@interface APUISuggestionView : UIView {
    MTVisualStylingProvider *_reasonStylingProvider;
}


@property (retain, nonatomic) UIImageView *appImageView; // ivar: _appImageView
@property (nonatomic) BOOL canEngageSuggestion; // ivar: _canEngageSuggestion
@property (weak, nonatomic) NSObject<APUISuggestionsWidgetViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *labels; // ivar: _labels
@property (nonatomic) NSUInteger platterSize; // ivar: _platterSize
@property (retain, nonatomic) UILabel *reasonLabel; // ivar: _reasonLabel
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) ATXProactiveSuggestion *suggestion; // ivar: _suggestion
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(int)_subtitleNumberOfLines;
-(int)_titleNumberOfLines;
-(void)_setINImage:(id)arg0 withBundleID:(id)arg1 ;
-(void)_updateMaximumNumberOfLines;
-(void)_updateReasonStylingProvider;
-(void)createViewsIfNeeded;
-(void)installReasonLabelIfNecessary;
-(void)layoutSuggestion:(id)arg0 ;
-(void)setINImage:(id)arg0 withBundleID:(id)arg1 ;
-(void)setLNImage:(id)arg0 withBundleID:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif