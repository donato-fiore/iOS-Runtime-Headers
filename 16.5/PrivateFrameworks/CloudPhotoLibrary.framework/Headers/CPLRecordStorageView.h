// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLRECORDSTORAGEVIEW_H
#define CPLRECORDSTORAGEVIEW_H


#import <Foundation/Foundation.h>


@interface CPLRecordStorageView : NSObject



-(BOOL)hasRecordWithScopedIdentifier:(id)arg0 ;
-(NSUInteger)countOfRecordsWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)compactedBatchFromExpandedBatch:(id)arg0 ;
-(id)localChangeBatchFromCloudBatch:(id)arg0 usingMapping:(id)arg1 withError:(*id)arg2 ;
-(id)recordViewWithScopedIdentifier:(id)arg0 ;
-(id)recordViewsWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg0 ;
-(id)resourceOfType:(NSUInteger)arg0 forRecordWithScopedIdentifier:(id)arg1 record:(*id)arg2 error:(*id)arg3 ;
-(id)resourceOfType:(NSUInteger)arg0 forRecordWithScopedIdentifier:(id)arg1 recordClass:(*Class)arg2 error:(*id)arg3 ;


@end


#endif