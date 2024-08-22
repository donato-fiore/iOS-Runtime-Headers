// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALSNLP_INTERMEDIATEITFMASSETVERSION_H
#define SIRINLUINTERNALSNLP_INTERMEDIATEITFMASSETVERSION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SIRINLUINTERNALSNLP_INTERMEDIATESNLPAssetVersion.h"

@interface SIRINLUINTERNALSNLP_INTERMEDIATEITFMAssetVersion : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasModelType;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *modelType; // ivar: _modelType
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