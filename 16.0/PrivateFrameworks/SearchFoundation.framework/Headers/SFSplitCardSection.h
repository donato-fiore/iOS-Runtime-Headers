// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSPLITCARDSECTION_H
#define SFSPLITCARDSECTION_H

@class NSString, NSArray, NSDictionary, NSData;
@protocol SFSplitCardSection, NSSecureCoding, NSCopying;


#import "SFCardSection.h"
#import "SFColor.h"
#import "SFRichText.h"
#import "SFCommand.h"
#import "SFCard.h"
#import "SFUserReportRequest.h"

@interface SFSplitCardSection : SFCardSection <SFSplitCardSection, NSSecureCoding, NSCopying>



@property (retain, nonatomic) SFColor *backgroundColor;
@property (retain, nonatomic) SFRichText *body; // ivar: _body
@property (retain, nonatomic) SFRichText *bottomTitle; // ivar: _bottomTitle
@property (nonatomic) BOOL canBeHidden;
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSString *cardSectionId;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideDivider;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *listItems; // ivar: _listItems
@property (copy, nonatomic) NSString *listMoreString; // ivar: _listMoreString
@property (copy, nonatomic) NSString *listPrefix; // ivar: _listPrefix
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (retain, nonatomic) NSString *previewButtonItemsTitle;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) SFRichText *secondaryTopTitle; // ivar: _secondaryTopTitle
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (retain, nonatomic) SFRichText *topTitle; // ivar: _topTitle
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif