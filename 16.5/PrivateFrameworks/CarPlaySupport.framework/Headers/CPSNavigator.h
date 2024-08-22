// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSNAVIGATOR_H
#define CPSNAVIGATOR_H

@class CARSession, NSString, NSHashTable, CARNavigationOwnershipManager, CPTrip;
@protocol CARNavigationOwnershipManagerDelegate, CPNavigationSessionManaging, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface CPSNavigator : NSObject <CARNavigationOwnershipManagerDelegate, CPNavigationSessionManaging, BSInvalidatable>



@property (nonatomic) BOOL appSupportsInstrumentCluster; // ivar: _appSupportsInstrumentCluster
@property (nonatomic, getter=isCompleted) BOOL completed; // ivar: _completed
@property (retain, nonatomic) CARSession *currentSession; // ivar: _currentSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSHashTable *displayDelegates; // ivar: _displayDelegates
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CARNavigationOwnershipManagerDelegate> *navigationOwnershipDelegate; // ivar: _navigationOwnershipDelegate
@property (retain, nonatomic) CARNavigationOwnershipManager *navigationOwnershipManager; // ivar: _navigationOwnershipManager
@property (readonly) Class superclass;
@property (retain, nonatomic) CPTrip *trip; // ivar: _trip


-(id)initWithIdentifier:(id)arg0 currentSession:(id)arg1 ;
-(void)addDisplayDelegate:(id)arg0 ;
-(void)cancelTrip;
-(void)dealloc;
-(void)finishTrip;
-(void)invalidate;
-(void)navigationOwnershipChangedToOwner:(NSUInteger)arg0 ;
-(void)pauseTripForReason:(NSUInteger)arg0 description:(id)arg1 turnCardColor:(id)arg2 ;
-(void)removeDisplayDelegate:(id)arg0 ;
-(void)showManeuvers:(id)arg0 usingDisplayStyles:(id)arg1 ;
-(void)updateTravelEstimates:(id)arg0 forManeuver:(id)arg1 ;
-(void)updateTripTravelEstimates:(id)arg0 ;


@end


#endif