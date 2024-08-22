// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSSTATUSBARSTYLEOVERRIDESCOORDINATOR_H
#define SBSSTATUSBARSTYLEOVERRIDESCOORDINATOR_H

@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface SBSStatusBarStyleOverridesCoordinator : NSObject

@property (weak, nonatomic) NSObject<SBSStatusBarStyleOverridesCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger styleOverrides; // ivar: _styleOverrides


-(void)_handleStatusBarTapWithContext:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_registrationInvalidated:(id)arg0 ;
-(void)dealloc;
-(void)setRegisteredStyleOverrides:(NSUInteger)arg0 reply:(id)arg1 ;


@end


#endif