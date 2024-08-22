// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWVOICESHORTCUTACTION_H
#define FLOWSCHEMAFLOWVOICESHORTCUTACTION_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWVoiceShortcutAction : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *appId; // ivar: _appId
@property (nonatomic) BOOL hasAppId; // ivar: _hasAppId
@property (nonatomic) BOOL hasIntentCategory; // ivar: _hasIntentCategory
@property (nonatomic) BOOL hasIntentNLDomain; // ivar: _hasIntentNLDomain
@property (nonatomic) BOOL hasIntentName; // ivar: _hasIntentName
@property (copy, nonatomic) NSString *intentCategory; // ivar: _intentCategory
@property (copy, nonatomic) NSString *intentNLDomain; // ivar: _intentNLDomain
@property (copy, nonatomic) NSString *intentName; // ivar: _intentName
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppId;
-(void)deleteIntentCategory;
-(void)deleteIntentNLDomain;
-(void)deleteIntentName;
-(void)writeTo:(id)arg0 ;


@end


#endif