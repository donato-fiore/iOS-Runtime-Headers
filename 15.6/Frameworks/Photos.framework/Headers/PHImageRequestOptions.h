// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHIMAGEREQUESTOPTIONS_H
#define PHIMAGEREQUESTOPTIONS_H

@class NSString;
@protocol PHMediaRequestThreadingOptions, NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PHImageRequestOptions : NSObject <PHMediaRequestThreadingOptions, NSCopying>

 {
    int _requestID;
}


@property (nonatomic) BOOL allowPlaceholder; // ivar: _allowPlaceholder
@property (nonatomic) BOOL allowSecondaryOpportunisticImage; // ivar: _allowSecondaryOpportunisticImage
@property (copy, nonatomic) id *cachingCompleteHandler; // ivar: _cachingCompleteHandler
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger deliveryMode; // ivar: _deliveryMode
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger downloadIntent; // ivar: _downloadIntent
@property (nonatomic) NSInteger downloadPriority; // ivar: _downloadPriority
@property (nonatomic) CGSize fallbackTargetSizeIfRequestedSizeNotLocallyAvailable; // ivar: _fallbackTargetSizeIfRequestedSizeNotLocallyAvailable
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeHDRGainMap; // ivar: _includeHDRGainMap
@property (nonatomic) BOOL includeHDRGainMapInIntermediateImage; // ivar: _includeHDRGainMapInIntermediateImage
@property (nonatomic) NSInteger loadingMode; // ivar: _loadingMode
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (nonatomic) CGRect normalizedCropRect; // ivar: _normalizedCropRect
@property (nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing; // ivar: _onlyUseFetchedAssetPropertiesDuringChoosing
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) NSInteger resizeMode; // ivar: _resizeMode
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // ivar: _resultHandlerQueue
@property (readonly) Class superclass;
@property (nonatomic, getter=isSynchronous) BOOL synchronous; // ivar: _synchronous
@property (nonatomic) BOOL useLimitedLibraryMode; // ivar: _useLimitedLibraryMode
@property (nonatomic) BOOL useLowMemoryMode; // ivar: _useLowMemoryMode
@property (nonatomic) NSInteger version; // ivar: _version


+(id)defaultOptionsAllowingPlaceholder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif