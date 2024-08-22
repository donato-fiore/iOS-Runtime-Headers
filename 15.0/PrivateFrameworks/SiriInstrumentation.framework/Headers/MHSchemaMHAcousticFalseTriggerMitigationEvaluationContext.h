// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MHSCHEMAMHACOUSTICFALSETRIGGERMITIGATIONEVALUATIONCONTEXT_H
#define MHSCHEMAMHACOUSTICFALSETRIGGERMITIGATIONEVALUATIONCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MHSchemaMHAcousticFalseTriggerMitigationFailed.h"
#import "MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated.h"
#import "MHSchemaMHAcousticFalseTriggerMitigationStarted.h"

@interface MHSchemaMHAcousticFalseTriggerMitigationEvaluationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationFailed *failed; // ivar: _failed
@property (nonatomic) BOOL hasFailed; // ivar: _hasFailed
@property (nonatomic) BOOL hasScoreGenerated; // ivar: _hasScoreGenerated
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated *scoreGenerated; // ivar: _scoreGenerated
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationStarted *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif