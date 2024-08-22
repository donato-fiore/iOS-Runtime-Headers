// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFLINKPRESENTATIONCARDSECTION_H
#define SFLINKPRESENTATIONCARDSECTION_H

@class NSString, NSArray, NSDictionary, NSData;
@protocol SFLinkPresentationCardSection, NSSecureCoding, NSCopying;


#import "SFCardSection.h"
#import "SFColor.h"
#import "SFCommand.h"
#import "SFCard.h"
#import "SFUserReportRequest.h"

@interface SFLinkPresentationCardSection : SFCardSection <SFLinkPresentationCardSection, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SFColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSString *cardSectionId;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *coreSpotlightIdentifier; // ivar: _coreSpotlightIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL isHighlighted; // ivar: _isHighlighted
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSArray *peopleToBadge; // ivar: _peopleToBadge
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (retain, nonatomic) NSString *previewButtonItemsTitle;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *url; // ivar: _url
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;


+(BOOL)supportsSecureCoding;
-(BOOL)hasIsHighlighted;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif