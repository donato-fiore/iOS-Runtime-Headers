// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKINGSTORECACHEFETCHRECORDS_H
#define HMDBACKINGSTORECACHEFETCHRECORDS_H

@class NSArray;


#import "HMDBackingStoreOperation.h"
#import "HMDBackingStoreCacheGroup.h"

@interface HMDBackingStoreCacheFetchRecords : HMDBackingStoreOperation

@property (copy, nonatomic) id *fetchResult; // ivar: _fetchResult
@property (retain, nonatomic) HMDBackingStoreCacheGroup *group; // ivar: _group
@property (retain, nonatomic) NSArray *parentUuids; // ivar: _parentUuids
@property (retain, nonatomic) NSArray *recordNames; // ivar: _recordNames
@property BOOL recursive; // ivar: _recursive
@property (retain, nonatomic) NSArray *uuids; // ivar: _uuids


-(id)initWithGroup:(id)arg0 parentUuids:(id)arg1 fetchResult:(id)arg2 ;
-(id)initWithGroup:(id)arg0 records:(id)arg1 fetchResult:(id)arg2 ;
-(id)initWithGroup:(id)arg0 uuids:(id)arg1 fetchResult:(id)arg2 ;
-(id)mainReturningError;


@end


#endif