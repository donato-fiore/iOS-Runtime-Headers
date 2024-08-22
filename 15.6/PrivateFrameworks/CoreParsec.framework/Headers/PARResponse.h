// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PARRESPONSE_H
#define PARRESPONSE_H

@class NSArray, GEOUserSessionEntity, NSData, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "PARReply.h"

@interface PARResponse : NSObject

@property (readonly, nonatomic) NSArray *alternativeResults; // ivar: _alternativeResults
@property (retain, nonatomic) NSArray *corrections; // ivar: _corrections
@property (retain, nonatomic) NSArray *corrections;
@property (retain, nonatomic) GEOUserSessionEntity *geoUserSessionEntity; // ivar: _geoUserSessionEntity
@property (retain, nonatomic) GEOUserSessionEntity *geoUserSessionEntity;
@property (retain, nonatomic) NSData *legacyJSON; // ivar: _legacyJSON
@property (retain, nonatomic) NSData *legacyJSON;
@property (retain, nonatomic) NSString *prefix; // ivar: _prefix
@property (retain, nonatomic) NSString *prefix;
@property (readonly, nonatomic) NSArray *previouslyEngagedSuggestions; // ivar: _previouslyEngagedSuggestions
@property (retain, nonatomic) NSString *query; // ivar: _query
@property (retain, nonatomic) NSString *query;
@property (readonly, nonatomic) NSArray *rawResponse; // ivar: _rawResponse
@property (retain, nonatomic) NSDictionary *rawSqf; // ivar: _rawSqf
@property (retain, nonatomic) NSDictionary *rawSqf;
@property (readonly, nonatomic) PARReply *reply; // ivar: _reply
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSDictionary *serverFeatures; // ivar: _serverFeatures
@property (retain, nonatomic) NSDictionary *serverFeatures;
@property (retain, nonatomic) NSArray *suggestions; // ivar: _suggestions
@property (retain, nonatomic) NSArray *suggestions;
@property (nonatomic) BOOL suggestionsAreBlended; // ivar: _suggestionsAreBlended
@property (nonatomic) BOOL suggestionsAreBlended;


+(id)responseFromData:(id)arg0 session:(id)arg1 request:(id)arg2 ;
+(id)responseFromJSON:(id)arg0 session:(id)arg1 ;
+(id)responseFromReply:(id)arg0 ;
-(BOOL)compareWithResponse:(id)arg0 logger:(id)arg1 ;
-(id)initWithReply:(id)arg0 ;
-(id)initWithReply:(id)arg0 factory:(id)arg1 dataV2:(id)arg2 ;


@end


#endif