// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIROWMODEL_H
#define SEARCHUIROWMODEL_H

@class NSString, SFCardSection, NSArray, NSURL, SFSearchResult, NSUserActivity, SFCard;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SearchUIRowModel : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (retain, nonatomic) SFCardSection *cardSection; // ivar: _cardSection
@property (readonly, nonatomic) Class cellViewClass; // ivar: _cellViewClass
@property (readonly, nonatomic) Class collectionViewCellClass; // ivar: _collectionViewCellClass
@property (readonly, nonatomic) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly, nonatomic) NSString *coreSpotlightIdentifier;
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) NSString *dragAppBundleID; // ivar: _dragAppBundleID
@property (readonly, nonatomic) NSString *dragSubtitle; // ivar: _dragSubtitle
@property (readonly, nonatomic) NSString *dragText; // ivar: _dragText
@property (readonly, nonatomic) NSString *dragTitle; // ivar: _dragTitle
@property (readonly, nonatomic) NSURL *dragURL; // ivar: _dragURL
@property (readonly, nonatomic) NSString *fileProviderIdentifier;
@property (readonly, nonatomic) BOOL fillsBackgroundWithContent;
@property (readonly, nonatomic) BOOL hasLeadingImage; // ivar: _hasLeadingImage
@property (retain, nonatomic) SFSearchResult *identifyingResult; // ivar: _identifyingResult
@property (readonly, nonatomic) BOOL isDraggable; // ivar: _isDraggable
@property (readonly, nonatomic) BOOL isFocusable;
@property (readonly, nonatomic) BOOL isQuerySuggestion;
@property (readonly, nonatomic) BOOL isTappable; // ivar: _isTappable
@property (retain, nonatomic) NSUserActivity *launchActivity; // ivar: _launchActivity
@property (copy, nonatomic) NSString *launchActivityAppBundleId; // ivar: _launchActivityAppBundleId
@property (readonly, nonatomic) SFCard *nextCard; // ivar: _nextCard
@property (readonly, nonatomic) BOOL prefersNoSeparatorAbove; // ivar: _prefersNoSeparatorAbove
@property (copy, nonatomic) NSString *previewItemTitle; // ivar: _previewItemTitle
@property (readonly, nonatomic) NSArray *punchouts; // ivar: _punchouts
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (readonly, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic) int separatorStyle;
@property (readonly, nonatomic) BOOL supportsCustomUserReportRequestAfforance; // ivar: _supportsCustomUserReportRequestAfforance


-(BOOL)isEqualToModel:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCardSection:(id)arg0 queryId:(NSUInteger)arg1 ;
-(id)initWithResult:(id)arg0 ;
-(id)initWithResult:(id)arg0 cardSection:(id)arg1 queryId:(NSUInteger)arg2 ;
-(id)initWithResults:(id)arg0 ;
-(id)initWithResults:(id)arg0 cardSection:(id)arg1 queryId:(NSUInteger)arg2 ;
-(id)requestAppClipObjects;


@end


#endif