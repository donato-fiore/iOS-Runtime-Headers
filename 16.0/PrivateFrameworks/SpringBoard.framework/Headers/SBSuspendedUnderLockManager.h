// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSUSPENDEDUNDERLOCKMANAGER_H
#define SBSUSPENDEDUNDERLOCKMANAGER_H

@class FBWorkspaceEventQueue;
@protocol SBSuspendedUnderLockManagerDelegate;

#import <Foundation/Foundation.h>


@interface SBSuspendedUnderLockManager : NSObject {
    FBWorkspaceEventQueue *_eventQueue;
    BOOL _eventQueue_suspendedUnderLock;
}


@property (weak, nonatomic) NSObject<SBSuspendedUnderLockManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isSuspendedUnderLock) BOOL suspendedUnderLock; // ivar: _suspendedUnderLock


-(BOOL)_shouldBeBackgroundUnderLockForScene:(id)arg0 withSettings:(id)arg1 ;
-(BOOL)_shouldPutSceneUnderLock:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 eventQueue:(id)arg1 ;
-(void)interceptUpdateForScene:(id)arg0 withNewSettings:(id)arg1 ;


@end


#endif