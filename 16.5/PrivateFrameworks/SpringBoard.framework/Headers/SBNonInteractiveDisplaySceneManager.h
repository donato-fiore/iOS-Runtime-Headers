// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBNONINTERACTIVEDISPLAYSCENEMANAGER_H
#define SBNONINTERACTIVEDISPLAYSCENEMANAGER_H

@class NSString;
@protocol SBSuspendedUnderLockManagerDelegate;


#import "SBSceneManager.h"
#import "SBSuspendedUnderLockManager.h"

@interface SBNonInteractiveDisplaySceneManager : SBSceneManager <SBSuspendedUnderLockManagerDelegate>

 {
    SBSuspendedUnderLockManager *_lazy_suspendedUnderLockManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldAutoHostScene:(id)arg0 ;
-(BOOL)isSuspendedUnderLock;
-(BOOL)suspendedUnderLockManager:(id)arg0 shouldPreventSuspendUnderLockForScene:(id)arg1 ;
-(BOOL)suspendedUnderLockManager:(id)arg0 shouldPreventUnderLockForScene:(id)arg1 ;
-(id)externalApplicationSceneHandles;
-(id)initWithReference:(id)arg0 sceneIdentityProvider:(id)arg1 presentationBinder:(id)arg2 snapshotBehavior:(NSUInteger)arg3 ;
-(id)runningApplicationScenes:(id)arg0 ;
-(id)suspendedUnderLockManager:(id)arg0 sceneHandleForScene:(id)arg1 ;
-(id)suspendedUnderLockManagerDisplayConfiguration:(id)arg0 ;
-(id)suspendedUnderLockManagerVisibleScenes:(id)arg0 ;
-(void)_externalCoverSheetVisibilityDidDismiss:(id)arg0 ;
-(void)_externalCoverSheetVisibilityDidPresent:(id)arg0 ;
-(void)dealloc;
-(void)setSuspendedUnderLock:(BOOL)arg0 ;
// -(void)setSuspendedUnderLock:(BOOL)arg0 alongsideWillChangeBlock:(id)arg1 alongsideDidChangeBlock:(unk)arg2  ;


@end


#endif