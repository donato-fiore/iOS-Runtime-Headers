// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMADIALOGOUTPUT_H
#define SISCHEMADIALOGOUTPUT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaRedactableString.h"

@interface SISchemaDialogOutput : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaRedactableString *displayedDialogOutput; // ivar: _displayedDialogOutput
@property (nonatomic) BOOL hasDisplayedDialogOutput; // ivar: _hasDisplayedDialogOutput
@property (nonatomic) BOOL hasSpokenDialogOutput; // ivar: _hasSpokenDialogOutput
@property (nonatomic) BOOL hasViewID; // ivar: _hasViewID
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaRedactableString *spokenDialogOutput; // ivar: _spokenDialogOutput
@property (copy, nonatomic) NSString *viewID; // ivar: _viewID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDisplayedDialogOutput;
-(void)deleteSpokenDialogOutput;
-(void)deleteViewID;
-(void)writeTo:(id)arg0 ;


@end


#endif