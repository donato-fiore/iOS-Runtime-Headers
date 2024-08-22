// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSTATUSBARMANAGER_H
#define SBSTATUSBARMANAGER_H

@class NSHashTable, UIWindow, NSMutableArray, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBStatusBarManager : NSObject <BSDescriptionProviding>

 {
    NSHashTable *_statusBars;
    UIWindow *_recycledStatusBarsContainerWindow;
    NSMutableArray *_recycledStatusBars;
    NSHashTable *_hideStatusBarAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isFrontmostStatusBarHidden;
-(BOOL)isFrontmostStatusBarPartHidden:(NSInteger)arg0 ;
-(id)acquireHideFrontmostStatusBarAssertionForReason:(id)arg0 ;
-(id)createStatusBarWithReason:(id)arg0 ;
-(id)createStatusBarWithReason:(id)arg0 withFrame:(struct CGRect )arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)frontmostStatusBarStyleRequest;
-(id)init;
-(id)leadingStatusBarStyleRequest;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)trailingStatusBarStyleRequest;
-(void)_removeStatusBarContainer:(id)arg0 ;
-(void)handleStatusBarTapWithEvent:(id)arg0 ;
-(void)recycleStatusBar:(id)arg0 ;
-(void)resetStatusBar:(id)arg0 ;


@end


#endif