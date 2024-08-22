// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDRACEROUTELOCATIONSERIESENTITY_H
#define HDRACEROUTELOCATIONSERIESENTITY_H

@class NSString;
@protocol HDHealthEntitySchema;


#import "HDSQLiteSchemaEntity.h"

@interface HDRaceRouteLocationSeriesEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deleteSeriesDataWithIdentifier:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)enumerateRoutePointsForSeries:(NSInteger)arg0 timestampAnchor:(CGFloat)arg1 limit:(NSUInteger)arg2 transaction:(id)arg3 error:(*id)arg4 handler:(id)arg5 ;
+(BOOL)hasROWID;
+(BOOL)insertCodableRoutePoints:(id)arg0 seriesKey:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)createRoutePointsFromWorkout:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)insertCodableRoutePoints:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)primaryKeyColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif