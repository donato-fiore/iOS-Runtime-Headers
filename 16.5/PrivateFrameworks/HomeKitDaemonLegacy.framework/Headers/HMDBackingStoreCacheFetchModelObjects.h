// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKINGSTORECACHEFETCHMODELOBJECTS_H
#define HMDBACKINGSTORECACHEFETCHMODELOBJECTS_H

@class NSArray, NSUUID, NSString;


#import "HMDBackingStoreOperation.h"
#import "HMDBackingStoreCacheGroup.h"

@interface HMDBackingStoreCacheFetchModelObjects : HMDBackingStoreOperation

@property (copy, nonatomic) id *fetchResult; // ivar: _fetchResult
@property (retain, nonatomic) HMDBackingStoreCacheGroup *group; // ivar: _group
@property (retain, nonatomic) NSArray *names; // ivar: _names
@property (retain, nonatomic) NSUUID *parent; // ivar: _parent
@property (retain, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) NSArray *uuids; // ivar: _uuids


-(id)initWithGroup:(id)arg0 names:(id)arg1 fetchResult:(id)arg2 ;
-(id)initWithGroup:(id)arg0 parent:(id)arg1 type:(id)arg2 fetchResult:(id)arg3 ;
-(id)initWithGroup:(id)arg0 uuids:(id)arg1 fetchResult:(id)arg2 ;
-(id)initWithNames:(id)arg0 fetchResult:(id)arg1 ;
-(id)initWithParent:(id)arg0 type:(id)arg1 fetchResult:(id)arg2 ;
-(id)initWithUUIDs:(id)arg0 fetchResult:(id)arg1 ;
-(id)mainReturningError;


@end


#endif