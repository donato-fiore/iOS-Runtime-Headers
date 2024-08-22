// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TAVISITSNAPSHOT_H
#define TAVISITSNAPSHOT_H

@class NSMutableArray, NSNumber, NSMutableDictionary, NSDate, NSMutableOrderedSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TADisplayOnCalculator.h"
#import "TALocationLite.h"
#import "TACLVisit.h"

@interface TAVisitSnapshot : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger displayEventBufferSizeCap; // ivar: _displayEventBufferSizeCap
@property (retain, nonatomic) NSMutableArray *displayEvents; // ivar: _displayEvents
@property (retain, nonatomic) TADisplayOnCalculator *displayOnCalculator; // ivar: _displayOnCalculator
@property (retain, nonatomic) NSNumber *distanceToClosestLoi; // ivar: _distanceToClosestLoi
@property (readonly, nonatomic) NSMutableDictionary *earliestUtAdvertisements; // ivar: _earliestUtAdvertisements
@property (retain, nonatomic) NSDate *entryDurationOfConsiderationClosed; // ivar: _entryDurationOfConsiderationClosed
@property (retain, nonatomic) NSDate *exitIntervalBeginning; // ivar: _exitIntervalBeginning
@property (readonly, nonatomic) BOOL isClosed; // ivar: _isClosed
@property (readonly, copy, nonatomic) TALocationLite *latestLocation; // ivar: _latestLocation
@property (readonly, nonatomic) BOOL latestLocationInsideVisit; // ivar: _latestLocationInsideVisit
@property (readonly, nonatomic) NSMutableDictionary *latestUtAdvertisements; // ivar: _latestUtAdvertisements
@property (readonly, nonatomic) NSUInteger loiType; // ivar: _loiType
@property (retain, nonatomic) NSMutableOrderedSet *lruUtAdvertisementCache; // ivar: _lruUtAdvertisementCache
@property (nonatomic) NSUInteger maxNSigmaBetweenLastLocationAndVisit; // ivar: _maxNSigmaBetweenLastLocationAndVisit
@property (readonly, nonatomic) TACLVisit *representativeVisit; // ivar: _representativeVisit
@property (nonatomic) NSUInteger uniqueUTBufferSizeCap; // ivar: _uniqueUTBufferSizeCap


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setDepartureVisit:(id)arg0 ;
-(CGFloat)getDisplayOnTimeUntilEndDate:(id)arg0 ;
-(CGFloat)getDurationOfVisitEntryConsideredWithDisplayOnBudget:(CGFloat)arg0 ;
-(CGFloat)getDurationOfVisitExitConsideredWithDisplayOnBudget:(CGFloat)arg0 ;
-(NSUInteger)evaluateSnapshotQualityWithMinDwellDuration:(CGFloat)arg0 minDisplayOnDuration:(CGFloat)arg1 ;
-(id)getArrivalDelay;
-(id)getDepartureDelay;
-(id)getEntryAdvertisementsWithDisplayOnBudget:(CGFloat)arg0 ;
-(id)getEntryIntervalEvaluatedUntil;
-(id)getExitAdvertisementsWithDisplayOnBudget:(CGFloat)arg0 ;
-(id)getLocationRepresentingSnapshot;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTACLVisit:(id)arg0 uniqueUTBufferCap:(NSUInteger)arg1 displayEventBufferSizeCap:(NSUInteger)arg2 maxNSigmaBetweenLastLocationAndVisit:(NSUInteger)arg3 ;
-(id)mostRecentAdvertisementDate;
-(void)addScanState:(id)arg0 ;
-(void)addSystemState:(id)arg0 ;
-(void)addUTAdvertisement:(id)arg0 ;
-(void)calculateExitIntervalWithDisplayOnBudget:(CGFloat)arg0 ;
-(void)closeSnapshotCleanup;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pruneDisplayEvents;
-(void)updateEntryIntervalWithDisplayOnBudget:(CGFloat)arg0 evaluateToEnd:(BOOL)arg1 ;
-(void)updateLatestLocation:(id)arg0 ;
-(void)updateLoiType:(id)arg0 ;


@end


#endif