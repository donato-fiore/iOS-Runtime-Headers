// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFIELDEDITORHOST_H
#define _UIFIELDEDITORHOST_H

@class UIView<_UIFieldEditorHostingViewRequirements>;

#import <Foundation/Foundation.h>

#import "UIFieldEditor.h"

@interface _UIFieldEditorHost : NSObject

@property (readonly, nonatomic) UIFieldEditor *hostedFieldEditor; // ivar: _hostedFieldEditor
@property (readonly, nonatomic, getter=isHostingFieldEditor) BOOL hostingFieldEditor;
@property (readonly, weak, nonatomic) UIView<_UIFieldEditorHostingViewRequirements> *hostingView; // ivar: _hostingView


+(id)fieldEditorHostForTextField:(id)arg0 ;
-(id)_viewForHostingFieldEditor;
-(id)description;
-(id)initWithHostingView:(id)arg0 ;
-(void)addFieldEditor:(id)arg0 ;
-(void)addPlaceholderLabel:(id)arg0 ;
-(void)layoutIfNeeded;
-(void)removeFieldEditor;


@end


#endif