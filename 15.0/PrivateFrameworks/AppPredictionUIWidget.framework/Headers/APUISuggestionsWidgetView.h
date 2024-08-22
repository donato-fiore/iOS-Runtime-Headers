// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APUISUGGESTIONSWIDGETVIEW_H
#define APUISUGGESTIONSWIDGETVIEW_H

@class UIView, ATXSuggestionLayout, NSMutableArray, UIStackView;
@protocol APUISuggestionsWidgetViewDelegate;



@interface APUISuggestionsWidgetView : UIView {
    ATXSuggestionLayout *_suggestionLayout;
    NSUInteger _platterSize;
    NSMutableArray *_containerViews;
}


@property (weak, nonatomic) NSObject<APUISuggestionsWidgetViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


+(BOOL)_shouldDisplayRecentDonationsOrUpcomingMediaForTesting;
+(id)_developerModeSuggestions:(NSUInteger)arg0 ;
-(BOOL)_hasBundleInstalledAndNotRestrictedForSuggestion:(id)arg0 ;
-(id)_addWidgetContainerViewWithSuggestion:(id)arg0 toVerticalStackView:(id)arg1 ;
-(id)_createWidgetContainerViewWithSuggestion:(id)arg0 ;
-(id)_validSuggestionsWithSuggestions:(id)arg0 ;
-(id)suggestionAtLocation:(struct CGPoint )arg0 ;
-(void)_addFullWidthWidgetContainerViewWithSuggestion:(id)arg0 withTopSeparator:(BOOL)arg1 ;
-(void)_checkOrLoadSuggestions:(id)arg0 inDeveloperMode:(BOOL)arg1 rowCount:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_clearStackView;
-(void)_displayNoSuggestions;
-(void)_layout1x4WithRowCount:(NSUInteger)arg0 ;
-(void)_layoutNotSupported:(NSInteger)arg0 ;
-(void)_layoutOne2x2;
-(void)_setupStackViewIfNecessary;
-(void)addSeparatorViewToView:(id)arg0 ;
-(void)highlightSuggestion:(id)arg0 ;
-(void)layoutSubviews;
-(void)logLayoutSuggestions:(id)arg0 ;
-(void)updateWithSuggestionLayout:(id)arg0 ;


@end


#endif