// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECONTACTHANDLESIGNALSET_H
#define INFERENCESCHEMAINFERENCECONTACTHANDLESIGNALSET_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCEPrivatizedHistoryStats.h"

@interface INFERENCESchemaINFERENCEContactHandleSignalSet : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasHistoryStats; // ivar: _hasHistoryStats
@property (nonatomic) BOOL hasIsAllowedType;
@property (nonatomic) BOOL hasIsFaceTimeable;
@property (nonatomic) BOOL hasIsFavorite;
@property (nonatomic) BOOL hasIsNotFaceTimeable;
@property (nonatomic) BOOL hasIsPartialQueryValueMatch;
@property (nonatomic) BOOL hasIsPreferredType;
@property (nonatomic) BOOL hasIsQueryExactMatch;
@property (nonatomic) BOOL hasIsQueryMatch;
@property (nonatomic) BOOL hasIsRecentInAnyGroup;
@property (nonatomic) BOOL hasIsRecentInSameGroup;
@property (nonatomic) BOOL hasIsSuggestedHandle;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStats; // ivar: _historyStats
@property (nonatomic) BOOL isAllowedType; // ivar: _isAllowedType
@property (nonatomic) BOOL isFaceTimeable; // ivar: _isFaceTimeable
@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (nonatomic) BOOL isNotFaceTimeable; // ivar: _isNotFaceTimeable
@property (nonatomic) BOOL isPartialQueryValueMatch; // ivar: _isPartialQueryValueMatch
@property (nonatomic) BOOL isPreferredType; // ivar: _isPreferredType
@property (nonatomic) BOOL isQueryExactMatch; // ivar: _isQueryExactMatch
@property (nonatomic) BOOL isQueryMatch; // ivar: _isQueryMatch
@property (nonatomic) BOOL isRecentInAnyGroup; // ivar: _isRecentInAnyGroup
@property (nonatomic) BOOL isRecentInSameGroup; // ivar: _isRecentInSameGroup
@property (nonatomic) BOOL isSuggestedHandle; // ivar: _isSuggestedHandle
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHistoryStats;
-(void)deleteIsAllowedType;
-(void)deleteIsFaceTimeable;
-(void)deleteIsFavorite;
-(void)deleteIsNotFaceTimeable;
-(void)deleteIsPartialQueryValueMatch;
-(void)deleteIsPreferredType;
-(void)deleteIsQueryExactMatch;
-(void)deleteIsQueryMatch;
-(void)deleteIsRecentInAnyGroup;
-(void)deleteIsRecentInSameGroup;
-(void)deleteIsSuggestedHandle;
-(void)writeTo:(id)arg0 ;


@end


#endif