// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBINFOSUGGESTION_H
#define ATXPBINFOSUGGESTION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface ATXPBInfoSuggestion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (retain, nonatomic) NSData *archivedIntent; // ivar: _archivedIntent
@property (retain, nonatomic) NSData *archivedIntentDescription; // ivar: _archivedIntentDescription
@property (retain, nonatomic) NSData *archivedMetadata; // ivar: _archivedMetadata
@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (nonatomic) NSInteger confidenceLevel; // ivar: _confidenceLevel
@property (retain, nonatomic) NSString *criterion; // ivar: _criterion
@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hasArchivedIntent;
@property (readonly, nonatomic) BOOL hasArchivedIntentDescription;
@property (readonly, nonatomic) BOOL hasArchivedMetadata;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (nonatomic) BOOL hasConfidenceLevel;
@property (readonly, nonatomic) BOOL hasCriterion;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasLayouts;
@property (nonatomic) BOOL hasRelevanceScore;
@property (readonly, nonatomic) BOOL hasSourceIdentifier;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasSuggestionIdentifier;
@property (readonly, nonatomic) BOOL hasWidgetBundleIdentifier;
@property (readonly, nonatomic) BOOL hasWidgetKind;
@property (nonatomic) NSInteger layouts; // ivar: _layouts
@property (nonatomic) CGFloat relevanceScore; // ivar: _relevanceScore
@property (retain, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (nonatomic) CGFloat startDate; // ivar: _startDate
@property (retain, nonatomic) NSString *suggestionIdentifier; // ivar: _suggestionIdentifier
@property (retain, nonatomic) NSString *widgetBundleIdentifier; // ivar: _widgetBundleIdentifier
@property (retain, nonatomic) NSString *widgetKind; // ivar: _widgetKind


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif