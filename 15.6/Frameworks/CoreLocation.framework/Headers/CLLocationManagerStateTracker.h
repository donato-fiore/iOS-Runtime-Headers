// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLLOCATIONMANAGERSTATETRACKER_H
#define CLLOCATIONMANAGERSTATETRACKER_H



#import "CLStateTracker.h"

@interface CLLocationManagerStateTracker : CLStateTracker {
    _CLLocationManagerStateTrackerState _state;
    *void _identifier;
    BOOL _inTransaction;
}


@property (nonatomic) NSInteger activityType;
@property (nonatomic) BOOL allowsAlteredAccessoryLocations;
@property (nonatomic) BOOL allowsBackgroundLocationUpdates;
@property (nonatomic) BOOL allowsLocationPrompts;
@property (nonatomic) BOOL allowsMapCorrection;
@property (nonatomic) BOOL batchingLocation;
@property (nonatomic) BOOL courtesyPromptNeeded;
@property (nonatomic) CGFloat desiredAccuracy;
@property (nonatomic) CGFloat distanceFilter;
@property (nonatomic) BOOL dynamicAccuracyReductionEnabled;
@property (nonatomic) BOOL fusionInfoEnabled;
@property (nonatomic) BOOL groundAltitudeEnabled;
@property (nonatomic) CGFloat headingFilter;
@property (nonatomic) BOOL isAuthorizedForWidgetUpdates;
@property (nonatomic) BOOL limitsPrecision;
@property (nonatomic) BOOL matchInfoEnabled;
@property (nonatomic) BOOL paused;
@property int pausesLocationUpdatesAutomatically;
@property (nonatomic) int previousAuthorizationStatus;
@property (nonatomic) BOOL previousAuthorizationStatusValid;
@property (nonatomic) BOOL requestingLocation;
@property (nonatomic) BOOL requestingRanging;
@property (nonatomic) BOOL showsBackgroundLocationIndicator;
@property (nonatomic) BOOL updatingHeading;
@property (nonatomic) BOOL updatingLocation;
@property (nonatomic) BOOL updatingRanging;
@property (nonatomic) BOOL updatingVehicleHeading;
@property (nonatomic) BOOL updatingVehicleSpeed;


+(NSUInteger)trackerStateSize;
+(char *)trackerStateTypeName;
-(*void)identifier;
-(BOOL)dumpState:(*void)arg0 withSize:(NSUInteger)arg1 hints:(struct os_state_hints_s *)arg2 ;
-(id)initInSilo:(id)arg0 withIdentifier:(*void)arg1 ;
-(id)initInSilo:(id)arg0 withIdentifier:(*void)arg1 state:(id)arg2 ;
-(id)initWithQueue:(id)arg0 identifier:(*void)arg1 ;
-(id)initWithQueue:(id)arg0 identifier:(*void)arg1 state:(id)arg2 ;
-(void)dealloc;
-(void)updateState:(id)arg0 ;


@end


#endif