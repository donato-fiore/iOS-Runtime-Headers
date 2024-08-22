// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTCONTENTNAVIGATIONITEMUPDATER_H
#define CNCONTACTCONTENTNAVIGATIONITEMUPDATER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNContactContentNavigationItemUpdater : NSObject

@property (retain, nonatomic) NSArray *extraLeftBarButtonItems; // ivar: _extraLeftBarButtonItems
@property (retain, nonatomic) NSArray *extraRightBarButtonItems; // ivar: _extraRightBarButtonItems
@property (retain, nonatomic) NSArray *preEditLeftBarButtonItems; // ivar: _preEditLeftBarButtonItems


-(id)customEditItemTitleForIsUpdatingContact:(BOOL)arg0 ;
-(id)updateDisplayNavigationItemsForController:(id)arg0 mode:(NSInteger)arg1 actionTarget:(id)arg2 allowsEditing:(BOOL)arg3 editButtonEnabled:(BOOL)arg4 isInSheet:(BOOL)arg5 animated:(BOOL)arg6 ;
-(id)updateDisplayNavigationItemsForController:(id)arg0 mode:(NSInteger)arg1 actionTarget:(id)arg2 allowsEditing:(BOOL)arg3 editRequiresAuthorization:(BOOL)arg4 isInSheet:(BOOL)arg5 animated:(BOOL)arg6 ;
-(id)updateEditDoneButtonForController:(id)arg0 customEditButtonTitle:(id)arg1 hasChanges:(BOOL)arg2 ;
-(id)updateEditDoneButtonForController:(id)arg0 isUpdatingContact:(BOOL)arg1 hasChanges:(BOOL)arg2 ;
-(id)updateEditingNavigationItemForController:(id)arg0 actionTarget:(id)arg1 isInSheet:(BOOL)arg2 customEditButtonTitle:(id)arg3 hasChanges:(BOOL)arg4 animated:(BOOL)arg5 ;
-(id)updateEditingNavigationItemForController:(id)arg0 actionTarget:(id)arg1 isInSheet:(BOOL)arg2 isUpdatingContact:(BOOL)arg3 hasChanges:(BOOL)arg4 animated:(BOOL)arg5 ;
-(void)updateDisplayDoneButtonForController:(id)arg0 allowsEditing:(BOOL)arg1 viewMode:(NSInteger)arg2 editButtonEnabled:(BOOL)arg3 ;
-(void)updateDisplayDoneButtonForController:(id)arg0 allowsEditing:(BOOL)arg1 viewMode:(NSInteger)arg2 editRequiresAuthorization:(BOOL)arg3 ;


@end


#endif