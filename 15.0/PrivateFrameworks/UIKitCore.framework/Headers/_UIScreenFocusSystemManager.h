// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISCREENFOCUSSYSTEMMANAGER_H
#define _UISCREENFOCUSSYSTEMMANAGER_H

@class NSString;
@protocol _UIFocusSystemDelegate, _UIFocusMovementPerformerDelegate;

#import <Foundation/Foundation.h>

#import "_UIFocusScrollManager.h"
#import "UIWindowScene.h"

@interface _UIScreenFocusSystemManager : NSObject <_UIFocusSystemDelegate, _UIFocusMovementPerformerDelegate>

 {
    BOOL _handlesFocusMovementAction;
}


@property (nonatomic, getter=_uiktest_allowsForwardingFocusMovementActions, setter=_uiktest_setAllowsForwardingFocusMovementActions:) BOOL allowsForwardingFocusMovementActions; // ivar: _allowsForwardingFocusMovementActions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIFocusScrollManager *scrollManager; // ivar: _scrollManager
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


-(BOOL)_focusSystem:(id)arg0 performFocusMovementWithInfo:(id)arg1 ;
-(BOOL)_focusSystem:(id)arg0 shouldRestoreFocusInContext:(id)arg1 ;
-(BOOL)_handleFailedFocusMovementRequest:(id)arg0 withPerformer:(id)arg1 ;
-(BOOL)_shouldForwardFocusMovementRequest:(id)arg0 ;
-(BOOL)_shouldWaitForFocusMovementActionToEnableFocusSystem:(id)arg0 ;
-(id)_focusItemContainerForFocusSystem:(id)arg0 ;
-(id)_focusMapContainerForFocusSystem:(id)arg0 ;
-(id)_preferredFocusEnvironmentsForFocusSystem:(id)arg0 ;
-(id)initWithScene:(id)arg0 scrollManager:(id)arg1 ;
-(void)_focusSystem:(id)arg0 didFinishUpdatingFocusInContext:(id)arg1 ;


@end


#endif