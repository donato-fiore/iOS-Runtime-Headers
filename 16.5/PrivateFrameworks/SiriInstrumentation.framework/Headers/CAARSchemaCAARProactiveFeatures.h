// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAARSCHEMACAARPROACTIVEFEATURES_H
#define CAARSCHEMACAARPROACTIVEFEATURES_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CAARSchemaCAARProactiveFeatures : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) CGFloat appRelevanceScore; // ivar: _appRelevanceScore
@property (nonatomic) BOOL hasAppRelevanceScore;
@property (nonatomic) BOOL hasIntentRelevanceScore;
@property (nonatomic) BOOL hasIsAppInTopFiveRelevance;
@property (nonatomic) BOOL hasIsAppInTopOneRelevance;
@property (nonatomic) BOOL hasIsAppInTopTenRelevance;
@property (nonatomic) BOOL hasIsIntentInTopFiveRelevance;
@property (nonatomic) BOOL hasIsIntentInTopOneRelevance;
@property (nonatomic) BOOL hasIsIntentInTopTenRelevance;
@property (nonatomic) CGFloat intentRelevanceScore; // ivar: _intentRelevanceScore
@property (nonatomic) BOOL isAppInTopFiveRelevance; // ivar: _isAppInTopFiveRelevance
@property (nonatomic) BOOL isAppInTopOneRelevance; // ivar: _isAppInTopOneRelevance
@property (nonatomic) BOOL isAppInTopTenRelevance; // ivar: _isAppInTopTenRelevance
@property (nonatomic) BOOL isIntentInTopFiveRelevance; // ivar: _isIntentInTopFiveRelevance
@property (nonatomic) BOOL isIntentInTopOneRelevance; // ivar: _isIntentInTopOneRelevance
@property (nonatomic) BOOL isIntentInTopTenRelevance; // ivar: _isIntentInTopTenRelevance
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppRelevanceScore;
-(void)deleteIntentRelevanceScore;
-(void)deleteIsAppInTopFiveRelevance;
-(void)deleteIsAppInTopOneRelevance;
-(void)deleteIsAppInTopTenRelevance;
-(void)deleteIsIntentInTopFiveRelevance;
-(void)deleteIsIntentInTopOneRelevance;
-(void)deleteIsIntentInTopTenRelevance;
-(void)writeTo:(id)arg0 ;


@end


#endif