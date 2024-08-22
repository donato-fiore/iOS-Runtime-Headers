// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSIRITASKAGGREGATION_H
#define BMSIRITASKAGGREGATION_H

@class BMEventBase, NSString;
@protocol BMStoreData;


#import "BMSiriTaskAggregationDimensions.h"
#import "BMSiriTaskAggregationMetadata.h"
#import "BMSiriTaskAggregationStatistics.h"

@interface BMSiriTaskAggregation : BMEventBase <BMStoreData>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BMSiriTaskAggregationDimensions *dimensions; // ivar: _dimensions
@property (nonatomic) BOOL hasAbsoluteTimestamp; // ivar: _hasAbsoluteTimestamp
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BMSiriTaskAggregationMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) BMSiriTaskAggregationStatistics *statistics; // ivar: _statistics
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithAbsoluteTimestamp:(id)arg0 metadata:(id)arg1 statistics:(id)arg2 dimensions:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif