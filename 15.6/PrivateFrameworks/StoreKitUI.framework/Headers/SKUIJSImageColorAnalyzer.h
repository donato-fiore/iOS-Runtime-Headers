// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIJSIMAGECOLORANALYZER_H
#define SKUIJSIMAGECOLORANALYZER_H

@class IKJSObject, NSMutableDictionary, NSOperationQueue, NSString;
@protocol SKUIArtworkRequestDelegate, SKUIJSImageColorAnalyzer;


#import "SKUIClientContext.h"
#import "SKUIResourceLoader.h"

@interface SKUIJSImageColorAnalyzer : IKJSObject <SKUIArtworkRequestDelegate, SKUIJSImageColorAnalyzer>

 {
    SKUIClientContext *_clientContext;
    NSMutableDictionary *_artworkRequestIDsToManagedCallbacks;
    NSOperationQueue *_operationQueue;
    SKUIResourceLoader *_resourceLoader;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAppContext:(id)arg0 clientContext:(id)arg1 ;
-(void)analyzeImageAtUrl:(id)arg0 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;


@end


#endif