// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCDPCODESERVICEREQUESTASSETAUTHORIZEGETREQUESTOPTIONS_H
#define CKCDPCODESERVICEREQUESTASSETAUTHORIZEGETREQUESTOPTIONS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger contentRequestAuthorizeGetOptions; // ivar: _contentRequestAuthorizeGetOptions
@property (retain, nonatomic) NSMutableArray *contentRequestHeaders; // ivar: _contentRequestHeaders
@property (nonatomic) BOOL hasContentRequestAuthorizeGetOptions;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentRequestHeadersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContentRequestHeaders:(id)arg0 ;
-(void)clearContentRequestHeaders;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif