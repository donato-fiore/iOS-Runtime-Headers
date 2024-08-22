// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECONTACTQUERYMETADATA_H
#define INFERENCESCHEMAINFERENCECONTACTQUERYMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEContactQueryMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasContactId; // ivar: _hasContactId
@property (nonatomic) BOOL hasHandleLabel; // ivar: _hasHandleLabel
@property (nonatomic) BOOL hasHandleValue; // ivar: _hasHandleValue
@property (nonatomic) BOOL hasHasContactId;
@property (nonatomic) BOOL hasHasHandleLabel;
@property (nonatomic) BOOL hasHasHandleValue;
@property (nonatomic) BOOL hasHasMeReference;
@property (nonatomic) BOOL hasHasName;
@property (nonatomic) BOOL hasHasRelationship;
@property (nonatomic) BOOL hasIsEmergencyQuery;
@property (nonatomic) BOOL hasMeReference; // ivar: _hasMeReference
@property (nonatomic) BOOL hasName; // ivar: _hasName
@property (nonatomic) BOOL hasRelationship; // ivar: _hasRelationship
@property (nonatomic) BOOL isEmergencyQuery; // ivar: _isEmergencyQuery
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHasContactId;
-(void)deleteHasHandleLabel;
-(void)deleteHasHandleValue;
-(void)deleteHasMeReference;
-(void)deleteHasName;
-(void)deleteHasRelationship;
-(void)deleteIsEmergencyQuery;
-(void)writeTo:(id)arg0 ;


@end


#endif