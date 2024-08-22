// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCARDSECTIONVALUE_H
#define SFCARDSECTIONVALUE_H

@class NSString, NSDictionary, NSData;
@protocol SFCardSectionValue, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFActivityIndicatorCardSection.h"
#import "SFAppLinkCardSection.h"
#import "SFAttributionFooterCardSection.h"
#import "SFAudioPlaybackCardSection.h"
#import "SFButtonCardSection.h"
#import "SFCollectionCardSection.h"
#import "SFColorBarCardSection.h"
#import "SFCombinedCardSection.h"
#import "SFCompactRowCardSection.h"
#import "SFDescriptionCardSection.h"
#import "SFDetailedRowCardSection.h"
#import "SFFindMyCardSection.h"
#import "SFFlightCardSection.h"
#import "SFGridCardSection.h"
#import "SFHeroCardSection.h"
#import "SFHorizontalButtonCardSection.h"
#import "SFHorizontalScrollCardSection.h"
#import "SFImagesCardSection.h"
#import "SFInfoCardSection.h"
#import "SFKeyValueDataCardSection.h"
#import "SFLinkPresentationCardSection.h"
#import "SFListenToCardSection.h"
#import "SFMapCardSection.h"
#import "SFMapPlaceCardSection.h"
#import "SFMapsDetailedRowCardSection.h"
#import "SFMediaInfoCardSection.h"
#import "SFMediaPlayerCardSection.h"
#import "SFMediaRemoteControlCardSection.h"
#import "SFMessageCardSection.h"
#import "SFMetaInfoCardSection.h"
#import "SFMiniCardSection.h"
#import "SFNewsCardSection.h"
#import "SFNowPlayingCardSection.h"
#import "SFPersonHeaderCardSection.h"
#import "SFProductCardSection.h"
#import "SFResponseWrapperCardSection.h"
#import "SFRichTitleCardSection.h"
#import "SFRowCardSection.h"
#import "SFScoreboardCardSection.h"
#import "SFSectionHeaderCardSection.h"
#import "SFSelectableGridCardSection.h"
#import "SFSocialMediaPostCardSection.h"
#import "SFSplitCardSection.h"
#import "SFStockChartCardSection.h"
#import "SFStrokeAnimationCardSection.h"
#import "SFSuggestionCardSection.h"
#import "SFTableHeaderRowCardSection.h"
#import "SFTableRowCardSection.h"
#import "SFTextColumnsCardSection.h"
#import "SFTitleCardSection.h"
#import "SFTrackListCardSection.h"
#import "SFVerticalLayoutCardSection.h"
#import "SFWatchListCardSection.h"
#import "SFWatchNowCardSection.h"
#import "SFWebCardSection.h"
#import "SFWorldMapCardSection.h"

@interface SFCardSectionValue : NSObject <SFCardSectionValue, NSSecureCoding, NSCopying>



