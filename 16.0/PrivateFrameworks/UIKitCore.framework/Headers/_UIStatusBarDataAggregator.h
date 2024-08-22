// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARDATAAGGREGATOR_H
#define _UISTATUSBARDATAAGGREGATOR_H

@class NSSet, NSMutableDictionary, NSCountedSet;

#import <Foundation/Foundation.h>

#import "_UIStatusBarData.h"

@interface _UIStatusBarDataAggregator : NSObject

@property (readonly, copy, nonatomic) NSSet *coalescedEntryKeys;
@property (retain, nonatomic) NSMutableDictionary *coalescedKeys; // ivar: _coalescedKeys
@property (retain, nonatomic) NSMutableDictionary *coalescedTimers; // ivar: _coalescedTimers
@property (copy, nonatomic) Class dataClass; // ivar: _dataClass
@property (readonly, copy, nonatomic) NSSet *delayedEntryKeys;
@property (retain, nonatomic) NSCountedSet *delayedKeys; // ivar: _delayedKeys
@property (copy, nonatomic) _UIStatusBarData *overlayData; // ivar: _overlayData
@property (retain, nonatomic) NSMutableDictionary *pendingUpdates; // ivar: _pendingUpdates
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock


+(void)initialize;
-(id)_updatedDataFromData:(id)arg0 delayedKeys:(id)arg1 ;
-(id)initWithUpdateBlock:(id)arg0 ;
-(void)_coalescedUpdateForEntryKeys:(id)arg0 ;
-(void)_updateForCoalescedKeysWithData:(id)arg0 ;
-(void)_updateForDelayedKeysWithData:(id)arg0 ;
-(void)_updateForOverlayWithData:(id)arg0 ;
-(void)_updateFromPendingUpdatesForKeys:(id)arg0 block:(id)arg1 ;
-(void)beginCoalescingUpdatesForEntryKeys:(id)arg0 delay:(CGFloat)arg1 ;
-(void)beginDelayingUpdatesForEntryKeys:(id)arg0 ;
-(void)endCoalescingUpdatesForEntryKeys:(id)arg0 ;
-(void)endDelayingUpdatesForEntryKeys:(id)arg0 ;
-(void)updateWithData:(id)arg0 ;


@end


#endif