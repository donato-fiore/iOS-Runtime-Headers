// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFTABLEHEADERROWCARDSECTION_H
#define SFTABLEHEADERROWCARDSECTION_H

@class NSString, NSArray, NSDictionary, NSData;
@protocol SFTableHeaderRowCardSection, NSSecureCoding, NSCopying;


#import "SFTableRowCardSection.h"
#import "SFTableAlignmentSchema.h"
#import "SFColor.h"
#import "SFCommand.h"
#import "SFCard.h"
#import "SFUserReportRequest.h"

@interface SFTableHeaderRowCardSection : SFTableRowCardSection <SFTableHeaderRowCardSection, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL alignRowsToHeader; // ivar: _alignRowsToHeader
@property (retain, nonatomic) SFTableAlignmentSchema *alignmentSchema; // ivar: _alignmentSchema
@property (retain, nonatomic) SFColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSString *cardSectionId;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL isSubHeader; // ivar: _isSubHeader
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (retain, nonatomic) NSString *previewButtonItemsTitle;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) BOOL reducedRowHeight; // ivar: _reducedRowHeight
@property (copy, nonatomic) NSString *resultIdentifier;
@property (copy, nonatomic) NSArray *richData;
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tabGroupIdentifier; // ivar: _tabGroupIdentifier
@property (copy, nonatomic) NSString *tableIdentifier; // ivar: _tableIdentifier
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;
@property (nonatomic) int verticalAlign; // ivar: _verticalAlign


+(BOOL)supportsSecureCoding;
-(BOOL)hasAlignRowsToHeader;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasHasTopPadding;
-(BOOL)hasIsSubHeader;
-(BOOL)hasReducedRowHeight;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasVerticalAlign;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif