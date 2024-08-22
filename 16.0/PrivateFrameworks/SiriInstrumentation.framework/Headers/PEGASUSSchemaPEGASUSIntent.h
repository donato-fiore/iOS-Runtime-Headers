// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PEGASUSSCHEMAPEGASUSINTENT_H
#define PEGASUSSCHEMAPEGASUSINTENT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PEGASUSSchemaPEGASUSIntent : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasIntentCategory;
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasName; // ivar: _hasName
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int intentCategory; // ivar: _intentCategory
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConfidence;
-(void)deleteIntentCategory;
-(void)deleteLinkId;
-(void)deleteName;
-(void)deleteSource;
-(void)writeTo:(id)arg0 ;


@end


#endif