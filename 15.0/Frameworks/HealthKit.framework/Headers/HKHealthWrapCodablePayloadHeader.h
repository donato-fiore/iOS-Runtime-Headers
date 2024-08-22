// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEALTHWRAPCODABLEPAYLOADHEADER_H
#define HKHEALTHWRAPCODABLEPAYLOADHEADER_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface HKHealthWrapCodablePayloadHeader : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *applicationData; // ivar: _applicationData
@property (retain, nonatomic) NSString *channel; // ivar: _channel
@property (nonatomic) NSInteger endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL hasApplicationData;
@property (readonly, nonatomic) BOOL hasChannel;
@property (nonatomic) BOOL hasEndDate;
@property (readonly, nonatomic) BOOL hasPayloadIdentifier;
@property (readonly, nonatomic) BOOL hasPayloadType;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasSubjectUUID;
@property (retain, nonatomic) NSMutableArray *keyValuePairs; // ivar: _keyValuePairs
@property (retain, nonatomic) NSString *payloadIdentifier; // ivar: _payloadIdentifier
@property (retain, nonatomic) NSString *payloadType; // ivar: _payloadType
@property (nonatomic) NSInteger startDate; // ivar: _startDate
@property (retain, nonatomic) NSData *subjectUUID; // ivar: _subjectUUID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keyValuePairsAtIndex:(NSUInteger)arg0 ;
-(void)addKeyValuePairs:(id)arg0 ;
-(void)clearKeyValuePairs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif