// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINCREMENTALSEARCHBAR_H
#define HKINCREMENTALSEARCHBAR_H

@class UIView, NSString;
@protocol HKIncrementalSearchBarDelegate;


#import "_SearchBarContent.h"

@interface HKIncrementalSearchBar : UIView

@property (retain, nonatomic) NSString *matchDisplayText; // ivar: _matchDisplayText
@property (readonly, nonatomic) _SearchBarContent *searchBarContent; // ivar: _searchBarContent
@property (retain, nonatomic) NSObject<HKIncrementalSearchBarDelegate> *searchBarDelegate;
@property (retain, nonatomic) NSString *searchText;


+(BOOL)_hasUppercaseCharacters:(id)arg0 ;
+(id)_patternFromSearchString:(id)arg0 quoteForJavascript:(BOOL)arg1 ;
+(id)regularExpressionFromString:(id)arg0 quoteForJavascript:(BOOL)arg1 caseless:(*BOOL)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)keyboardIsDown;
-(BOOL)keyboardIsUp;
-(BOOL)searchIsActive;
-(id)init;
-(id)inputAccessoryView;
-(struct CGSize )intrinsicContentSize;
-(void)_lowerKeyboard;
-(void)activateSearch:(BOOL)arg0 ;
-(void)dealloc;
-(void)doneAction:(id)arg0 ;
-(void)searchKeyboardDidHide:(id)arg0 ;
-(void)setDownEnabled:(BOOL)arg0 ;
-(void)setMatchDisplayVisible:(BOOL)arg0 ;
-(void)setUpEnabled:(BOOL)arg0 ;


@end


#endif