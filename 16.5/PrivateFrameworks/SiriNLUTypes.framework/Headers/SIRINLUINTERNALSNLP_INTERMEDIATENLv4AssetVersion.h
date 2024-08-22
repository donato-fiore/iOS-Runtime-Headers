// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALSNLP_INTERMEDIATENLV4ASSETVERSION_H
#define SIRINLUINTERNALSNLP_INTERMEDIATENLV4ASSETVERSION_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUINTERNALSNLP_INTERMEDIATESNLPAssetVersion.h"

@interface SIRINLUINTERNALSNLP_INTERMEDIATENLv4AssetVersion : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) SIRINLUINTERNALSNLP_INTERMEDIATESNLPAssetVersion *version; // ivar: _version


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