@property (retain, nonatomic) SFActivityIndicatorCardSection *activityIndicatorCardSection; // ivar: _activityIndicatorCardSection
@property (retain, nonatomic) SFAppLinkCardSection *appLinkCardSection; // ivar: _appLinkCardSection
@property (retain, nonatomic) SFAttributionFooterCardSection *attributionFooterCardSection; // ivar: _attributionFooterCardSection
@property (retain, nonatomic) SFAudioPlaybackCardSection *audioPlaybackCardSection; // ivar: _audioPlaybackCardSection
@property (retain, nonatomic) SFButtonCardSection *buttonCardSection; // ivar: _buttonCardSection
@property (retain, nonatomic) SFCollectionCardSection *collectionCardSection; // ivar: _collectionCardSection
@property (retain, nonatomic) SFColorBarCardSection *colorBarCardSection; // ivar: _colorBarCardSection
@property (retain, nonatomic) SFCombinedCardSection *combinedCardSection; // ivar: _combinedCardSection
@property (retain, nonatomic) SFCompactRowCardSection *compactRowCardSection; // ivar: _compactRowCardSection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SFDescriptionCardSection *descriptionCardSection; // ivar: _descriptionCardSection
@property (retain, nonatomic) SFDetailedRowCardSection *detailedRowCardSection; // ivar: _detailedRowCardSection
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) SFFindMyCardSection *findMyCardSection; // ivar: _findMyCardSection
@property (retain, nonatomic) SFFlightCardSection *flightCardSection; // ivar: _flightCardSection
@property (retain, nonatomic) SFGridCardSection *gridCardSection; // ivar: _gridCardSection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFHeroCardSection *heroCardSection; // ivar: _heroCardSection
@property (retain, nonatomic) SFHorizontalButtonCardSection *horizontalButtonCardSection; // ivar: _horizontalButtonCardSection
@property (retain, nonatomic) SFHorizontalScrollCardSection *horizontalScrollCardSection; // ivar: _horizontalScrollCardSection
@property (retain, nonatomic) SFImagesCardSection *imagesCardSection; // ivar: _imagesCardSection
@property (retain, nonatomic) SFInfoCardSection *infoCardSection; // ivar: _infoCardSection
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFKeyValueDataCardSection *keyValueDataCardSection; // ivar: _keyValueDataCardSection
@property (retain, nonatomic) SFLinkPresentationCardSection *linkPresentationCardSection; // ivar: _linkPresentationCardSection
@property (retain, nonatomic) SFListenToCardSection *listenToCardSection; // ivar: _listenToCardSection
@property (retain, nonatomic) SFMapCardSection *mapCardSection; // ivar: _mapCardSection
@property (retain, nonatomic) SFMapPlaceCardSection *mapPlaceCardSection; // ivar: _mapPlaceCardSection
@property (retain, nonatomic) SFMapsDetailedRowCardSection *mapsDetailedRowCardSection; // ivar: _mapsDetailedRowCardSection
@property (retain, nonatomic) SFMediaInfoCardSection *mediaInfoCardSection; // ivar: _mediaInfoCardSection
@property (retain, nonatomic) SFMediaPlayerCardSection *mediaPlayerCardSection; // ivar: _mediaPlayerCardSection
@property (retain, nonatomic) SFMediaRemoteControlCardSection *mediaRemoteControlCardSection; // ivar: _mediaRemoteControlCardSection
@property (retain, nonatomic) SFMessageCardSection *messageCardSection; // ivar: _messageCardSection
@property (retain, nonatomic) SFMetaInfoCardSection *metaInfoCardSection; // ivar: _metaInfoCardSection
@property (retain, nonatomic) SFMiniCardSection *miniCardSection; // ivar: _miniCardSection
@property (retain, nonatomic) SFNewsCardSection *newsCardSection; // ivar: _newsCardSection
@property (retain, nonatomic) SFNowPlayingCardSection *nowPlayingCardSection; // ivar: _nowPlayingCardSection
@property (retain, nonatomic) SFPersonHeaderCardSection *personHeaderCardSection; // ivar: _personHeaderCardSection
@property (retain, nonatomic) SFProductCardSection *productCardSection; // ivar: _productCardSection
@property (retain, nonatomic) SFResponseWrapperCardSection *responseWrapperCardSection; // ivar: _responseWrapperCardSection
@property (retain, nonatomic) SFRichTitleCardSection *richTitleCardSection; // ivar: _richTitleCardSection
@property (retain, nonatomic) SFRowCardSection *rowCardSection; // ivar: _rowCardSection
@property (retain, nonatomic) SFScoreboardCardSection *scoreboardCardSection; // ivar: _scoreboardCardSection
@property (retain, nonatomic) SFSectionHeaderCardSection *sectionHeaderCardSection; // ivar: _sectionHeaderCardSection
@property (retain, nonatomic) SFSelectableGridCardSection *selectableGridCardSection; // ivar: _selectableGridCardSection
@property (retain, nonatomic) SFSocialMediaPostCardSection *socialMediaPostCardSection; // ivar: _socialMediaPostCardSection
@property (retain, nonatomic) SFSplitCardSection *splitCardSection; // ivar: _splitCardSection
@property (retain, nonatomic) SFStockChartCardSection *stockChartCardSection; // ivar: _stockChartCardSection
@property (retain, nonatomic) SFStrokeAnimationCardSection *strokeAnimationCardSection; // ivar: _strokeAnimationCardSection
@property (retain, nonatomic) SFSuggestionCardSection *suggestionCardSection; // ivar: _suggestionCardSection
@property (readonly) Class superclass;
@property (retain, nonatomic) SFTableHeaderRowCardSection *tableHeaderRowCardSection; // ivar: _tableHeaderRowCardSection
@property (retain, nonatomic) SFTableRowCardSection *tableRowCardSection; // ivar: _tableRowCardSection
@property (retain, nonatomic) SFTextColumnsCardSection *textColumnsCardSection; // ivar: _textColumnsCardSection
@property (retain, nonatomic) SFTitleCardSection *titleCardSection; // ivar: _titleCardSection
@property (retain, nonatomic) SFTrackListCardSection *trackListCardSection; // ivar: _trackListCardSection
@property (retain, nonatomic) SFVerticalLayoutCardSection *verticalLayoutCardSection; // ivar: _verticalLayoutCardSection
@property (retain, nonatomic) SFWatchListCardSection *watchListCardSection; // ivar: _watchListCardSection
@property (retain, nonatomic) SFWatchNowCardSection *watchNowCardSection; // ivar: _watchNowCardSection
@property (retain, nonatomic) SFWebCardSection *webCardSection; // ivar: _webCardSection
@property (retain, nonatomic) SFWorldMapCardSection *worldMapCardSection; // ivar: _worldMapCardSection


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif