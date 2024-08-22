// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXFRONTBOARDPROCESSWATCHER_H
#define AXFRONTBOARDPROCESSWATCHER_H

@class AXDispatchTimer, NSSet, NSString;
@protocol FBProcessManagerObserver, FBProcessObserver;

#import <Foundation/Foundation.h>


@interface AXFrontBoardProcessWatcher : NSObject <FBProcessManagerObserver, FBProcessObserver>

 {
    id *_observerToken;
    AXDispatchTimer *_appTransitionTimer;
    NSSet *_cachedFocusedAppPIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)accessibilitySpokenNameForProcess:(id)arg0 ;
+(id)processForBundleIdentifier:(id)arg0 ;
+(void)validateFocusedAppsWithEvent:(NSInteger)arg0 ;
-(BOOL)_processStateChangeIsTaskStateChangeFrom:(id)arg0 to:(id)arg1 ;
-(BOOL)_processStateChangeIsVisibilityStateChangeFrom:(id)arg0 to:(id)arg1 ;
-(id)_processDescriptionForPID:(int)arg0 ;
-(id)init;
-(void)_validateFocusedApps:(NSInteger)arg0 ;
-(void)dealloc;
-(void)process:(id)arg0 stateDidChangeFromState:(id)arg1 toState:(id)arg2 ;
-(void)processDidExit:(id)arg0 ;
-(void)processManager:(id)arg0 didAddProcess:(id)arg1 ;
-(void)processManager:(id)arg0 didRemoveProcess:(id)arg1 ;


@end


#endif