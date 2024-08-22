// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFMUTABLEORDEREDDICTIONARY_H
#define HMFMUTABLEORDEREDDICTIONARY_H

@class NSArray;
@protocol HMFMutableAssociativeCollection;


#import "HMFOrderedDictionary.h"

@interface HMFMutableOrderedDictionary : HMFOrderedDictionary <HMFMutableAssociativeCollection>



@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;
@property (readonly) NSUInteger count;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithObjects:(id)arg0 forKeys:(id)arg1 copyObjects:(BOOL)arg2 copyKeys:(BOOL)arg3 ;
-(id)initWithObjects:(id)arg0 orderedKeySet:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)setBySortingDictionary:(id)arg0 ;
-(void)setBySortingDictionary:(id)arg0 keyComparator:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setOrderedDictionary:(id)arg0 ;


@end


#endif