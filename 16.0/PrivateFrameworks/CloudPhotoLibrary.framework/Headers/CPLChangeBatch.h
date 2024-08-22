// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLCHANGEBATCH_H
#define CPLCHANGEBATCH_H

@class NSMutableArray, NSMutableDictionary, NSArray;
@protocol NSSecureCoding, NSCopying, NSFastEnumeration, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLChangeBatch : NSObject <NSSecureCoding, NSCopying, NSFastEnumeration, NSCopying>

 {
    NSMutableArray *_records;
    NSMutableDictionary *_additionalRecords;
    NSMutableDictionary *_localResources;
    BOOL _calculateEstimatedBatchSize;
    NSUInteger _estimatedBatchSize;
}


@property (readonly, nonatomic) NSArray *records;


+(BOOL)supportsSecureCoding;
-(BOOL)hasChangeWithIdentifier:(id)arg0 ;
-(BOOL)hasChangeWithScopedIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sortBatchWithError:(*id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)estimatedBatchSize;
-(id)_additionalRecords;
-(id)_descriptionRedacted:(BOOL)arg0 ;
-(id)_initWithRecords:(id)arg0 ;
-(id)additionalRecordWithIdentifier:(id)arg0 ;
-(id)additionalRecordWithScopedIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cplFullDescription;
-(id)description;
-(id)filterScopeChangeFromBatch;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecords:(id)arg0 ;
-(id)localResourceOfType:(NSUInteger)arg0 forItemWithCloudScopedIdentifier:(id)arg1 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)recordWithScopedIdentifier:(id)arg0 ;
-(id)redactedDescription;
-(id)summaryDescription;
-(void)_addAdditionalRecord:(id)arg0 ;
-(void)_addChange:(id)arg0 resultBatch:(id)arg1 changesPerScopedIdentifier:(id)arg2 changesPerClass:(id)arg3 ;
-(void)_setAdditionalRecords:(id)arg0 ;
-(void)addRecord:(id)arg0 ;
-(void)addRecordsFromBatch:(id)arg0 ;
-(void)appendLocalResources:(id)arg0 forItemWithCloudScopedIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)extractInitialDownloadBatch:(*id)arg0 shouldConsiderRecordFilter:(id)arg1 ;
-(void)removeRecordWithIdentifier:(id)arg0 ;
-(void)removeRecordWithScopedIdentifier:(id)arg0 ;


@end


#endif