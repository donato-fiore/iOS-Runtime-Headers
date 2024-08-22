// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSCHEDULEDUPDATER_H
#define IMSCHEDULEDUPDATER_H

@class NSCountedSet;


#import "IMManualUpdater.h"

@interface IMScheduledUpdater : IMManualUpdater

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys; // ivar: _holdingUpdatesKeys


-(BOOL)isHoldingUpdates;
-(BOOL)isHoldingUpdatesForKey:(id)arg0 ;
-(id)description;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)beginHoldingUpdatesForKey:(id)arg0 ;
-(void)dealloc;
-(void)endHoldingUpdatesForAllKeys;
-(void)endHoldingUpdatesForKey:(id)arg0 ;
-(void)invalidate;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;


@end


#endif