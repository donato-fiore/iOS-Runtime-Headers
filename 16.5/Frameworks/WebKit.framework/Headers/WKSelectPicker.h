// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKSELECTPICKER_H
#define WKSELECTPICKER_H

@class NSString;
@protocol WKFormControl, UIContextMenuInteractionDelegate;

#import <Foundation/Foundation.h>

#import "WKContentView.h"

@interface WKSelectPicker : NSObject <WKFormControl, UIContextMenuInteractionDelegate>

 {
    WKContentView *_view;
    CGPoint _interactionPoint;
    RetainPtr<UIMenu> _selectMenu;
    RetainPtr<UIContextMenuInteraction> _selectContextMenuInteraction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)selectFormAccessoryHasCheckedItemAtRow:(NSInteger)arg0 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)actionForOptionIndex:(NSInteger)arg0 ;
-(id)actionForOptionItem:(*void)arg0 withIndex:(NSInteger)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configuration:(id)arg1 highlightPreviewForItemWithIdentifier:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)controlView;
-(id)createMenu;
-(id)initWithView:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)dealloc;
-(void)didSelectOptionIndex:(NSInteger)arg0 ;
-(void)ensureContextMenuInteraction;
-(void)removeContextMenuInteraction;
-(void)selectRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 extendingSelection:(BOOL)arg2 ;
-(void)showSelectPicker;


@end


#endif