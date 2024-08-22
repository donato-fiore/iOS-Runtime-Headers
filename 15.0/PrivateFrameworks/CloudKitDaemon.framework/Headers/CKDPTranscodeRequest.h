// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPTRANSCODEREQUEST_H
#define CKDPTRANSCODEREQUEST_H

@class PBRequest, NSData, CKCodeRecordTransport;
@protocol NSCopying;



@interface CKDPTranscodeRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *constructedAssetDownloadParameters; // ivar: _constructedAssetDownloadParameters
@property (readonly, nonatomic) BOOL hasConstructedAssetDownloadParameters;
@property (readonly, nonatomic) BOOL hasRecord;
@property (retain, nonatomic) CKCodeRecordTransport *record; // ivar: _record


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