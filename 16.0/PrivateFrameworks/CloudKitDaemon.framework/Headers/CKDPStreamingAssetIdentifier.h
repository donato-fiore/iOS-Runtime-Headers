// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPSTREAMINGASSETIDENTIFIER_H
#define CKDPSTREAMINGASSETIDENTIFIER_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface CKDPStreamingAssetIdentifier : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *fileSignature; // ivar: _fileSignature
@property (readonly, nonatomic) BOOL hasFileSignature;
@property (readonly, nonatomic) BOOL hasOwner;
@property (readonly, nonatomic) BOOL hasReferenceSignature;
@property (retain, nonatomic) NSString *owner; // ivar: _owner
@property (retain, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature


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