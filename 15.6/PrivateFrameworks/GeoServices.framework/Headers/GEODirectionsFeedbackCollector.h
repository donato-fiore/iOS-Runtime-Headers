// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEODIRECTIONSFEEDBACKCOLLECTOR_H
#define GEODIRECTIONSFEEDBACKCOLLECTOR_H

@class NSMutableArray, NSNumber, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GEOLatLng.h"
#import "GEODirectionsFeedback.h"
#import "GEODirectionsFeedbackLogMessage.h"

@interface GEODirectionsFeedbackCollector : NSObject {
    CGFloat _currentDirectionsModeStartTime;
    NSMutableArray *_navigationModes;
    CGFloat _originalExpectedTime;
    GEOLatLng *_tripOrigin;
    BOOL _wasEverConnectedToCarplay;
    BOOL _hasEnteredPreArrivalMode;
    NSNumber *_isVLFImprovementUsed;
    NSNumber *_arWalkingUsedInRoutePlanning;
    NSNumber *_arWalkingUsedInNavigation;
    BOOL _chargingStopAdded;
    BOOL _isCoarseLocationUsed;
    int _voiceGuidanceLevel;
    int _transportType;
    NSNumber *_isHandsFreeProfileUsed;
}


@property (nonatomic) BOOL batteryDied; // ivar: _batteryDied
@property (retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback; // ivar: _currentDirectionsFeedback
@property (retain, nonatomic) GEODirectionsFeedbackLogMessage *currentFeedbackLogMessage; // ivar: _currentFeedbackLogMessage
@property (retain, nonatomic) NSString *evChargingModel; // ivar: _evChargingModel
@property (retain, nonatomic) NSString *evConsumptionModel; // ivar: _evConsumptionModel
@property (nonatomic) BOOL isBadEvExperience; // ivar: _isBadEvExperience
@property (nonatomic) BOOL isEVRoute; // ivar: _isEVRoute
@property (retain, nonatomic) NSNumber *stateOfChargeAtDestActual; // ivar: _stateOfChargeAtDestActual
@property (retain, nonatomic) NSNumber *stateOfChargeAtDestPredicted; // ivar: _stateOfChargeAtDestPredicted
@property (retain, nonatomic) NSNumber *stateOfChargeAtOrigin; // ivar: _stateOfChargeAtOrigin
@property (retain, nonatomic) NSArray *waypoints; // ivar: _waypoints


-(id)description;
-(id)init;
-(void)_updateFeedbackSessionWithResponseID:(id)arg0 ;
-(void)addAlightNotificationFeedback:(id)arg0 ;
-(void)addGuidanceEventFeedback:(id)arg0 ;
-(void)addRouteID:(id)arg0 routeIndex:(unsigned int)arg1 stepID:(unsigned int)arg2 completeStep:(BOOL)arg3 ;
-(void)addStepFeedback:(id)arg0 ;
-(void)addTrafficRerouteFeedback:(id)arg0 ;
-(void)changeNavigationType:(int)arg0 ;
-(void)dealloc;
-(void)endFeedbackSessionWithTracePath:(id)arg0 ;
-(void)reset;
-(void)setARWalkingUsedInNavigation:(BOOL)arg0 ;
-(void)setARWalkingUsedInRoutePlanning:(BOOL)arg0 ;
-(void)setAudioFeedback:(struct GEONavigationAudioFeedback *)arg0 ;
-(void)setChargingStopAdded:(BOOL)arg0 ;
-(void)setFinalLocation:(id)arg0 asArrival:(BOOL)arg1 ;
-(void)setHasEnteredPreArrivalMode:(BOOL)arg0 ;
-(void)setIsCoarseLocationUsed:(BOOL)arg0 ;
-(void)setIsHandsFreeProfileUsed:(BOOL)arg0 ;
-(void)setIsVLFImprovementUsed:(BOOL)arg0 ;
-(void)setModalities:(id)arg0 ;
-(void)setOriginalExpectedTime:(CGFloat)arg0 ;
-(void)setTransportType:(int)arg0 ;
-(void)setTripOrigin:(id)arg0 ;
-(void)setVoiceGuidanceLevel:(int)arg0 ;
-(void)setWasEverConnectedToCarplay:(BOOL)arg0 ;
-(void)setupFeedbackSessionWithResponseID:(id)arg0 ;
-(void)startFeedbackSessionForResponseID:(id)arg0 withNavigationType:(int)arg1 ;


@end


#endif