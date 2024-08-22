// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMASIRIRESPONSECONTEXT_H
#define SISCHEMASIRIRESPONSECONTEXT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaSiriResponseContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *dialogPhase; // ivar: _dialogPhase
@property (nonatomic) BOOL hasDialogPhase; // ivar: _hasDialogPhase
@property (nonatomic) BOOL hasPresentationType;
@property (nonatomic) BOOL hasSiriResponseMode;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int presentationType; // ivar: _presentationType
@property (nonatomic) int siriResponseMode; // ivar: _siriResponseMode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDialogPhase;
-(void)deletePresentationType;
-(void)deleteSiriResponseMode;
-(void)writeTo:(id)arg0 ;


@end


#endif