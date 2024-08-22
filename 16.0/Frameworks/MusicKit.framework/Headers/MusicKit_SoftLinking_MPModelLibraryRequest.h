// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELLIBRARYREQUEST_H
#define MUSICKIT_SOFTLINKING_MPMODELLIBRARYREQUEST_H

@class MPModelRequest, NSArray, NSString;



@interface MusicKit_SoftLinking_MPModelLibraryRequest : MPModelRequest

@property (copy, nonatomic) NSArray *allowedItemIdentifiers; // ivar: _allowedItemIdentifiers
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers; // ivar: _allowedSectionIdentifiers
@property (copy, nonatomic) NSString *itemFilterText; // ivar: _itemFilterText
@property (copy, nonatomic) NSArray *itemSortDescriptors; // ivar: _itemSortDescriptors
@property (nonatomic) _NSRange range; // ivar: _range
@property (copy, nonatomic) NSArray *scopedContainers; // ivar: _scopedContainers
@property (copy, nonatomic) NSString *sectionFilterText; // ivar: _sectionFilterText
@property (copy, nonatomic) NSArray *sectionSortDescriptors; // ivar: _sectionSortDescriptors
@property (nonatomic) id *underlyingRequest; // ivar: _underlyingRequest
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse; // ivar: _wantsDetailedKeepLocalRequestableResponse


-(id)initWithLegacyModelObject:(id)arg0 itemType:(NSInteger)arg1 properties:(id)arg2 ;
-(id)initWithLegacyModelObjectType:(NSInteger)arg0 itemKind:(id)arg1 allowedItemIdentifiers:(id)arg2 itemSortDescriptors:(id)arg3 itemFilterText:(id)arg4 itemPropertyFilters:(id)arg5 range:(struct _NSRange )arg6 wantsDetailedKeepLocalRequestableResponse:(BOOL)arg7 ignoreExplicitContentRestrictions:(BOOL)arg8 includeOnlyDownloadedContent:(BOOL)arg9 mediaLibrary:(id)arg10 ;
-(id)initWithLegacyModelObjectType:(NSInteger)arg0 sectionLegacyModelObjectType:(NSInteger)arg1 itemKind:(id)arg2 sectionKind:(id)arg3 allowedItemIdentifiers:(id)arg4 allowedSectionIdentifiers:(id)arg5 scopedContainers:(id)arg6 itemSortDescriptors:(id)arg7 sectionSortDescriptors:(id)arg8 itemFilterText:(id)arg9 sectionFilterText:(id)arg10 itemPropertyFilters:(id)arg11 sectionPropertyFilters:(id)arg12 range:(struct _NSRange )arg13 wantsDetailedKeepLocalRequestableResponse:(BOOL)arg14 ignoreExplicitContentRestrictions:(BOOL)arg15 includeOnlyDownloadedContent:(BOOL)arg16 mediaLibrary:(id)arg17 ;
-(void)performWithCompletionHandler:(id)arg0 ;


@end


#endif