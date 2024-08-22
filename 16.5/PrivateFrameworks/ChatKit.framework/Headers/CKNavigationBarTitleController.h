// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKNAVIGATIONBARTITLECONTROLLER_H
#define CKNAVIGATIONBARTITLECONTROLLER_H

@class UIBarButtonItem, NSArray, _UINavigationBarTitleView;
@protocol CKNavigationBarTitleControllerDelegate;

#import <Foundation/Foundation.h>

#import "CKAvatarPickerViewController.h"
#import "CKConversation.h"

@interface CKNavigationBarTitleController : NSObject

@property (readonly, nonatomic) CKAvatarPickerViewController *avatarPickerViewController; // ivar: _avatarPickerViewController
@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property (readonly, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (weak, nonatomic) NSObject<CKNavigationBarTitleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIBarButtonItem *deleteAllBarButtonItem; // ivar: _deleteAllBarButtonItem
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly, nonatomic) NSArray *leftBarButtonItems;
@property (readonly, nonatomic) NSArray *rightBarButtonItems;
@property (readonly, nonatomic) _UINavigationBarTitleView *titleView; // ivar: _titleView


-(id)initWithConversation:(id)arg0 ;
-(void)_editCancelButtonPressed;
-(void)_pressedAvatarView;


@end


#endif