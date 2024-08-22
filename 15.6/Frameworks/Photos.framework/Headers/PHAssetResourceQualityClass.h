// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETRESOURCEQUALITYCLASS_H
#define PHASSETRESOURCEQUALITYCLASS_H

@class PLImageFormat;

#import <Foundation/Foundation.h>


@interface PHAssetResourceQualityClass : NSObject

@property (nonatomic) NSUInteger backingCPLResourceType; // ivar: _backingCPLResourceType
@property (retain, nonatomic) PLImageFormat *backingImageFormat; // ivar: _backingImageFormat
@property (readonly, nonatomic) *__CFString colorSpaceName; // ivar: _colorSpaceName
@property (readonly, nonatomic, getter=isCroppedToSquare) BOOL croppedToSquare; // ivar: _croppedToSquare
@property (readonly, nonatomic) NSUInteger maxNumberOfPixelsIfSquare; // ivar: _maxNumberOfPixelsIfSquare
@property (readonly, nonatomic) NSUInteger maxSideLengthIfSquare; // ivar: _maxSideLengthIfSquare
@property (readonly, nonatomic) NSUInteger metalPixelFormat; // ivar: _metalPixelFormat
@property (readonly, nonatomic, getter=isTable) BOOL table; // ivar: _table
@property (readonly, nonatomic, getter=isThumbnail) BOOL thumbnail;
@property (readonly, nonatomic) NSInteger thumbnailKind; // ivar: _thumbnailKind
@property (readonly, nonatomic, getter=isVideo) BOOL video; // ivar: _video


+(id)_cplDerivativeAssetResourceQualityClasses;
+(id)_thumbnailAssetResourceQualityClassesForCurrentDeviceInLibrary:(id)arg0 ;
+(id)allQualityClassesMatchingPredicate:(id)arg0 inLibrary:(id)arg1 ;
+(id)anyQualityClassMatchingPredicate:(id)arg0 inLibrary:(id)arg1 ;
+(id)assetResourceQualityClassesInLibrary:(id)arg0 ;
-(NSInteger)_compare:(id)arg0 ;
-(id)description;
-(id)initWithCPLResourceType:(NSUInteger)arg0 ;
-(id)initWithThumbnailFormat:(id)arg0 ;
-(id)tableThumbnailDataForAsset:(id)arg0 dataSpecification:(struct PHAssetResourceTableDataSpecification *)arg1 ;
-(id)tableThumbnailEntriesAtIndexes:(id)arg0 inLibrary:(id)arg1 ;
-(void)preheatDataForThumbnailIndexes:(id)arg0 inLibrary:(id)arg1 ;


@end


#endif