// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOCLOUDSTORESTATUSRESPONSE_H
#define NPKPROTOCLOUDSTORESTATUSRESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoCloudStoreStatusResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *accountInfoData; // ivar: _accountInfoData
@property (nonatomic) BOOL cloudStoreIsSetup; // ivar: _cloudStoreIsSetup
@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasAccountInfoData;
@property (nonatomic) BOOL hasCloudStoreIsSetup;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending; // ivar: _pending


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