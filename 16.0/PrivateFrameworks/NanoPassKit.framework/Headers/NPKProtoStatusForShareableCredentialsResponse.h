// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSTATUSFORSHAREABLECREDENTIALSRESPONSE_H
#define NPKPROTOSTATUSFORSHAREABLECREDENTIALSRESPONSE_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoStatusForShareableCredentialsResponse : PBCodable <NSCopying>



@property (nonatomic) int aggregateStatus; // ivar: _aggregateStatus
@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSMutableArray *updatedCredentialsDatas; // ivar: _updatedCredentialsDatas


+(Class)updatedCredentialsDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)aggregateStatusAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)updatedCredentialsDataAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAggregateStatus:(id)arg0 ;
-(void)addUpdatedCredentialsData:(id)arg0 ;
-(void)clearUpdatedCredentialsDatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif