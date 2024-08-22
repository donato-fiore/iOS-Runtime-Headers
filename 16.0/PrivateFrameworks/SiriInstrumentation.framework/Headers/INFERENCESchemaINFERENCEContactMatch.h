// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCECONTACTMATCH_H
#define INFERENCESCHEMAINFERENCECONTACTMATCH_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCEBackgroundContactSignalSet.h"
#import "INFERENCESchemaINFERENCEContactSignalSet.h"
#import "INFERENCESchemaINFERENCEContact.h"
#import "INFERENCESchemaINFERENCEContactFeatureSet.h"

@interface INFERENCESchemaINFERENCEContactMatch : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) INFERENCESchemaINFERENCEBackgroundContactSignalSet *backgroundSignalSet; // ivar: _backgroundSignalSet
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactSignalSet *contactSignalSet; // ivar: _contactSignalSet
@property (retain, nonatomic) INFERENCESchemaINFERENCEContact *contactValue; // ivar: _contactValue
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactFeatureSet *featureSet; // ivar: _featureSet
@property (nonatomic) BOOL hasBackgroundSignalSet; // ivar: _hasBackgroundSignalSet
@property (nonatomic) BOOL hasContactSignalSet; // ivar: _hasContactSignalSet
@property (nonatomic) BOOL hasContactValue; // ivar: _hasContactValue
@property (nonatomic) BOOL hasFeatureSet; // ivar: _hasFeatureSet
@property (nonatomic) BOOL hasIsShownToUser;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL isShownToUser; // ivar: _isShownToUser
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float score; // ivar: _score


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBackgroundSignalSet;
-(void)deleteContactSignalSet;
-(void)deleteContactValue;
-(void)deleteFeatureSet;
-(void)deleteIsShownToUser;
-(void)deleteScore;
-(void)writeTo:(id)arg0 ;


@end


#endif