// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3SORTMAPFAULTINGENTRYARRAY_H
#define ML3SORTMAPFAULTINGENTRYARRAY_H

@class NSMutableArray, NSMutableDictionary;


#import "ML3DatabaseConnection.h"

@interface ML3SortMapFaultingEntryArray : NSMutableArray {
    ML3DatabaseConnection *_connection;
    NSMutableDictionary *_dirtyInserts;
}




-(NSUInteger)count;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif