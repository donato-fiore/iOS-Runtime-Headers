// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHIMAGEREQUESTBEHAVIORSPEC_H
#define PHIMAGEREQUESTBEHAVIORSPEC_H


#import <Foundation/Foundation.h>


@interface PHImageRequestBehaviorSpec : NSObject

@property (nonatomic) BOOL allowPlaceholder; // ivar: _allowPlaceholder
@property (nonatomic) BOOL cannotReturnSmallerImage; // ivar: _cannotReturnSmallerImage
@property (nonatomic) NSInteger choosingPolicy; // ivar: _choosingPolicy
@property (nonatomic) NSInteger downloadIntent; // ivar: _downloadIntent
@property (nonatomic) NSInteger downloadPriority; // ivar: _downloadPriority
@property (nonatomic) BOOL includeHDRGainMap; // ivar: _includeHDRGainMap
@property (nonatomic) BOOL includeHDRGainMapInIntermediateImage; // ivar: _includeHDRGainMapInIntermediateImage
@property (nonatomic) NSUInteger loadingOptions; // ivar: _loadingOptions
@property (nonatomic) CGFloat minimumTableThumbnailLongSide; // ivar: _minimumTableThumbnailLongSide
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing; // ivar: _onlyUseFetchedAssetPropertiesDuringChoosing
@property (nonatomic) NSInteger resizeMode; // ivar: _resizeMode
@property (nonatomic, getter=isSynchronous) BOOL synchronous; // ivar: _synchronous
@property (nonatomic) BOOL useLimitedLibraryMode; // ivar: _useLimitedLibraryMode
@property (nonatomic) BOOL useLowMemoryMode; // ivar: _useLowMemoryMode
@property (nonatomic) NSInteger version; // ivar: _version


+(NSUInteger)loadingOptionsFromLoadingMode:(NSInteger)arg0 ;
-(BOOL)isExplicitUserAction;
-(BOOL)shouldLoadData;
-(BOOL)shouldLoadDataOrURL;
-(BOOL)shouldLoadImage;
-(BOOL)shouldLoadURL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)shortDescription;


@end


#endif