// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESHNODESTATETRACKER_H
#define COMESHNODESTATETRACKER_H

@protocol OS_dispatch_source, COMeshNodeStateTrackerDelegate;

#import <Foundation/Foundation.h>

#import "COBallot.h"
#import "COMeshNode.h"

@interface COMeshNodeStateTracker : NSObject

@property (nonatomic) NSUInteger backoffBucket; // ivar: _backoffBucket
@property (copy, nonatomic) id *backoffResponse; // ivar: _backoffResponse
@property (retain, nonatomic) NSObject<OS_dispatch_source> *backoffTimer; // ivar: _backoffTimer
@property (weak, nonatomic) NSObject<COMeshNodeStateTrackerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger electionStage; // ivar: _electionStage
@property (copy, nonatomic) COBallot *lastBallotReceived; // ivar: _lastBallotReceived
@property (copy, nonatomic) COBallot *lastBallotSent; // ivar: _lastBallotSent
@property (nonatomic) NSUInteger lastGenerationReceived; // ivar: _lastGenerationReceived
@property (nonatomic) NSUInteger lastGenerationSent; // ivar: _lastGenerationSent
@property (nonatomic) CGFloat lastHeard; // ivar: _lastHeard
@property (readonly, nonatomic) COMeshNode *node; // ivar: _node
@property (nonatomic, getter=hasOutstandingProbe) BOOL outstandingProbe; // ivar: _outstandingProbe
@property (nonatomic, getter=hasOutstandingRequest) BOOL outstandingRequest; // ivar: _outstandingRequest
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly, nonatomic) NSUInteger totalBackedOffTime; // ivar: _totalBackedOffTime


-(id)description;
-(id)initWithNode:(id)arg0 ;
-(void)didFireBackoffTimer;
-(void)resetBackoffInformation;


@end


#endif