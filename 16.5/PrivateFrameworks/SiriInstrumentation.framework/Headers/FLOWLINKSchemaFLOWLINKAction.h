// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWLINKSCHEMAFLOWLINKACTION_H
#define FLOWLINKSCHEMAFLOWLINKACTION_H

@class NSString, NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface FLOWLINKSchemaFLOWLINKAction : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *actionIdentifierName; // ivar: _actionIdentifierName
@property (nonatomic) BOOL hasActionIdentifierName; // ivar: _hasActionIdentifierName
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasPresentationStyle;
@property (nonatomic) BOOL hasSystemProtocol;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *parameters; // ivar: _parameters
@property (nonatomic) int presentationStyle; // ivar: _presentationStyle
@property (nonatomic) int systemProtocol; // ivar: _systemProtocol


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)parametersAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addParameters:(id)arg0 ;
-(void)clearParameters;
-(void)deleteActionIdentifierName;
-(void)deleteLinkId;
-(void)deleteParameters;
-(void)deletePresentationStyle;
-(void)deleteSystemProtocol;
-(void)writeTo:(id)arg0 ;


@end


#endif