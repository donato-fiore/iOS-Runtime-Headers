// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCOUNTEDSET_H
#define NSCOUNTEDSET_H

@class NSMutableSet;



@interface NSCountedSet : NSMutableSet {
    id *_table;
}




+(BOOL)supportsSecureCoding;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)countForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithSet:(id)arg0 ;
-(id)initWithSet:(id)arg0 copyItems:(BOOL)arg1 ;
-(id)member:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;


@end


#endif