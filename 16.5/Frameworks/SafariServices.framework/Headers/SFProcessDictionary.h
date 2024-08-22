// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPROCESSDICTIONARY_H
#define SFPROCESSDICTIONARY_H

@class NSMutableSet, RBSProcessMonitor, NSMutableArray, NSCountedSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SFProcessDictionary : NSObject {
    NSMutableSet *_pidsPendingTermination;
    RBSProcessMonitor *_processMonitor;
    NSMutableArray *_recentlyReferencedPIDs;
    NSCountedSet *_references;
    NSMutableDictionary *_values;
}


@property (readonly, nonatomic) NSUInteger cacheCapacity; // ivar: _cacheCapacity


-(id)incrementReferenceForPID:(int)arg0 additionalKey:(id)arg1 valueCreationBlock:(id)arg2 ;
-(id)incrementReferenceForPID:(int)arg0 valueCreationBlock:(id)arg1 ;
-(id)init;
-(id)initWithCacheCapacity:(NSUInteger)arg0 ;
-(void)_handleProcessStateUpdate:(int)arg0 state:(unsigned char)arg1 ;
-(void)_removeUnreferencedObjectsIfNeeded;
-(void)_removeValuesForPID:(id)arg0 ;
-(void)_updateInterestedApplications;
-(void)dealloc;
-(void)decrementReferenceForPID:(int)arg0 ;


@end


#endif