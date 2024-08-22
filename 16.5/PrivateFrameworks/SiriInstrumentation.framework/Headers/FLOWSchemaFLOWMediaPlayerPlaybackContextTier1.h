// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWMEDIAPLAYERPLAYBACKCONTEXTTIER1_H
#define FLOWSCHEMAFLOWMEDIAPLAYERPLAYBACKCONTEXTTIER1_H

@class NSString, NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "USOSchemaUSOGraph.h"
#import "USOSchemaUSOGraphTier1.h"

@interface FLOWSchemaFLOWMediaPlayerPlaybackContextTier1 : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int adamId; // ivar: _adamId
@property (copy, nonatomic) NSString *adamIdString; // ivar: _adamIdString
@property (copy, nonatomic) NSString *contentTitle; // ivar: _contentTitle
@property (nonatomic) BOOL hasAdamId;
@property (nonatomic) BOOL hasAdamIdString; // ivar: _hasAdamIdString
@property (nonatomic) BOOL hasContentTitle; // ivar: _hasContentTitle
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasU2UsoGraph; // ivar: _hasU2UsoGraph
@property (nonatomic) BOOL hasU2UsoGraphTier1; // ivar: _hasU2UsoGraphTier1
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *searchResults; // ivar: _searchResults
@property (retain, nonatomic) USOSchemaUSOGraph *u2UsoGraph; // ivar: _u2UsoGraph
@property (retain, nonatomic) USOSchemaUSOGraphTier1 *u2UsoGraphTier1; // ivar: _u2UsoGraphTier1


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)searchResultsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addSearchResults:(id)arg0 ;
-(void)clearSearchResults;
-(void)deleteAdamId;
-(void)deleteAdamIdString;
-(void)deleteContentTitle;
-(void)deleteLinkId;
-(void)deleteSearchResults;
-(void)deleteU2UsoGraph;
-(void)deleteU2UsoGraphTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif