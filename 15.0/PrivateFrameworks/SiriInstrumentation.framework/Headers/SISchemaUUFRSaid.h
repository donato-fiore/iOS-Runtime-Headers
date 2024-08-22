// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAUUFRSAID_H
#define SISCHEMAUUFRSAID_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaSiriResponseContext.h"

@interface SISchemaUUFRSaid : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *aceViewClass; // ivar: _aceViewClass
@property (copy, nonatomic) NSString *aceViewID; // ivar: _aceViewID
@property (copy, nonatomic) NSString *dialogIdentifier; // ivar: _dialogIdentifier
@property (nonatomic) BOOL hasAceViewClass; // ivar: _hasAceViewClass
@property (nonatomic) BOOL hasAceViewID; // ivar: _hasAceViewID
@property (nonatomic) BOOL hasDialogIdentifier; // ivar: _hasDialogIdentifier
@property (nonatomic) BOOL hasSiriResponseContext; // ivar: _hasSiriResponseContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext; // ivar: _siriResponseContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif