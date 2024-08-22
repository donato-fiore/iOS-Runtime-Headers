// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBCARDSECTION_H
#define _SFPBCARDSECTION_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _SFPBCardSection, NSSecureCoding;


#import "_SFPBCommand.h"
#import "_SFPBCard.h"
#import "_SFPBUserReportRequest.h"
#import "_SFPBCardSectionValue.h"

@interface _SFPBCardSection : PBCodable <_SFPBCardSection, NSSecureCoding>



@property (copy, nonatomic) NSString *cardSectionDetail; // ivar: _cardSectionDetail
@property (copy, nonatomic) NSString *cardSectionId; // ivar: _cardSectionId
@property (retain, nonatomic) _SFPBCommand *command; // ivar: _command
@property (copy, nonatomic) NSArray *commands; // ivar: _commands
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBCard *nextCard; // ivar: _nextCard
@property (copy, nonatomic) NSArray *parameterKeyPaths; // ivar: _parameterKeyPaths
@property (copy, nonatomic) NSArray *previewButtonItems; // ivar: _previewButtonItems
@property (copy, nonatomic) NSString *previewButtonItemsTitle; // ivar: _previewButtonItemsTitle
@property (retain, nonatomic) _SFPBCommand *previewCommand; // ivar: _previewCommand
@property (copy, nonatomic) NSString *resultIdentifier; // ivar: _resultIdentifier
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) _SFPBUserReportRequest *userReportRequest; // ivar: _userReportRequest
@property (retain, nonatomic) _SFPBCardSectionValue *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)commandsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithSFCardSection:(id)arg0 ;
-(id)parameterKeyPathsAtIndex:(NSUInteger)arg0 ;
-(id)previewButtonItemsAtIndex:(NSUInteger)arg0 ;
-(void)addCommands:(id)arg0 ;
-(void)addParameterKeyPaths:(id)arg0 ;
-(void)addPreviewButtonItems:(id)arg0 ;
-(void)clearCommands;
-(void)clearParameterKeyPaths;
-(void)clearPreviewButtonItems;
-(void)writeTo:(id)arg0 ;


@end


#endif