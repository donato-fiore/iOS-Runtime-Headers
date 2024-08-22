// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUANFASSETLOADER_H
#define NUANFASSETLOADER_H

@class FCAsyncOnceOperation, SXContext, NSMutableDictionary, FCFlintResourceManager, NSArray;

#import <Foundation/Foundation.h>


@interface NUANFAssetLoader : NSObject

@property (retain, nonatomic) FCAsyncOnceOperation *assetURLsOperation; // ivar: _assetURLsOperation
@property (readonly, nonatomic) FCAsyncOnceOperation *assetsOperation; // ivar: _assetsOperation
@property (retain, nonatomic) SXContext *context; // ivar: _context
@property (retain, nonatomic) NSMutableDictionary *fetchedResourceIDs; // ivar: _fetchedResourceIDs
@property (retain, nonatomic) FCFlintResourceManager *flintResourceManager; // ivar: _flintResourceManager
@property (nonatomic) NSInteger relativePriority; // ivar: _relativePriority
@property (retain, nonatomic) NSArray *resourceIDs; // ivar: _resourceIDs


-(id)assetDownloadOperationForResource:(id)arg0 completion:(id)arg1 ;
-(id)asyncLoadAssetURLsOnceWithCompletion:(id)arg0 ;
-(id)asyncLoadAssetsOnceWithCompletion:(id)arg0 ;
-(id)fallbackResourceForID:(id)arg0 ;
-(id)initWithContext:(id)arg0 flintResourceManager:(id)arg1 ;
-(id)loadAssetURLsWithCompletion:(id)arg0 ;
-(id)loadAssetWithURL:(id)arg0 completion:(id)arg1 ;
-(id)loadAssetsWithCompletion:(id)arg0 ;
-(id)resourceForID:(id)arg0 ;
-(id)resourceIDForResourceURL:(id)arg0 ;


@end


#endif