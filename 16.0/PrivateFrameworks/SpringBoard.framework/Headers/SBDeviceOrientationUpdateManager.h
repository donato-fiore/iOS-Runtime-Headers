// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDEVICEORIENTATIONUPDATEMANAGER_H
#define SBDEVICEORIENTATIONUPDATEMANAGER_H

@class NSHashTable;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBDeviceOrientationUpdateManager : NSObject {
    NSHashTable *_deferralAssertions;
    BOOL _deviceOrientationIsDirty;
    id<BSInvalidatable> *_stateCaptureHandle;
}


@property (readonly, nonatomic, getter=isCurrentlyDeferringOrientationUpdates) BOOL currentlyDeferringOrientationUpdates;
@property (nonatomic) NSInteger lastUpdatedDeviceOrientation; // ivar: _lastUpdatedDeviceOrientation


-(BOOL)_deviceOrientationUpdateNeededForOrientation:(NSInteger)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)deviceOrientationUpdateDeferralAssertionWithReason:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_endDeferringOrientationUpdatesForAssertion:(id)arg0 ;
-(void)_enqueueOrientationUpdateToDeviceOrientation:(NSInteger)arg0 ;
-(void)_legacy_enqueueOrientationUpdateToDeviceOrientation:(NSInteger)arg0 source:(id)arg1 ;
-(void)dealloc;


@end


#endif