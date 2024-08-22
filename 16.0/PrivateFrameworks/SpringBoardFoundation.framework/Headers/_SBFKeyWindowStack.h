// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBFKEYWINDOWSTACK_H
#define _SBFKEYWINDOWSTACK_H

@class NSMutableOrderedSet, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBFWindow.h"

@interface _SBFKeyWindowStack : NSObject <BSDescriptionProviding>

 {
    SBFWindow *_expectedKeyWindow;
    NSMutableOrderedSet *_windowStack;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_isWindowEligibleForKeyness:(id)arg0 ;
-(BOOL)pushKeyWindow:(id)arg0 ;
-(id)_evaluateForNewKeyWindowWithReason:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)expectedKeyWindow;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_keyWindowDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)noteWindowDeallocated:(id)arg0 ;
-(void)noteWindowHidden:(id)arg0 ;
-(void)noteWindowUnhidden:(id)arg0 ;
-(void)popKeyWindow:(id)arg0 ;
-(void)popKeyWindow:(id)arg0 reason:(id)arg1 ;


@end


#endif