// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLELOCATIONSERIES_H
#define HDCODABLELOCATIONSERIES_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol HDDecoding, NSCopying;


#import "HDCodableSample.h"

@interface HDCodableLocationSeries : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *continuationUUID; // ivar: _continuationUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL final; // ivar: _final
@property (nonatomic) BOOL frozen; // ivar: _frozen
@property (readonly, nonatomic) BOOL hasContinuationUUID;
@property (nonatomic) BOOL hasFinal;
@property (nonatomic) BOOL hasFrozen;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *locationDatas; // ivar: _locationDatas
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (readonly) Class superclass;


+(Class)locationDataType;
-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)locationDataAtIndex:(NSUInteger)arg0 ;
-(void)addLocationData:(id)arg0 ;
-(void)clearLocationDatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif