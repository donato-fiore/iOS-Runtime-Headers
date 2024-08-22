// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSERIESBUILDERENTITY_H
#define HDSERIESBUILDERENTITY_H



#import "HDHealthEntity.h"

@interface HDSeriesBuilderEntity : HDHealthEntity



+(BOOL)discardBuilderWithIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(Class)seriesEntityClass;
+(NSInteger)protectionClass;
+(id)createPersistentEntityForBuilderIdentifier:(id)arg0 seriesType:(id)arg1 state:(NSInteger)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(id)databaseTable;
+(id)freezeSeriesWithIdentifier:(id)arg0 metadata:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)persistentEntityForBuilderIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)insertMetadata:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setBuilderState:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(NSInteger)stateWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)metadataWithTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif