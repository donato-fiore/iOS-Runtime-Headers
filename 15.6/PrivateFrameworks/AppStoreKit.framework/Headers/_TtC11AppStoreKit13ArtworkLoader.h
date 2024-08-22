// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC11APPSTOREKIT13ARTWORKLOADER_H
#define _TTC11APPSTOREKIT13ARTWORKLOADER_H

@class SwiftObject;
@protocol ASKImageRequestDelegate;



@interface _TtC11AppStoreKit13ArtworkLoader : SwiftObject <ASKImageRequestDelegate>

 {
    ? resourceLoader;
    ? accessQueue;
    ? completionHandlers;
    ? requestCompletionMap;
    ? renderIntent;
    ? resourceLoadOperationSchemeMapping;
    ? isOccluded;
    ? assetObserver;
}




-(void)imageRequest:(id)arg0 didFailWithError:(id)arg1 ;
-(void)imageRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)resourceLoaderDidBeginLoading;
-(void)resourceLoaderDidIdle;
-(void)resourceLoaderDidLoadAllForReason:(id)arg0 ;


@end


#endif