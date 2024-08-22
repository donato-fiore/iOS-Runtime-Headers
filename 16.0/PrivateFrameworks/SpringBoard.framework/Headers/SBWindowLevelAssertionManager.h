// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWINDOWLEVELASSERTIONMANAGER_H
#define SBWINDOWLEVELASSERTIONMANAGER_H

@class NSString, NSMapTable;
@protocol BSDescriptionProviding, SBWindowLevelAssertionManagerDelegate;

#import <Foundation/Foundation.h>


@interface SBWindowLevelAssertionManager : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBWindowLevelAssertionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMapTable *windowLevelAssertionsPerScene; // ivar: _windowLevelAssertionsPerScene


-(id)acquireWindowLevelAssertionWithPriority:(NSInteger)arg0 windowLevel:(CGFloat)arg1 windowScene:(id)arg2 reason:(id)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)highestPriorityWindowLevelAssertionForWindowScene:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_notifyDelegateAssertionsDidUpdateForWindowScene:(id)arg0 ;


@end


#endif