// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ORCHSCHEMAORCHMUXREQUESTENDED_H
#define ORCHSCHEMAORCHMUXREQUESTENDED_H

@class NSData, NSString, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface ORCHSchemaORCHMUXRequestEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int ORCHUserIdentityClassification; // ivar: _ORCHUserIdentityClassification
@property (nonatomic) BOOL hasIsMultiUser;
@property (nonatomic) BOOL hasIsOutsider;
@property (nonatomic) BOOL hasIsSelectedUserPartOfMultipleHomes;
@property (nonatomic) BOOL hasNlRerunTimeInMs;
@property (nonatomic) BOOL hasORCHUserIdentityClassification;
@property (nonatomic) BOOL hasSelectedSharedUserId; // ivar: _hasSelectedSharedUserId
@property (nonatomic) BOOL hasVoiceIdAssetVersion; // ivar: _hasVoiceIdAssetVersion
@property (nonatomic) BOOL isMultiUser; // ivar: _isMultiUser
@property (nonatomic) BOOL isOutsider; // ivar: _isOutsider
@property (nonatomic) BOOL isSelectedUserPartOfMultipleHomes; // ivar: _isSelectedUserPartOfMultipleHomes
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int nlRerunTimeInMs; // ivar: _nlRerunTimeInMs
@property (copy, nonatomic) NSString *selectedSharedUserId; // ivar: _selectedSharedUserId
@property (copy, nonatomic) NSArray *userScores; // ivar: _userScores
@property (copy, nonatomic) NSString *voiceIdAssetVersion; // ivar: _voiceIdAssetVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)userScoresAtIndex:(NSUInteger)arg0 ;
-(void)addUserScores:(id)arg0 ;
-(void)clearUserScores;
-(void)deleteIsMultiUser;
-(void)deleteIsOutsider;
-(void)deleteIsSelectedUserPartOfMultipleHomes;
-(void)deleteNlRerunTimeInMs;
-(void)deleteSelectedSharedUserId;
-(void)deleteUserScores;
-(void)deleteVoiceIdAssetVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif