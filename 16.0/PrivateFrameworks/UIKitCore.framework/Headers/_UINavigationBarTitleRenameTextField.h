// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARTITLERENAMETEXTFIELD_H
#define _UINAVIGATIONBARTITLERENAMETEXTFIELD_H

@class NSString;
@protocol _UIPassthroughScrollInteractionDelegate;


#import "UITextField.h"
#import "_UIPassthroughScrollInteraction.h"
#import "_UINavigationBarTitleRenamerSession.h"

@interface _UINavigationBarTitleRenameTextField : UITextField <_UIPassthroughScrollInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction; // ivar: _passthroughInteraction
@property (readonly, nonatomic) _UINavigationBarTitleRenamerSession *session; // ivar: _session
@property (readonly) Class superclass;


-(BOOL)_shouldEndEditingOnReturn;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)passthroughScrollInteraction:(id)arg0 shouldInteractAtLocation:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(id)initWithSession:(id)arg0 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif