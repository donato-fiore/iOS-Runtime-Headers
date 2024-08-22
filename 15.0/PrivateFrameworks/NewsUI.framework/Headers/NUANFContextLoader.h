// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUANFCONTEXTLOADER_H
#define NUANFCONTEXTLOADER_H

@class FCANFContent, FCAsyncOnceOperation, SXContext, NSString, FCFlintResourceManager, NSOperationQueue;
@protocol SXResourceDataSource, FCHeadlineProviding, SXHost, NUArticleResourceURLTranslator;

#import <Foundation/Foundation.h>

#import "NUANFAssetLoader.h"

@interface NUANFContextLoader : NSObject <SXResourceDataSource>



@property (readonly, nonatomic) FCANFContent *anfContent; // ivar: _anfContent
@property (retain, nonatomic) NUANFAssetLoader *assetLoader; // ivar: _assetLoader
@property (retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // ivar: _asyncOnceOperation
@property (retain, nonatomic) SXContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FCFlintResourceManager *flintResourceManager; // ivar: _flintResourceManager
@property (readonly, nonatomic) BOOL hasLoaded; // ivar: _hasLoaded
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
@property (readonly, nonatomic) NSObject<SXHost> *host; // ivar: _host
@property (readonly, nonatomic) NSOperationQueue *imageDecodingQueue; // ivar: _imageDecodingQueue
@property (readonly, nonatomic) NSObject<NUArticleResourceURLTranslator> *resourceURLTranslator; // ivar: _resourceURLTranslator
@property (readonly) Class superclass;


-(id)asyncLoadContextOnceWithCompletion:(id)arg0 ;
-(id)fallbackResourceForImageRequest:(id)arg0 originalResource:(id)arg1 ;
-(id)initWithANFContent:(id)arg0 flintResourceManager:(id)arg1 host:(id)arg2 resourceURLTranslator:(id)arg3 headline:(id)arg4 ;
-(id)loadContextWithCompletion:(id)arg0 ;
-(id)loadImagesForImageRequest:(SEL)arg0 completionBlock:(id)arg1 ;
-(id)translateURL:(id)arg0 ;
// -(void)fileURLForURL:(id)arg0 onCompletion:(id)arg1 onError:(unk)arg2  ;


@end


#endif