// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSIRITASKAGGREGATIONMETADATA_H
#define BMSIRITASKAGGREGATIONMETADATA_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMSiriTaskAggregationMetadata : BMEventBase <BMStoreData>



@property (readonly, nonatomic) CGFloat aggregationWindowEndTimestamp; // ivar: _aggregationWindowEndTimestamp
@property (readonly, nonatomic) CGFloat aggregationWindowStartTimestamp; // ivar: _aggregationWindowStartTimestamp
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAggregationWindowEndTimestamp; // ivar: _hasAggregationWindowEndTimestamp
@property (nonatomic) BOOL hasAggregationWindowStartTimestamp; // ivar: _hasAggregationWindowStartTimestamp
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int schedule; // ivar: _schedule
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithSchedule:(int)arg0 aggregationWindowStartTimestamp:(id)arg1 aggregationWindowEndTimestamp:(id)arg2 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif