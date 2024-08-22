// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPSTREAMINGASSETSAVEASSETRESPONSE_H
#define CKDPSTREAMINGASSETSAVEASSETRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CKDPStreamingAssetSaveAssetResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasReservedSize;
@property (readonly, nonatomic) BOOL hasUploadURL;
@property (nonatomic) BOOL hasUploadURLExpirationTimeSeconds;
@property (nonatomic) NSInteger reservedSize; // ivar: _reservedSize
@property (retain, nonatomic) NSString *uploadURL; // ivar: _uploadURL
@property (nonatomic) NSInteger uploadURLExpirationTimeSeconds; // ivar: _uploadURLExpirationTimeSeconds


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