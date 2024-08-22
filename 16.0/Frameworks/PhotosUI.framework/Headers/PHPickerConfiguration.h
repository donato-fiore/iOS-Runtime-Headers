// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHPICKERCONFIGURATION_H
#define PHPICKERCONFIGURATION_H

@class NSArray, PHPhotoLibrary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_PHPickerCollectionConfiguration.h"
#import "PHPickerFilter.h"

@interface PHPickerConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, setter=_setAllowsContinuousSelection:) BOOL _allowsContinuousSelection; // ivar: __allowsContinuousSelection
@property (nonatomic, setter=_setAllowsDownscaling:) BOOL _allowsDownscaling; // ivar: __allowsDownscaling
@property (nonatomic, setter=_setAlwaysShowLoadingPlaceholder:) BOOL _alwaysShowLoadingPlaceholder; // ivar: __alwaysShowLoadingPlaceholder
@property (nonatomic, setter=_setExcludesHiddenAlbum:) BOOL _excludesHiddenAlbum; // ivar: __excludesHiddenAlbum
@property (nonatomic, setter=_setExcludesSharedAlbums:) BOOL _excludesSharedAlbums; // ivar: __excludesSharedAlbums
@property (copy, nonatomic, setter=_setFollowupPeopleConfigurations:) NSArray *_followupPeopleConfigurations; // ivar: __followupPeopleConfigurations
@property (readonly, nonatomic) BOOL _isEmbeddedLayout;
@property (readonly, nonatomic) BOOL _onlyReturnsIdentifiers; // ivar: __onlyReturnsIdentifiers
@property (retain, nonatomic, setter=_setPeopleConfiguration:) _PHPickerCollectionConfiguration *_peopleConfiguration; // ivar: __peopleConfiguration
@property (nonatomic, setter=_showsPortraitWallpaperSuggestion:) BOOL _showsPortraitWallPaperSuggestions; // ivar: __showsPortraitWallPaperSuggestions
@property (nonatomic, setter=_setShowsWallpaperSuggestions:) BOOL _showsWallpaperSuggestions; // ivar: __showsWallpaperSuggestions
@property (nonatomic, setter=_setUsesEmbeddedMessagesLayout:) BOOL _usesEmbeddedMessagesLayout; // ivar: __usesEmbeddedMessagesLayout
@property (readonly, nonatomic) BOOL _usesOpenPanelLayout; // ivar: __usesOpenPanelLayout
@property (copy, nonatomic) PHPickerFilter *filter; // ivar: _filter
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (nonatomic) NSInteger preferredAssetRepresentationMode; // ivar: _preferredAssetRepresentationMode
@property (copy, nonatomic) NSArray *preselectedAssetIdentifiers; // ivar: _preselectedAssetIdentifiers
@property (nonatomic) NSInteger selection; // ivar: _selection
@property (nonatomic) NSInteger selectionLimit; // ivar: _selectionLimit


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)initWithPhotoLibraryAndOnlyForOpenPanel:(id)arg0 ;
-(id)initWithPhotoLibraryAndOnlyReturnsIdentifiers:(id)arg0 ;
-(void)_showsPortraitWallpaperSuggestion:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif