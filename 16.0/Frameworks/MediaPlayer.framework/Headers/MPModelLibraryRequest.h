// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELLIBRARYREQUEST_H
#define MPMODELLIBRARYREQUEST_H

@class NSArray, NSString;
@protocol MPModelRequestDetailedKeepLocalStatusRequesting;


#import "MPModelRequest.h"
#import "MPMediaQuery.h"
#import "MPMediaLibrary.h"

@interface MPModelLibraryRequest : MPModelRequest <MPModelRequestDetailedKeepLocalStatusRequesting>



@property (copy, nonatomic) NSArray *allowedItemIdentifiers; // ivar: _allowedItemIdentifiers
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers; // ivar: _allowedSectionIdentifiers
@property (nonatomic) _NSRange contentRange; // ivar: _contentRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableImplicitSectioning; // ivar: _disableImplicitSectioning
@property (copy, nonatomic) NSString *filterText; // ivar: _filterText
@property (nonatomic) NSUInteger filteringOptions; // ivar: _filteringOptions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isUpgradedSmartPlaylistLegacyMediaQuery; // ivar: _isUpgradedSmartPlaylistLegacyMediaQuery
@property (copy, nonatomic) NSArray *itemPropertyFilters; // ivar: _itemPropertyFilters
@property (copy, nonatomic) MPMediaQuery *legacyMediaQuery; // ivar: _legacyMediaQuery
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (copy, nonatomic) NSArray *scopedContainers; // ivar: _scopedContainers
@property (copy, nonatomic) NSString *sectionFilterText; // ivar: _sectionFilterText
@property (copy, nonatomic) NSArray *sectionPropertyFilters; // ivar: _sectionPropertyFilters
@property (nonatomic) BOOL sortUsingAllowedItemIdentifiers; // ivar: _sortUsingAllowedItemIdentifiers
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse; // ivar: _wantsDetailedKeepLocalRequestableResponse


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)itemTranslationContext;
-(id)newOperationWithResponseHandler:(id)arg0 ;
-(id)sectionTranslationContext;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif