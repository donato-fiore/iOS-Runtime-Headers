// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSEARCHFORMESSAGESINTENTRESPONSE_H
#define _INPBSEARCHFORMESSAGESINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSearchForMessagesIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBSearchForMessagesIntentResponse : PBCodable <_INPBSearchForMessagesIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *messages; // ivar: _messages
@property (readonly, nonatomic) NSUInteger messagesCount;
@property (copy, nonatomic) NSArray *searchResults; // ivar: _searchResults
@property (readonly, nonatomic) NSUInteger searchResultsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)messagesAtIndex:(NSUInteger)arg0 ;
-(id)searchResultsAtIndex:(NSUInteger)arg0 ;
-(void)addMessages:(id)arg0 ;
-(void)addSearchResults:(id)arg0 ;
-(void)clearMessages;
-(void)clearSearchResults;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif