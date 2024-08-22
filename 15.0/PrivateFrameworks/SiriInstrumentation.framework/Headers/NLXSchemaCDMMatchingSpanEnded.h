// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLXSCHEMACDMMATCHINGSPANENDED_H
#define NLXSCHEMACDMMATCHINGSPANENDED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMMatchingSpanEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId; // ivar: _contextId
@property (nonatomic) BOOL hasContextId; // ivar: _hasContextId
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *matchingSpans; // ivar: _matchingSpans


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)matchingSpansAtIndex:(NSUInteger)arg0 ;
-(void)addMatchingSpans:(id)arg0 ;
-(void)clearMatchingSpans;
-(void)writeTo:(id)arg0 ;


@end


#endif