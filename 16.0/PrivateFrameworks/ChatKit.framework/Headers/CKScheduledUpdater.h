// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSCHEDULEDUPDATER_H
#define CKSCHEDULEDUPDATER_H

@class NSCountedSet;


#import "CKManualUpdater.h"

@interface CKScheduledUpdater : CKManualUpdater

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys; // ivar: _holdingUpdatesKeys
@property (nonatomic) BOOL updateSynchronouslyIfPossible; // ivar: _updateSynchronouslyIfPossible


-(BOOL)isHoldingUpdates;
-(BOOL)isHoldingUpdatesForKey:(id)arg0 ;
-(id)description;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)beginHoldingUpdatesForKey:(id)arg0 ;
-(void)dealloc;
-(void)endHoldingAllUpdates;
-(void)endHoldingAllUpdatesForKey:(id)arg0 ;
-(void)endHoldingUpdatesForKey:(id)arg0 ;
-(void)invalidate;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;


@end


#endif