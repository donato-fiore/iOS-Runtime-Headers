// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKDATALISTSUGGESTIONSDROPDOWN_H
#define WKDATALISTSUGGESTIONSDROPDOWN_H

@class NSString;
@protocol UIContextMenuInteractionDelegate;


#import "WKDataListSuggestionsControl.h"

@interface WKDataListSuggestionsDropdown : WKDataListSuggestionsControl <UIContextMenuInteractionDelegate>

 {
    RetainPtr<NSArray<UIMenuElement *>> _suggestionsMenuElements;
    RetainPtr<UIContextMenuInteraction> _suggestionsContextMenuInteraction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configuration:(id)arg1 highlightPreviewForItemWithIdentifier:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithInformation:(*void)arg0 inView:(id)arg1 ;
-(struct UIEdgeInsets )_preferredEdgeInsetsForSuggestionsMenu;
-(void)_displayWithActivationType:(unsigned char)arg0 ;
-(void)_removeContextMenuInteraction;
-(void)_showSuggestions;
-(void)_suggestionsMenuDidDismiss;
-(void)_suggestionsMenuDidPresent;
-(void)_updateSuggestionsMenuElements;
-(void)_updateTextSuggestions;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)didSelectOptionAtIndex:(NSInteger)arg0 ;
-(void)invalidate;
-(void)showSuggestionsDropdown:(*void)arg0 activationType:(unsigned char)arg1 ;
-(void)updateWithInformation:(*void)arg0 ;


@end


#endif