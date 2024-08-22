// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCARDSECTION_H
#define SFCARDSECTION_H

@class NSString, NSArray, NSDictionary, NSData;
@protocol SFJSONSerializable, SFCardSection, NSCopying;

#import <Foundation/Foundation.h>

#import "SFColor.h"
#import "SFCommand.h"
#import "SFCard.h"
#import "SFUserReportRequest.h"

@interface SFCardSection : NSObject <SFJSONSerializable, SFCardSection, NSCopying>



@property (retain, nonatomic) SFColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (retain, nonatomic) NSString *cardSectionDetail; // ivar: _cardSectionDetail
@property (copy, nonatomic) NSString *cardSectionId; // ivar: _cardSectionId
@property (retain, nonatomic) SFCommand *command; // ivar: _command
@property (retain, nonatomic) NSString *commandDetail; // ivar: _commandDetail
@property (copy, nonatomic) NSArray *commands; // ivar: _commands
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideDivider; // ivar: _hideDivider
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFCard *nextCard; // ivar: _nextCard
@property (copy, nonatomic) NSArray *parameterKeyPaths; // ivar: _parameterKeyPaths
@property (copy, nonatomic) NSArray *previewButtonItems; // ivar: _previewButtonItems
@property (retain, nonatomic) NSString *previewButtonItemsTitle; // ivar: _previewButtonItemsTitle
@property (retain, nonatomic) SFCommand *previewCommand; // ivar: _previewCommand
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (copy, nonatomic) NSString *resultIdentifier; // ivar: _resultIdentifier
@property (readonly, nonatomic) NSArray *sectionsWithCards;
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) SFUserReportRequest *userReportRequest; // ivar: _userReportRequest


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)addCardsFromButtonsTo:(id)arg0 ;
-(void)addCardsFromCommandsTo:(id)arg0 ;
-(void)addCardsFromEmbeddedSectionsTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif