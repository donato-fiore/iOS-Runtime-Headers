// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSTATUSBARREUSEPOOL_H
#define SBSTATUSBARREUSEPOOL_H

@class NSHashTable, UIWindow, NSMutableArray, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface SBStatusBarReusePool : NSObject <BSDescriptionProviding>

 {
    NSHashTable *_statusBars;
    UIWindow *_recycledStatusBarsContainerWindow;
    NSMutableArray *_recycledStatusBars;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *newStatusBarConfigurationHandler; // ivar: _newStatusBarConfigurationHandler
@property (readonly) Class superclass;
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(NSUInteger)_statusBarInstanceLimit;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)getReusableStatusBarWithReason:(id)arg0 ;
-(id)getReusableStatusBarWithReason:(id)arg0 withFrame:(struct CGRect )arg1 ;
-(id)initWithWindowScene:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_removeStatusBarContainer:(id)arg0 ;
-(void)_resetStatusBar:(id)arg0 ;
-(void)enumerateStatusBars:(id)arg0 ;
-(void)recycleStatusBar:(id)arg0 ;


@end


#endif