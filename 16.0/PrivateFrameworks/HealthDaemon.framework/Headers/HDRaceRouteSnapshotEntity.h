// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDRACEROUTESNAPSHOTENTITY_H
#define HDRACEROUTESNAPSHOTENTITY_H



#import "HDHealthEntity.h"

@interface HDRaceRouteSnapshotEntity : HDHealthEntity



+(BOOL)pruneUnreachableDataWithTransaction:(id)arg0 error:(*id)arg1 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)insertSnapshotData:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)deleteDataWithTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateSnapshotData:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)snapshotDataWithTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif