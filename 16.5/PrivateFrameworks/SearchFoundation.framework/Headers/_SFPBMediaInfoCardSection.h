// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBMEDIAINFOCARDSECTION_H
#define _SFPBMEDIAINFOCARDSECTION_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _SFPBMediaInfoCardSection, NSSecureCoding;


#import "_SFPBColor.h"
#import "_SFPBMediaItem.h"
#import "_SFPBActionItem.h"
#import "_SFPBRichText.h"

@interface _SFPBMediaInfoCardSection : PBCodable <_SFPBMediaInfoCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *details; // ivar: _details
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isMediaContainer; // ivar: _isMediaContainer
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBMediaItem *mediaItem; // ivar: _mediaItem
@property (copy, nonatomic) NSArray *offers; // ivar: _offers
@property (retain, nonatomic) _SFPBActionItem *playAction; // ivar: _playAction
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (retain, nonatomic) _SFPBRichText *specialOfferButtonLabel; // ivar: _specialOfferButtonLabel
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSString *watchListButtonLabel; // ivar: _watchListButtonLabel
@property (copy, nonatomic) NSString *watchListConfirmationText; // ivar: _watchListConfirmationText
@property (copy, nonatomic) NSString *watchListContinuationText; // ivar: _watchListContinuationText
@property (copy, nonatomic) NSString *watchListIdentifier; // ivar: _watchListIdentifier
@property (nonatomic) int watchListItemType; // ivar: _watchListItemType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)detailsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)offersAtIndex:(NSUInteger)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addDetails:(id)arg0 ;
-(void)addOffers:(id)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)clearDetails;
-(void)clearOffers;
-(void)clearPunchoutOptions;
-(void)writeTo:(id)arg0 ;


@end


#endif