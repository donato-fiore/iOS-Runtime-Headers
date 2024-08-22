// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKREASONTRACKINGUPDATER_H
#define CKREASONTRACKINGUPDATER_H

@class NSString, NSCountedSet;
@protocol CKReasonTrackingUpdaterDelegate;

#import <Foundation/Foundation.h>


@interface CKReasonTrackingUpdater : NSObject

@property (weak, nonatomic) NSObject<CKReasonTrackingUpdaterDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hasPendingDeferredUpdate; // ivar: _hasPendingDeferredUpdate
@property (readonly, nonatomic) BOOL isHoldingUpdates;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSCountedSet *reasonsForHoldingUpdates; // ivar: _reasonsForHoldingUpdates
@property (retain, nonatomic) NSCountedSet *reasonsForNeedsUpdates; // ivar: _reasonsForNeedsUpdates


-(BOOL)isHoldingUpdatesForReason:(id)arg0 ;
-(BOOL)needsUpdate;
-(id)description;
-(id)initWithName:(id)arg0 delegate:(id)arg1 ;
-(void)_handleReasonsForHoldingUpdatesChangeForReason:(id)arg0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)arg1 ;
-(void)_scheduleDeferredUpdateFollowingHoldForReason:(id)arg0 ;
-(void)_triggerNeedsUpdateFollowingHoldForReason:(id)arg0 ;
-(void)beginHoldingUpdatesForReason:(id)arg0 ;
-(void)endAllHoldsOnUpdatesForReason:(id)arg0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)arg1 ;
-(void)endHoldingUpdatesForReason:(id)arg0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)arg1 ;
-(void)setNeedsDeferredUpdateWithReason:(id)arg0 ;
-(void)updateImmediatelyIfNeeded;
-(void)updateImmediatelyWithReason:(id)arg0 ;


@end


#endif