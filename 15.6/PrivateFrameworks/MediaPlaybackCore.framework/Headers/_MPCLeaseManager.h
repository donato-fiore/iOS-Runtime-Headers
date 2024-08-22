// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPCLEASEMANAGER_H
#define _MPCLEASEMANAGER_H

@class NSString, NSMutableSet, NSMutableDictionary;
@protocol MPCPlaybackEngineEventObserving;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface _MPCLeaseManager : NSObject <MPCPlaybackEngineEventObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *leaseEndIgnoreReasons; // ivar: _leaseEndIgnoreReasons
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) NSMutableDictionary *prepareCompletions; // ivar: _prepareCompletions
@property (readonly) Class superclass;


-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_itemShouldPreventPlaybackDidChangeNotification:(id)arg0 ;
-(void)_updateStateForPlaybackPrevention;
-(void)beginIgnoringLeaseEndEventsForReason:(id)arg0 ;
-(void)endIgnoringLeaseEndEventsForReason:(id)arg0 ;
-(void)engine:(id)arg0 didChangeToState:(NSUInteger)arg1 ;
-(void)engine:(id)arg0 willChangeToItem:(id)arg1 fromItem:(id)arg2 ;
-(void)getHasPreparedLeaseForAccount:(id)arg0 completion:(id)arg1 ;
-(void)prepareForCurrentItemPlayback;
-(void)prepareForPlaybackWithAccount:(id)arg0 completion:(id)arg1 ;
-(void)setCanStealLeaseIfNeeded;


@end


#endif