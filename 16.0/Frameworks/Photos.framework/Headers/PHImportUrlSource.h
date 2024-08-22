// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMPORTURLSOURCE_H
#define PHIMPORTURLSOURCE_H

@class NSMutableSet, NSString, NSArray, NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "PHImportSource.h"

@interface PHImportUrlSource : PHImportSource {
    NSObject<OS_dispatch_queue> *_pendingAssetDataRequestQueue;
    NSObject<OS_dispatch_queue> *_activeAssetDataRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentAssetDataRequestSemaphore;
    NSMutableSet *_accessedURLs;
    NSString *_prefix;
}


@property (retain, nonatomic) NSArray *baseNames; // ivar: _baseNames
@property (nonatomic) BOOL isReadonlyVolume; // ivar: _isReadonlyVolume
@property (retain, nonatomic) NSDictionary *resourcePathsByIdentifier; // ivar: _resourcePathsByIdentifier
@property (retain, nonatomic) NSArray *urls; // ivar: _urls


+(BOOL)treatAsReadonlyVolume:(id)arg0 ;
-(BOOL)canReference;
-(BOOL)containsSupportedMediaWithImportExceptions:(*id)arg0 ;
-(BOOL)isAvailable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToImportUrlSource:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetsByProcessingItem:(id)arg0 ;
-(id)initWithUrls:(id)arg0 ;
-(id)name;
-(id)path;
-(id)prefix;
-(id)productKind;
-(id)resourcePathsInUrls:(id)arg0 ;
-(id)rootUrlOfUrls:(id)arg0 ;
-(id)volumePath;
-(void)beginProcessingWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)dispatchAssetDataRequestAsyncUsingBlock:(id)arg0 ;
-(void)endWork;
-(void)setPrefix:(id)arg0 ;


@end


#endif