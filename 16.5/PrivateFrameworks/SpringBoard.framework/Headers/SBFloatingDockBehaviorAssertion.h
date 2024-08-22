// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLOATINGDOCKBEHAVIORASSERTION_H
#define SBFLOATINGDOCKBEHAVIORASSERTION_H

@class NSString, NSDate;
@protocol BSDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBFloatingDockController.h"

@interface SBFloatingDockBehaviorAssertion : NSObject <BSDescriptionProviding, BSInvalidatable>



@property (readonly, nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) SBFloatingDockController *floatingDockController; // ivar: _floatingDockController
@property (readonly, nonatomic) BOOL gesturePossible; // ivar: _gesturePossible
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger level; // ivar: _level
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFloatingDockController:(id)arg0 visibleProgress:(CGFloat)arg1 animated:(BOOL)arg2 gesturePossible:(BOOL)arg3 atLevel:(NSUInteger)arg4 reason:(id)arg5 withCompletion:(id)arg6 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithCompletion:(id)arg0 ;
-(void)modifyProgress:(CGFloat)arg0 interactive:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif