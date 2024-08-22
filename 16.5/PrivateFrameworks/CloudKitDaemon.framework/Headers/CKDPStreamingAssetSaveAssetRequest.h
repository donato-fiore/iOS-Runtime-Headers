// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPSTREAMINGASSETSAVEASSETREQUEST_H
#define CKDPSTREAMINGASSETSAVEASSETREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface CKDPStreamingAssetSaveAssetRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasRequestedSize;
@property (readonly, nonatomic) BOOL hasUploadReceipt;
@property (nonatomic) BOOL hasUploadedSize;
@property (nonatomic) NSInteger requestedSize; // ivar: _requestedSize
@property (retain, nonatomic) NSString *uploadReceipt; // ivar: _uploadReceipt
@property (nonatomic) NSInteger uploadedSize; // ivar: _uploadedSize


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