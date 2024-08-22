// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFMAPCARDSECTION_H
#define SFMAPCARDSECTION_H

@class NSString, NSArray, NSDictionary, NSData;
@protocol SFMapCardSection, NSSecureCoding, NSCopying;


#import "SFCardSection.h"
#import "SFColor.h"
#import "SFMapRegion.h"
#import "SFCommand.h"
#import "SFLatLng.h"
#import "SFCard.h"
#import "SFUserReportRequest.h"

@interface SFMapCardSection : SFCardSection <SFMapCardSection, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SFColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) SFMapRegion *boundingMapRegion; // ivar: _boundingMapRegion
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSString *cardSectionId;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (copy, nonatomic) NSString *footnote; // ivar: _footnote
@property (copy, nonatomic) NSString *footnoteLabel; // ivar: _footnoteLabel
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL interactive; // ivar: _interactive
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFLatLng *location; // ivar: _location
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (nonatomic) int pinBehavior; // ivar: _pinBehavior
@property (retain, nonatomic) SFColor *pinColor; // ivar: _pinColor
@property (copy, nonatomic) NSArray *pins; // ivar: _pins
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (retain, nonatomic) NSString *previewButtonItemsTitle;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (nonatomic) int sizeFormat; // ivar: _sizeFormat
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;


+(BOOL)supportsSecureCoding;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasHasTopPadding;
-(BOOL)hasInteractive;
-(BOOL)hasPinBehavior;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasSizeFormat;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif