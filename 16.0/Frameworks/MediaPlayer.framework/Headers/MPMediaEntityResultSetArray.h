// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIAENTITYRESULTSETARRAY_H
#define MPMEDIAENTITYRESULTSETARRAY_H

@class NSMutableArray;
@protocol NSCopying, OS_dispatch_queue, MPMediaLibraryResultSet;


#import "MPMediaArray.h"
#import "MPMediaLibrary.h"
#import "MPMediaQuerySectionInfo.h"
#import "MPMediaQueryCriteria.h"

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying>

 {
    Class _entityClass;
    MPMediaLibrary *_library;
    MPMediaQuerySectionInfo *_sectionInfo;
    NSMutableArray *_entities;
    NSObject<OS_dispatch_queue> *_entitiesQueue;
    MPMediaQueryCriteria *_queryCriteria;
    NSInteger _revision;
}


@property (readonly, nonatomic) NSObject<MPMediaLibraryResultSet> *resultSet; // ivar: _resultSet


-(BOOL)isQueryResultSetInvalidated;
-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResultSet:(id)arg0 queryCriteria:(id)arg1 entityType:(NSInteger)arg2 library:(id)arg3 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)sectionInfo;


@end


#endif