// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESHNODESTATETRACKERSET_H
#define COMESHNODESTATETRACKERSET_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface COMeshNodeStateTrackerSet : NSObject {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSDictionary *trackers; // ivar: _trackers


-(id)description;
-(id)init;
-(id)nodeStateTrackerForNode:(id)arg0 ;
-(id)nodeStateTrackersWithStatus:(NSInteger)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)addNodeStateTracker:(id)arg0 ;
-(void)enumerateNodeStateTrackersOfStatus:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNodeStateTrackersUsingBlock:(id)arg0 ;
-(void)removeAllNodeStateTrackers;
-(void)removeNodeStateTrackerForNode:(id)arg0 ;
-(void)setNodeDormant:(id)arg0 withState:(NSUInteger)arg1 error:(id)arg2 ;


@end


#endif