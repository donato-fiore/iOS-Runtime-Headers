// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSBACKLIGHTFBSSCENEENVIRONMENT_H
#define BLSBACKLIGHTFBSSCENEENVIRONMENT_H

@class NSString, FBSScene, NSDate;
@protocol BLSBacklightSceneEnvironment_Private, BLSBacklightSceneEnvironmentDelegate, BLSBacklightSceneEnvironmentUpdating;

#import <Foundation/Foundation.h>

#import "BLSAlwaysOnSession.h"
#import "BLSAlwaysOnFrameSpecifier.h"
#import "BLSBacklightSceneVisualState.h"

@interface BLSBacklightFBSSceneEnvironment : NSObject <BLSBacklightSceneEnvironment_Private>

 {
    id<BLSBacklightSceneEnvironmentDelegate> *_delegate;
    os_unfair_lock_s _lock;
}


@property (retain) BLSAlwaysOnSession *alwaysOnSession; // ivar: _alwaysOnSession
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<BLSBacklightSceneEnvironmentDelegate> *delegate;
@property (readonly, getter=isDelegateActive) BOOL delegateActive;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isDisplayBlanked) BOOL displayBlanked;
@property (weak, getter=_FBSScene, setter=_setFBSScene:) FBSScene *fbsScene; // ivar: _fbsScene
@property (readonly) BLSAlwaysOnFrameSpecifier *frameSpecifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, getter=isLiveUpdating) BOOL liveUpdating;
@property BOOL optsOutOfProcessAssertions;
@property (readonly) NSDate *presentationDate;
@property (readonly) Class superclass;
@property BOOL supportsAlwaysOn;
@property (readonly, getter=hasUnrestrictedFramerateUpdates) BOOL unrestrictedFramerateUpdates;
@property (retain) NSObject<BLSBacklightSceneEnvironmentUpdating> *updater; // ivar: _updater
@property (readonly) BLSBacklightSceneVisualState *visualState;


+(void)createEnvironmentForFBSScene:(id)arg0 ;
-(id)descriptionDescribedBySettings:(id)arg0 ;
-(id)initWithFBSScene:(id)arg0 ;
-(void)invalidateAllTimelinesForReason:(id)arg0 ;


@end


#endif