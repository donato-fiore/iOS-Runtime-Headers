// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBBPROTOTINKERACCOUNTCREDENTIALSINGESTED_H
#define PBBPROTOTINKERACCOUNTCREDENTIALSINGESTED_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface PBBProtoTinkerAccountCredentialsIngested : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int cdpStatus; // ivar: _cdpStatus
@property (retain, nonatomic) NSData *detailedError; // ivar: _detailedError
@property (retain, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (nonatomic) BOOL hasCdpStatus;
@property (readonly, nonatomic) BOOL hasDetailedError;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success; // ivar: _success


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