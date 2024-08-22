// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPOPUPBUTTON_H
#define MFPOPUPBUTTON_H

@class UIControl, NSString, UIFont, NSArray, UILabel;
@protocol UIContextMenuInteractionDelegate, MFPopupButtonDelegate;


#import "MFPopupButtonItem.h"

@interface MFPopupButton : UIControl <UIContextMenuInteractionDelegate>



@property (readonly, nonatomic) BOOL canPresentMenu;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFPopupButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) MFPopupButtonItem *selectedItem; // ivar: _selectedItem
@property (readonly) Class superclass;


-(id)_actionForItem:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(void)_didSelectItem:(id)arg0 ;
-(void)_updateUI;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dismissMenu;
-(void)sizeToFit;


@end


#endif