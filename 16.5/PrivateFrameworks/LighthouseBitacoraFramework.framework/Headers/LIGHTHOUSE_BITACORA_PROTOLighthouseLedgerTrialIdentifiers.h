// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIGHTHOUSE_BITACORA_PROTOLIGHTHOUSELEDGERTRIALIDENTIFIERS_H
#define LIGHTHOUSE_BITACORA_PROTOLIGHTHOUSELEDGERTRIALIDENTIFIERS_H

@class PBCodable;
@protocol NSCopying;


#import "LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers.h"
#import "LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers.h"

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers : PBCodable <NSCopying>



@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers *bmltIdentifiers; // ivar: _bmltIdentifiers
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers *experimentIdentifiers; // ivar: _experimentIdentifiers
@property (readonly, nonatomic) BOOL hasBmltIdentifiers;
@property (readonly, nonatomic) BOOL hasExperimentIdentifiers;


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