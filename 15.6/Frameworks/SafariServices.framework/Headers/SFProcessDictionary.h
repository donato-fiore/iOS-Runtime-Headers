// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPROCESSDICTIONARY_H
#define SFPROCESSDICTIONARY_H

@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSCountedSet, BKSApplicationStateMonitor;

#import <Foundation/Foundation.h>


@interface SFProcessDictionary : NSObject {
    NSMutableDictionary *_pidToBundleIdentifierMap;
    NSMutableSet *_pidsPendingTermination;
    NSMutableArray *_recentlyReferencedPIDs;
    NSCountedSet *_references;
    BKSApplicationStateMonitor *_stateMonitor;
    NSMutableDictionary *_values;
}


@property (readonly, nonatomic) NSUInteger cacheCapacity; // ivar: _cacheCapacity


-(id)incrementReferenceForPID:(int)arg0 bundleIdentifier:(id)arg1 valueCreationBlock:(id)arg2 ;
-(id)init;
-(id)initWithCacheCapacity:(NSUInteger)arg0 ;
-(void)_handleApplicationStateUpdate:(id)arg0 ;
-(void)_handleProcessTermination:(int)arg0 ;
-(void)_removeUnreferencedObjectsIfNeeded;
-(void)_removeValueForPID:(id)arg0 ;
-(void)_updateInterestedApplications;
-(void)dealloc;
-(void)decrementReferenceForPID:(int)arg0 ;


@end


#endif