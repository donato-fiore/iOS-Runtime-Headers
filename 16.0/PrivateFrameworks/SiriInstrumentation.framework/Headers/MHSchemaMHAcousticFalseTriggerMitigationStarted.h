// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MHSCHEMAMHACOUSTICFALSETRIGGERMITIGATIONSTARTED_H
#define MHSCHEMAMHACOUSTICFALSETRIGGERMITIGATIONSTARTED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAcousticFalseTriggerMitigationStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMitigationType;
@property (nonatomic) BOOL hasModelVersion; // ivar: _hasModelVersion
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mitigationType; // ivar: _mitigationType
@property (copy, nonatomic) NSString *modelVersion; // ivar: _modelVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMitigationType;
-(void)deleteModelVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif