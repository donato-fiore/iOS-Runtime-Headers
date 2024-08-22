// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPOPUPBUTTON_H
#define MFPOPUPBUTTON_H

@class UIControl, NSArray, NSString, UIFont;
@protocol UIContextMenuInteractionDelegate, MFPopupButtonDelegate;


#import "MFActivityIndicatorLabel.h"
#import "MFPopupButtonItem.h"

@interface MFPopupButton : UIControl <UIContextMenuInteractionDelegate>



@property (readonly, nonatomic) BOOL canPresentMenu;
@property (readonly, nonatomic) NSArray *combinedItems;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *deferredItems; // ivar: _deferredItems
@property (weak, nonatomic) NSObject<MFPopupButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) MFActivityIndicatorLabel *label; // ivar: _label
@property (copy, nonatomic) MFPopupButtonItem *selectedItem; // ivar: _selectedItem
@property (readonly) Class superclass;


-(id)actionForItem:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(void)_didSelectItem:(id)arg0 ;
-(void)_updateUI;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)disableMenu;
-(void)dismissMenu;
-(void)enableMenu;
-(void)sizeToFit;
-(void)updateItem:(id)arg0 ;


@end


#endif