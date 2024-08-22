// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKAPPIMAGEMANAGER_H
#define MKAPPIMAGEMANAGER_H

@class NSCache, NSURLSession, geo_isolater, NSMapTable, NSMutableDictionary, NSString;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface MKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

 {
    NSCache *_iconCache;
    NSURLSession *_session;
    geo_isolater *_containersLock;
    NSMapTable *_containers;
    geo_isolater *_urlConnectionsLock;
    NSMutableDictionary *_urlConnections;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedCollectionCoverImageManager;
+(id)sharedImageManager;
-(id)cachedImageAtURL:(id)arg0 ;
-(id)initWithURLCache:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_dispatchOnManThread:(id)arg0 ;
-(void)cancelLoadAppImageAtURL:(id)arg0 ;
-(void)clearImageCache;
-(void)loadAppImageAtURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif