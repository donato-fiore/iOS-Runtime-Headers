// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPSTREAMINGASSETRETRIEVEASSETRESPONSE_H
#define CKDPSTREAMINGASSETRETRIEVEASSETRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CKDPStreamingAssetRetrieveAssetResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *downloadURL; // ivar: _downloadURL
@property (nonatomic) NSInteger downloadURLExpirationTimeSeconds; // ivar: _downloadURLExpirationTimeSeconds
@property (readonly, nonatomic) BOOL hasDownloadURL;
@property (nonatomic) BOOL hasDownloadURLExpirationTimeSeconds;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) NSInteger size; // ivar: _size


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