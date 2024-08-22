// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKAPPIMAGEMANAGER_H
#define HKAPPIMAGEMANAGER_H

@class NSURLSession, NSMapTable, NSMutableDictionary, NSString, NSCache;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

 {
    NSURLSession *_session;
    NSMapTable *_containers;
    NSMutableDictionary *_urlConnections;
    NSObject<OS_dispatch_queue> *_managerQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSCache *iconCache; // ivar: _iconCache
@property (retain) NSMutableDictionary *outstandingRequests; // ivar: _outstandingRequests
@property (readonly) Class superclass;


+(id)defaultAppIcon;
+(id)defaultAppIconTableUI;
+(id)sharedImageManager;
-(id)_queue_fetchIconFromLaunchServicesWithIdentifier:(id)arg0 ;
-(id)_queue_researchStudyIconForSource:(id)arg0 ;
-(id)_queue_synchronousLoadIconForSource:(id)arg0 ;
-(id)iconForDevice:(id)arg0 ;
-(id)iconForSource:(id)arg0 ;
-(id)init;
-(id)researchStudyIconForSource:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_dispatchResponsesForAppIconForIdentifier:(id)arg0 appImage:(id)arg1 ;
-(void)_enqueueRequestForAppIconForIdentifier:(id)arg0 ;
-(void)_queue_cacheAppIcon:(id)arg0 forIdentifier:(id)arg1 ;
-(void)_queue_loadAppIconForSource:(id)arg0 onCompletion:(id)arg1 ;
-(void)cacheAppIcon:(id)arg0 forIdentifier:(id)arg1 ;
-(void)clearImageCache;
-(void)loadAppImageAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadIconForSource:(id)arg0 completionHandler:(id)arg1 ;
// -(void)loadIconForSource:(id)arg0 syncHandler:(id)arg1 asyncHandler:(unk)arg2  ;


@end


#endif