// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBSEARCHSUGGESTION_H
#define _SFPBSEARCHSUGGESTION_H

@class PBCodable, NSString, NSArray, NSData, NSDictionary;
@protocol _SFPBSearchSuggestion, NSSecureCoding;


#import "_SFPBGraphicalFloat.h"

@interface _SFPBSearchSuggestion : PBCodable <_SFPBSearchSuggestion, NSSecureCoding>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (copy, nonatomic) NSArray *duplicateSuggestions; // ivar: _duplicateSuggestions
@property (copy, nonatomic) NSString *fbr; // ivar: _fbr
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL previouslyEngaged; // ivar: _previouslyEngaged
@property (copy, nonatomic) NSString *query; // ivar: _query
@property (copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier; // ivar: _scopedSearchApplicationBundleIdentifier
@property (retain, nonatomic) _SFPBGraphicalFloat *score; // ivar: _score
@property (copy, nonatomic) NSDictionary *serverFeatures; // ivar: _serverFeatures
@property (copy, nonatomic) NSString *suggestion; // ivar: _suggestion
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *topicIdentifier; // ivar: _topicIdentifier
@property (nonatomic) int type; // ivar: _type
@property (copy, nonatomic) NSString *utteranceText; // ivar: _utteranceText


-(BOOL)getServerFeatures:(*CGFloat)arg0 forKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)duplicateSuggestionsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addDuplicateSuggestions:(id)arg0 ;
-(void)clearDuplicateSuggestions;
-(void)writeTo:(id)arg0 ;


@end


#endif