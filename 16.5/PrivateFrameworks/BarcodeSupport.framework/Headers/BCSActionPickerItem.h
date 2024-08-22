// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSACTIONPICKERITEM_H
#define BCSACTIONPICKERITEM_H

@class NSURL, UIImage, NSString;
@protocol BCSActionPickerItemDelegate;

#import <Foundation/Foundation.h>

#import "BCSAction.h"

@interface BCSActionPickerItem : NSObject {
    id *_actionHandler;
}


@property (readonly, nonatomic) BCSAction *action; // ivar: _action
@property (weak, nonatomic) NSObject<BCSActionPickerItemDelegate> *actionPickerItemDelegate; // ivar: _actionPickerItemDelegate
@property (readonly, copy, nonatomic) NSURL *actionURL; // ivar: _actionURL
@property (readonly, nonatomic) BOOL canGroupInSubmenu; // ivar: _canGroupInSubmenu
@property (readonly, nonatomic, getter=isCopyActionItem) BOOL copyActionItem; // ivar: _copyActionItem
@property (readonly, nonatomic) NSInteger dataType;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSString *localizedDefaultActionDescription;
@property (readonly, nonatomic) BOOL shouldDismissAlertWhenActionIsTaken;
@property (readonly, copy, nonatomic) NSString *targetApplicationBundleIdentifier; // ivar: _targetApplicationBundleIdentifier
@property (readonly, nonatomic) BOOL useInlineMenu; // ivar: _useInlineMenu


+(id)actionPickerItemWithLabel:(id)arg0 actionHandler:(id)arg1 ;
-(id)initWithAction:(id)arg0 ;
-(id)initWithLabel:(id)arg0 action:(id)arg1 ;
-(id)initWithLabel:(id)arg0 actionHandler:(id)arg1 ;
-(void)didPerformAction;
-(void)performAction;
-(void)performActionWithFBOptions:(id)arg0 ;


@end


#endif