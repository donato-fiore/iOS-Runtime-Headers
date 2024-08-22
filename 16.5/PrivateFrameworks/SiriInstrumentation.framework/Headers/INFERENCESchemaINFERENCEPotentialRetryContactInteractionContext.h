// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCEPOTENTIALRETRYCONTACTINTERACTIONCONTEXT_H
#define INFERENCESCHEMAINFERENCEPOTENTIALRETRYCONTACTINTERACTIONCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasInteractionDurationInSecBucket;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactDisplayName;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactFamilyName;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactGivenName;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactHandleValue;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactId;
@property (nonatomic) BOOL hasPotentialRetryIntervalInSecBucket;
@property (nonatomic) unsigned int interactionDurationInSecBucket; // ivar: _interactionDurationInSecBucket
@property (nonatomic) BOOL isExactMatchPriorSiriContactDisplayName; // ivar: _isExactMatchPriorSiriContactDisplayName
@property (nonatomic) BOOL isExactMatchPriorSiriContactFamilyName; // ivar: _isExactMatchPriorSiriContactFamilyName
@property (nonatomic) BOOL isExactMatchPriorSiriContactGivenName; // ivar: _isExactMatchPriorSiriContactGivenName
@property (nonatomic) BOOL isExactMatchPriorSiriContactHandleValue; // ivar: _isExactMatchPriorSiriContactHandleValue
@property (nonatomic) BOOL isExactMatchPriorSiriContactId; // ivar: _isExactMatchPriorSiriContactId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int potentialRetryIntervalInSecBucket; // ivar: _potentialRetryIntervalInSecBucket


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteInteractionDurationInSecBucket;
-(void)deleteIsExactMatchPriorSiriContactDisplayName;
-(void)deleteIsExactMatchPriorSiriContactFamilyName;
-(void)deleteIsExactMatchPriorSiriContactGivenName;
-(void)deleteIsExactMatchPriorSiriContactHandleValue;
-(void)deleteIsExactMatchPriorSiriContactId;
-(void)deletePotentialRetryIntervalInSecBucket;
-(void)writeTo:(id)arg0 ;


@end


#endif