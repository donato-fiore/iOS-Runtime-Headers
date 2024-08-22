// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MHSCHEMAMHTRAILINGPACKETLATENCYINFO_H
#define MHSCHEMAMHTRAILINGPACKETLATENCYINFO_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHTrailingPacketLatencyInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger avg; // ivar: _avg
@property (nonatomic) BOOL hasAvg;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) BOOL hasMedian;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) BOOL hasNum;
@property (nonatomic) BOOL hasP95;
@property (nonatomic) BOOL hasStd;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger max; // ivar: _max
@property (nonatomic) NSUInteger median; // ivar: _median
@property (nonatomic) NSUInteger min; // ivar: _min
@property (nonatomic) unsigned int num; // ivar: _num
@property (nonatomic) NSUInteger p95; // ivar: _p95
@property (nonatomic) NSUInteger std; // ivar: _std


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif