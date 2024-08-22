// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKSYNCRESPONSEDATA_H
#define SBKSYNCRESPONSEDATA_H

@class NSArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "SBKSyncTransaction.h"

@interface SBKSyncResponseData : NSObject

@property (readonly, nonatomic) NSArray *conflictedKeys; // ivar: _conflictedKeys
@property (readonly, nonatomic) NSArray *deletedKeys; // ivar: _deletedKeys
@property (retain, nonatomic) NSMutableDictionary *responseOpEntiesByKey; // ivar: _responseOpEntiesByKey
@property (readonly, nonatomic) NSArray *successfullyDeletedKeys; // ivar: _successfullyDeletedKeys
@property (readonly, nonatomic) NSArray *successfullyUpdatedKeys; // ivar: _successfullyUpdatedKeys
@property (readonly, copy, nonatomic) NSString *syncAnchor; // ivar: _syncAnchor
@property (readonly, nonatomic) SBKSyncTransaction *transaction; // ivar: _transaction
@property (readonly, nonatomic) NSArray *updatedKeys; // ivar: _updatedKeys


+(id)deserializedResponseBodyWithTransaction:(id)arg0 responseDictionary:(id)arg1 response:(id)arg2 ;
-(id)description;
-(id)initWithTransaction:(id)arg0 responseDictionary:(id)arg1 response:(id)arg2 ;
-(id)payloadDataForUpdateResponseKey:(id)arg0 ;
-(void)_deserializeResponseDictionary:(id)arg0 response:(id)arg1 ;


@end


#endif