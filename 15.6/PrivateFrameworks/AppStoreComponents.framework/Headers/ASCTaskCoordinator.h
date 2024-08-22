// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCTASKCOORDINATOR_H
#define ASCTASKCOORDINATOR_H

@class NSRecursiveLock, NSCache, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ASCTaskCoordinator : NSObject

@property (readonly, nonatomic) NSRecursiveLock *consistencyLock; // ivar: _consistencyLock
@property (readonly, nonatomic) NSCache *loadedResults; // ivar: _loadedResults
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSMutableDictionary *pendingResults; // ivar: _pendingResults


+(id)log;
-(BOOL)hasTaskForKey:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)taskForKey:(id)arg0 ;
-(id)taskForKey:(id)arg0 withCreatorBlock:(id)arg1 ;
-(void)removeAllFinishedTasks;
-(void)removeTaskForKey:(id)arg0 ;
-(void)taskForKey:(id)arg0 didCompleteWithResult:(id)arg1 ;
-(void)taskForKey:(id)arg0 didFailWithError:(id)arg1 ;
-(void)withLock:(id)arg0 ;


@end


#endif