// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACACTIVITYLIST_H
#define DACACTIVITYLIST_H

@class NSMutableArray, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DACActivityList : NSObject <NSSecureCoding, NSCopying>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSMutableArray *activeActivities; // ivar: _activeActivities
@property (readonly, nonatomic) NSDate *lastModified; // ivar: _lastModified


+(BOOL)supportsSecureCoding;
-(BOOL)_removeActivity:(id)arg0 origin:(id)arg1 ;
-(BOOL)addActivity:(id)arg0 requester:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringLastModified:(id)arg0 ;
-(BOOL)isEqualToActivityList:(id)arg0 ;
-(BOOL)removeActivity:(id)arg0 requester:(id)arg1 ;
-(NSUInteger)_indexOfActivity:(id)arg0 ;
-(NSUInteger)_insertionIndex:(id)arg0 ;
-(NSUInteger)_stateOfActivity:(id)arg0 ;
-(NSUInteger)_stateOfActivityAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)activityCount;
-(NSUInteger)hash;
-(NSUInteger)stateOfActivity:(id)arg0 ;
-(id)_entryOfActivity:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)listWithMerge:(id)arg0 ;
-(void)_activityDeltaFromList:(id)arg0 completion:(id)arg1 ;
-(void)_addActivityEntry:(id)arg0 ;
-(void)_reconcileReasons;
-(void)_updateModificationDate;
-(void)_updateReason:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_withLock:(id)arg0 ;
-(void)changesFromList:(id)arg0 info:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateList:(id)arg0 ;
-(void)splitLocalOnly:(id)arg0 ;


@end


#endif