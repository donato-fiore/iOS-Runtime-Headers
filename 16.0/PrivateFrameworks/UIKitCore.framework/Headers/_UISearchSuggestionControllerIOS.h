// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHSUGGESTIONCONTROLLERIOS_H
#define _UISEARCHSUGGESTIONCONTROLLERIOS_H

@class UISearchSuggestionController, NSString;
@protocol UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate;


#import "UIContextMenuInteraction.h"
#import "UISearchBar.h"
#import "UISearchTextField.h"
#import "UITapGestureRecognizer.h"

@interface _UISearchSuggestionControllerIOS : UISearchSuggestionController <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasVisibleMenu;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIContextMenuInteraction *menuInteraction; // ivar: _menuInteraction
@property (readonly, weak, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (readonly, weak, nonatomic) UISearchTextField *searchTextField; // ivar: _searchTextField
@property (retain, nonatomic) UITapGestureRecognizer *suggestionsRecoveryGesture; // ivar: _suggestionsRecoveryGesture
@property (readonly) Class superclass;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_suggestionsMenu;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithSearchTextField:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)searchTextFieldDidGainSearchBar:(id)arg0 ;
-(void)updateMenuWithSuggestions:(id)arg0 ;
-(void)updateSuggestions:(id)arg0 userInitiated:(BOOL)arg1 ;


@end


#endif