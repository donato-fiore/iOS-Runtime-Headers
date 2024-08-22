// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPMETA_H
#define CLPMETA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CLPMeta : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasProbeId;
@property (nonatomic) BOOL hasSubmissionId;
@property (retain, nonatomic) NSString *probeId; // ivar: _probeId
@property (retain, nonatomic) NSString *productId; // ivar: _productId
@property (retain, nonatomic) NSString *softwareVersion; // ivar: _softwareVersion
@property (nonatomic) NSInteger submissionId; // ivar: _submissionId


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