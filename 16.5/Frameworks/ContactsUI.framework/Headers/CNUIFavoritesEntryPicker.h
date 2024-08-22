// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIFAVORITESENTRYPICKER_H
#define CNUIFAVORITESENTRYPICKER_H

@class UIAlertController, CNContact, UIContextMenuInteraction, NSString;
@protocol CNContactActionsControllerDelegate, CNUIFavoritesEntryPickerDelegate;

#import <Foundation/Foundation.h>

#import "CNActionMenuHelper.h"
#import "CNContactActionsController.h"

@interface CNUIFavoritesEntryPicker : NSObject <CNContactActionsControllerDelegate>



@property (retain, nonatomic) CNActionMenuHelper *actionMenuHelper; // ivar: _actionMenuHelper
@property (retain, nonatomic) CNContactActionsController *actionsController; // ivar: _actionsController
@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNUIFavoritesEntryPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
+(id)log;
-(id)initWithContact:(id)arg0 ;
-(id)menuProviderForContextMenuInteraction:(SEL)arg0 ;
-(id)viewController;
-(void)contactActionsController:(id)arg0 didSelectAction:(id)arg1 ;
-(void)contactActionsController:(id)arg0 didUpdateWithMenu:(id)arg1 ;


@end


#endif