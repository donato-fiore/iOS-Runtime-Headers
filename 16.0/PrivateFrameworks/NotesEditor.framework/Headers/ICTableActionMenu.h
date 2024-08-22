// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTABLEACTIONMENU_H
#define ICTABLEACTIONMENU_H

@class UIBarButtonItem, UIViewController;

#import <Foundation/Foundation.h>

#import "ICTableAttachmentViewController.h"

@interface ICTableActionMenu : NSObject {
    ? completion;
}


@property (nonatomic, copy) id *completion;
@property (nonatomic, retain) UIBarButtonItem *presentingBarButtonItem; // ivar: presentingBarButtonItem
@property (nonatomic, retain) UIViewController *presentingViewController; // ivar: presentingViewController
@property (nonatomic, weak) ICTableAttachmentViewController *tableAttachmentViewController; // ivar: tableAttachmentViewController


+(id)menuWithTableAttachmentViewController:(id)arg0 presentingViewController:(id)arg1 presentingBarButtonItem:(id)arg2 completion:(id)arg3 ;
+(id)menuWithTableAttachmentViewController:(id)arg0 presentingViewController:(id)arg1 presentingBarButtonItem:(id)arg2 deferredChildren:(BOOL)arg3 completion:(id)arg4 ;
-(id)init;
-(id)initWithTableAttachmentViewController:(id)arg0 presentingViewController:(id)arg1 presentingBarButtonItem:(id)arg2 completion:(id)arg3 ;
-(id)menuSections;


@end


#endif