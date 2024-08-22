// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFIELDEDITORSYSTEMINPUTHOST_H
#define _UIFIELDEDITORSYSTEMINPUTHOST_H

@class UIFieldEditorHost;


#import "_UIFieldEditorSystemInputHostView.h"
#import "UIVisualEffectView.h"
#import "UISystemInputViewController.h"

@interface _UIFieldEditorSystemInputHost : UIFieldEditorHost {
    _UIFieldEditorSystemInputHostView *_containerView;
    UIVisualEffectView *_backgroundEffectView;
}


@property (readonly, nonatomic) UISystemInputViewController *_systemInputViewController; // ivar: _systemInputViewController


-(BOOL)_isTV;
-(id)_viewForHostingFieldEditor;
-(id)description;
-(void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(BOOL)arg0 ;
-(void)addFieldEditor:(id)arg0 ;
-(void)addPlaceholderLabel:(id)arg0 ;
-(void)dealloc;
-(void)layoutIfNeeded;
-(void)removeFieldEditor;


@end


#endif