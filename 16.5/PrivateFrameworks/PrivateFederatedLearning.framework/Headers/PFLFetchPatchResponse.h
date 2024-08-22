// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFLFETCHPATCHRESPONSE_H
#define PFLFETCHPATCHRESPONSE_H

@class PBCodable, CKCodeRecordTransport;
@protocol NSCopying;



@interface PFLFetchPatchResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) BOOL hasPatchAsset;
@property (nonatomic) NSInteger modelVersion; // ivar: _modelVersion
@property (retain, nonatomic) CKCodeRecordTransport *patchAsset; // ivar: _patchAsset


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