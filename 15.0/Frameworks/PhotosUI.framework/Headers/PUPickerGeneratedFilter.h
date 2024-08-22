// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPICKERGENERATEDFILTER_H
#define PUPICKERGENERATEDFILTER_H

@class NSPredicate;

#import <Foundation/Foundation.h>


@interface PUPickerGeneratedFilter : NSObject

@property (readonly, nonatomic) BOOL allowsAlbums; // ivar: _allowsAlbums
@property (readonly, nonatomic) BOOL allowsSearch; // ivar: _allowsSearch
@property (readonly, copy, nonatomic) NSPredicate *assetPredicate; // ivar: _assetPredicate
@property (readonly, nonatomic) NSInteger displayAssetMediaType;
@property (readonly, nonatomic) NSUInteger genericAssetTypes;
@property (readonly, nonatomic) NSInteger noContentPlaceholderType;
@property (readonly, nonatomic) NSUInteger possibleAssetTypes; // ivar: _possibleAssetTypes
@property (readonly, nonatomic) BOOL pu_legacy_mediaTypesIncludesLivePhoto; // ivar: _pu_legacy_mediaTypesIncludesLivePhoto
@property (readonly, nonatomic) NSUInteger requiredAssetTypes; // ivar: _requiredAssetTypes
@property (readonly, nonatomic) NSUInteger searchQueryFilterOptions;


+(id)_excludingLoopingVideosFilter;
+(id)_excludingStreamedVideosFilter;
+(id)_imagesFilter;
+(id)_loopingVideosFilter;
+(id)_pu_legacy_filterForUIImagePickerControllerMediaTypes:(id)arg0 ;
+(id)_videosFilter;
-(NSInteger)displayAssetMediaTypeConsideringAssetObjectIDs:(id)arg0 photoLibrary:(id)arg1 ;
-(id)init;
-(id)initWithFilter:(id)arg0 ;
-(id)initWithUIImagePickerControllerMediaTypes:(id)arg0 ;


@end


#endif