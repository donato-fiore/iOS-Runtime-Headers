// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WPZONETRACKER_H
#define WPZONETRACKER_H

@protocol WPZoneTrackerDelegate;


#import "WPClient.h"

@interface WPZoneTracker : WPClient

@property (weak, nonatomic) NSObject<WPZoneTrackerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL wantEntry; // ivar: _wantEntry
@property (nonatomic) BOOL wantExit; // ivar: _wantExit


-(id)clientAsString;
-(id)description;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)enteredZone:(id)arg0 manufacturerData:(id)arg1 ;
-(void)exitedZone:(id)arg0 ;
-(void)failedToRegisterZones:(id)arg0 withError:(id)arg1 ;
-(void)fetchedCurrentlyTrackedZones:(id)arg0 ;
-(void)getCurrentTrackedZones;
-(void)invalidate;
-(void)registerForZoneChangesMatching:(id)arg0 ;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)unregisterAllZoneChanges;
-(void)unregisterForZoneChanges:(id)arg0 ;


@end


#endif