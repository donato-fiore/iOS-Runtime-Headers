// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCEREQUESTMATCHSIGNALSET_H
#define INFERENCESCHEMAINFERENCEREQUESTMATCHSIGNALSET_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCERequestMatchSignalSet : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL areAllPrimaryContactTokensInQuery; // ivar: _areAllPrimaryContactTokensInQuery
@property (nonatomic) BOOL areAllQueryTokensInContact; // ivar: _areAllQueryTokensInContact
@property (nonatomic) BOOL hasAreAllPrimaryContactTokensInQuery;
@property (nonatomic) BOOL hasAreAllQueryTokensInContact;
@property (nonatomic) BOOL hasIsFamilyNameMatch;
@property (nonatomic) BOOL hasIsGivenNameMatch;
@property (nonatomic) BOOL hasIsHandleQueryLabelNameMatch;
@property (nonatomic) BOOL hasIsHandleQueryMatch;
@property (nonatomic) BOOL hasIsMiddleNameMatch;
@property (nonatomic) BOOL hasIsNamePrefixMatch;
@property (nonatomic) BOOL hasIsNameSuffixMatch;
@property (nonatomic) BOOL hasIsNicknameMatch;
@property (nonatomic) BOOL hasIsOrganizationNameMatch;
@property (nonatomic) BOOL hasIsWeakOrganizationMatch;
@property (nonatomic) BOOL hasNumPrimaryTokens;
@property (nonatomic) BOOL isFamilyNameMatch; // ivar: _isFamilyNameMatch
@property (nonatomic) BOOL isGivenNameMatch; // ivar: _isGivenNameMatch
@property (nonatomic) BOOL isHandleQueryLabelNameMatch; // ivar: _isHandleQueryLabelNameMatch
@property (nonatomic) BOOL isHandleQueryMatch; // ivar: _isHandleQueryMatch
@property (nonatomic) BOOL isMiddleNameMatch; // ivar: _isMiddleNameMatch
@property (nonatomic) BOOL isNamePrefixMatch; // ivar: _isNamePrefixMatch
@property (nonatomic) BOOL isNameSuffixMatch; // ivar: _isNameSuffixMatch
@property (nonatomic) BOOL isNicknameMatch; // ivar: _isNicknameMatch
@property (nonatomic) BOOL isOrganizationNameMatch; // ivar: _isOrganizationNameMatch
@property (nonatomic) BOOL isWeakOrganizationMatch; // ivar: _isWeakOrganizationMatch
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numPrimaryTokens; // ivar: _numPrimaryTokens


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAreAllPrimaryContactTokensInQuery;
-(void)deleteAreAllQueryTokensInContact;
-(void)deleteIsFamilyNameMatch;
-(void)deleteIsGivenNameMatch;
-(void)deleteIsHandleQueryLabelNameMatch;
-(void)deleteIsHandleQueryMatch;
-(void)deleteIsMiddleNameMatch;
-(void)deleteIsNamePrefixMatch;
-(void)deleteIsNameSuffixMatch;
-(void)deleteIsNicknameMatch;
-(void)deleteIsOrganizationNameMatch;
-(void)deleteIsWeakOrganizationMatch;
-(void)deleteNumPrimaryTokens;
-(void)writeTo:(id)arg0 ;


@end


#endif