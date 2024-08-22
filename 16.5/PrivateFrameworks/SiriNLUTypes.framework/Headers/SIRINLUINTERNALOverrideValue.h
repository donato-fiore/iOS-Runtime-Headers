// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALOVERRIDEVALUE_H
#define SIRINLUINTERNALOVERRIDEVALUE_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUINTERNALCCQROverrideTemplate.h"
#import "SIRINLUINTERNALLVCOverrideValue.h"
#import "SIRINLUEXTERNALUserParse.h"

@interface SIRINLUINTERNALOverrideValue : PBCodable <NSCopying>



@property (retain, nonatomic) SIRINLUINTERNALCCQROverrideTemplate *ccqrOverrideTemplate; // ivar: _ccqrOverrideTemplate
@property (readonly, nonatomic) BOOL hasCcqrOverrideTemplate;
@property (readonly, nonatomic) BOOL hasLvcOverrideValue;
@property (readonly, nonatomic) BOOL hasUserParse;
@property (retain, nonatomic) SIRINLUINTERNALLVCOverrideValue *lvcOverrideValue; // ivar: _lvcOverrideValue
@property (retain, nonatomic) SIRINLUEXTERNALUserParse *userParse; // ivar: _userParse


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