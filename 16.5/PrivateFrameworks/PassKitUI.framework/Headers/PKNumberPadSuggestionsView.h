// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKNUMBERPADSUGGESTIONSVIEW_H
#define PKNUMBERPADSUGGESTIONSVIEW_H

@class UIStackView, NSArray, UIColor;
@protocol PKNumberPadSuggestionsViewDelegate;



@interface PKNumberPadSuggestionsView : UIStackView {
    NSArray *_suggestionButtons;
    unsigned char _batchedUpdateCount;
    BOOL _needsReload;
    BOOL _needsUpdate;
}


@property (copy, nonatomic) UIColor *buttonBackgroundColor; // ivar: _buttonBackgroundColor
@property (copy, nonatomic) UIColor *buttonTextColor; // ivar: _buttonTextColor
@property (weak, nonatomic) NSObject<PKNumberPadSuggestionsViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *suggestions; // ivar: _suggestions


+(struct CGSize )defaultSize;
-(id)_createBorderedButtonForSuggestion:(id)arg0 withBorder:(NSUInteger)arg1 primaryAction:(id)arg2 ;
-(id)initWithDefaultFrame;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_reloadSubviews;
-(void)_selectedSuggestion:(id)arg0 ;
-(void)_updateButtons;
-(void)performBatchUpdates:(id)arg0 ;


@end


#endif