// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBCARD_H
#define _SFPBCARD_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _SFPBCard, NSSecureCoding;


#import "_SFPBImage.h"
#import "_SFPBURL.h"

@interface _SFPBCard : PBCodable <_SFPBCard, NSSecureCoding>



@property (copy, nonatomic) NSString *cardId; // ivar: _cardId
@property (copy) NSArray *cardSections; // ivar: _cardSections
@property (copy, nonatomic) NSString *contextReferenceIdentifier; // ivar: _contextReferenceIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *dismissalCommands; // ivar: _dismissalCommands
@property (copy, nonatomic) NSData *entityIdentifier; // ivar: _entityIdentifier
@property (copy, nonatomic) NSArray *entityProtobufMessages; // ivar: _entityProtobufMessages
@property (copy, nonatomic) NSString *fbr; // ivar: _fbr
@property (nonatomic) BOOL flexibleSectionOrder; // ivar: _flexibleSectionOrder
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *intentMessageData; // ivar: _intentMessageData
@property (copy, nonatomic) NSString *intentMessageName; // ivar: _intentMessageName
@property (copy, nonatomic) NSData *intentResponseMessageData; // ivar: _intentResponseMessageData
@property (copy, nonatomic) NSString *intentResponseMessageName; // ivar: _intentResponseMessageName
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (copy, nonatomic) NSString *resultIdentifier; // ivar: _resultIdentifier
@property (nonatomic) int source; // ivar: _source
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) _SFPBImage *titleImage; // ivar: _titleImage
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) _SFPBURL *urlValue; // ivar: _urlValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)cardSectionsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)dismissalCommandsAtIndex:(NSUInteger)arg0 ;
-(id)entityProtobufMessagesAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addCardSections:(id)arg0 ;
-(void)addDismissalCommands:(id)arg0 ;
-(void)addEntityProtobufMessages:(id)arg0 ;
-(void)clearCardSections;
-(void)clearDismissalCommands;
-(void)clearEntityProtobufMessages;
-(void)writeTo:(id)arg0 ;


@end


#endif