// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKNUMBERPADSUGGESTIONSVIEW_H
#define PKNUMBERPADSUGGESTIONSVIEW_H

@class UIStackView, NSArray, UIColor;
@protocol PKNumberPadSuggestionsViewDelegate;



@interface PKNumberPadSuggestionsView : UIStackView {
    NSArray *_suggestionButtons;
}


@property (copy, nonatomic) UIColor *buttonBackgroundColor; // ivar: _buttonBackgroundColor
@property (copy, nonatomic) UIColor *buttonTextColor; // ivar: _buttonTextColor
@property (weak, nonatomic) NSObject<PKNumberPadSuggestionsViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *suggestions; // ivar: _suggestions


+(struct CGSize )defaultSize;
-(id)_configuredBorderedButtonForSuggestion:(id)arg0 withBorder:(NSUInteger)arg1 primaryAction:(id)arg2 ;
-(id)initWithDefaultFrame;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_selectedSuggestion:(id)arg0 ;


@end


#endif