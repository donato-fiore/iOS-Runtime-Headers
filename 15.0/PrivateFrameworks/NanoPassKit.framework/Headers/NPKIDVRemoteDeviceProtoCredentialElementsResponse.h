// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKIDVREMOTEDEVICEPROTOCREDENTIALELEMENTSRESPONSE_H
#define NPKIDVREMOTEDEVICEPROTOCREDENTIALELEMENTSRESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKIDVRemoteDeviceProtoCredentialElementsResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *elementsData; // ivar: _elementsData
@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasElementsData;
@property (readonly, nonatomic) BOOL hasErrorData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif