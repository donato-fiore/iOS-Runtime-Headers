// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIALERTACTION_H
#define UIALERTACTION_H

@class NSString, UIInterfaceAction<UIAlertActionMutablePropertyObservering>;
@protocol NSCopying, UIAlertActionViewRepresentation_Internal;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIAlertController.h"
#import "UIViewController.h"
#import "UIImage.h"

@interface UIAlertAction : NSObject <NSCopying>

 {
    NSInteger _titleTextAlignment;
    BOOL _enabled;
    BOOL _checked;
    BOOL _isPreferred;
    UIColor *_imageTintColor;
    UIColor *_titleTextColor;
}


@property (nonatomic, setter=_setAlertController:) UIAlertController *_alertController; // ivar: __alertController
@property (copy, nonatomic, setter=_setDescriptiveText:) NSString *_descriptiveText; // ivar: __descriptiveText
@property (setter=_setInterfaceActionRepresentation:) UIInterfaceAction<UIAlertActionMutablePropertyObservering> *_interfaceActionRepresentation; // ivar: __interfaceActionRepresentation
@property (setter=_setIsPreferred:) BOOL _isPreferred;
@property (setter=_setRepresenter:) NSObject<UIAlertActionViewRepresentation_Internal> *_representer; // ivar: __representer
@property (retain, nonatomic, getter=_contentViewController, setter=_setContentViewController:) UIViewController *contentViewController; // ivar: _contentViewController
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic, getter=_keyCommandInput, setter=_setKeyCommandInput:) NSString *keyCommandInput; // ivar: _keyCommandInput
@property (nonatomic, getter=_keyCommandModifierFlags, setter=_setKeyCommandModifierFlags:) NSInteger keyCommandModifierFlags; // ivar: _keyCommandModifierFlags
@property (copy, nonatomic) id *shouldDismissHandler; // ivar: _shouldDismissHandler
@property (copy, nonatomic) id *simpleHandler; // ivar: _simpleHandler
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)_actionWithContentViewController:(id)arg0 style:(NSInteger)arg1 ;
+(id)_actionWithContentViewController:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
// +(id)_actionWithTitle:(id)arg0 descriptiveText:(id)arg1 image:(id)arg2 style:(NSInteger)arg3 handler:(id)arg4 shouldDismissHandler:(unk)arg5  ;
// +(id)_actionWithTitle:(id)arg0 image:(id)arg1 style:(NSInteger)arg2 handler:(id)arg3 shouldDismissHandler:(unk)arg4  ;
+(id)actionWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
-(BOOL)_isChecked;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)_didAddContentViewController;
-(void)_setChecked:(BOOL)arg0 ;
-(void)_willAddContentViewController;


@end


#endif