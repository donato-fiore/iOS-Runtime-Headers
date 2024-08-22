// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLLOCATIONMANAGERINTERNAL_H
#define CLLOCATIONMANAGERINTERNAL_H

@class NSString, CLTimer, CLSilo, NSMutableSet;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>

#import "CLLocationManagerStateTracker.h"
#import "CLLocationManager.h"

@interface CLLocationManagerInternal : NSObject {
    *__CLClient fClient;
    CLLocationManagerStateTracker *fState;
    ? fLocation;
    NSString *fLocationEventType;
    CLTimer *fLocationRequestTimer;
    CGFloat fLocationRequestTimeout;
    CLTimer *fRangingRequestTimer;
    CGFloat fLastRangingRequestTimeout;
    NSUInteger fLastRangingRequestMachTime;
    int fHeadingOrientation;
    id *fPlaceInferenceHandler;
    NSUInteger fFidelityPolicy;
    CLTimer *fPlaceInferenceTimer;
    CLSilo *fSilo;
}


@property (weak, nonatomic) NSObject<CLLocationManagerDelegate> *delegate; // ivar: fDelegate
@property (weak, nonatomic) CLLocationManager *manager; // ivar: fManager
@property (readonly, nonatomic) NSMutableSet *rangedConstraints; // ivar: fRangedConstraints
@property (readonly, nonatomic) NSMutableSet *rangedRegions; // ivar: fRangedRegions


-(BOOL)allowsBackgroundLocationUpdates;
-(BOOL)hasLingeringRangingRequest;
-(BOOL)showsBackgroundLocationIndicator;
-(id)initWithInfo:(id)arg0 bundleIdentifier:(id)arg1 bundlePath:(id)arg2 websiteIdentifier:(id)arg3 delegate:(id)arg4 silo:(id)arg5 ;
-(int)PausesLocationUpdatesAutomatically;
-(void)cancelLingeringRangingRequest;
-(void)cancelLocationRequest;
-(void)cancelRangingRequest;
-(void)dealloc;
-(void)invalidate;
-(void)performCourtesyPromptIfNeeded;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg0 ;
-(void)setPausesLocationUpdatesAutomatically:(int)arg0 ;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg0 ;
-(void)stopUpdatingLocationAutoPaused;


@end


#endif