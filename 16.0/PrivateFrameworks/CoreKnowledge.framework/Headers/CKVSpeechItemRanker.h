// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSPEECHITEMRANKER_H
#define CKVSPEECHITEMRANKER_H

@class NSMutableArray;
@protocol CKVDatabaseReadOnlyAccess;

#import <Foundation/Foundation.h>


@interface CKVSpeechItemRanker : NSObject {
    NSMutableArray *_datasets;
}


@property (readonly, nonatomic) NSObject<CKVDatabaseReadOnlyAccess> *database; // ivar: _database


+(id)rankersForGroup:(id)arg0 database:(id)arg1 outOriginAppIds:(*id)arg2 error:(*id)arg3 ;
-(BOOL)addDataset:(id)arg0 ;
-(BOOL)enumerateRankedItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(BOOL)hasDatasets;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)datasets;
-(id)description;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(unsigned int)calculateItemLimit;


@end


#endif