// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AECONCRETEPREFERENCES_H
#define AECONCRETEPREFERENCES_H

@class NSString;
@protocol AEPreferences, AEPreferencePrimitives;

#import <Foundation/Foundation.h>


@interface AEConcretePreferences : NSObject <AEPreferences>

 {
    id<AEPreferencePrimitives> *_primitives;
}


@property (nonatomic, getter=shouldCaptureDisplays) BOOL captureDisplays;
@property (nonatomic, getter=shouldCreateAssessmentFile) BOOL createAssessmentFile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=shouldDisableContinuity) BOOL disableContinuity;
@property (nonatomic, getter=shouldDisableDictation) BOOL disableDictation;
@property (nonatomic, getter=shouldDisableQuickNote) BOOL disableQuickNote;
@property (nonatomic, getter=shouldDisableSiri) BOOL disableSiri;
@property (nonatomic, getter=shouldDisableTrackpadLookup) BOOL disableTrackpadLookup;
@property (nonatomic, getter=shouldElevateWindows) BOOL elevateWindows;
@property (nonatomic, getter=shouldEnterSandbox) BOOL enterSandbox;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=shouldPauseMedia) BOOL pauseMedia;
@property (nonatomic, getter=shouldPresentShields) BOOL presentShields;
@property (nonatomic, getter=shouldRestrictContentCapture) BOOL restrictContentCapture;
@property (nonatomic, getter=shouldRestrictFrontmostApp) BOOL restrictFrontmostApp;
@property (nonatomic, getter=shouldRestrictNetworkAccess) BOOL restrictNetworkAccess;
@property (nonatomic, getter=shouldScrubPasteboard) BOOL scrubPasteboard;
@property (nonatomic, getter=shouldStopAirplayBeforehand) BOOL stopAirPlayBeforehand;
@property (readonly) Class superclass;


-(id)init;


@end


#endif