// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSCLIPMETADATAREQUEST_H
#define CPSCLIPMETADATAREQUEST_H

@class NSString, NSURL;
@protocol CPSSessionProxyDelegate;

#import <Foundation/Foundation.h>

#import "CPSSessionProxy.h"
#import "CPSPromise.h"
#import "CPSSessionConfiguration.h"

@interface CPSClipMetadataRequest : NSObject <CPSSessionProxyDelegate>

 {
    NSString *_fullHash;
    NSURL *_requestURL;
    CPSSessionProxy *_sessionProxy;
    CPSPromise *_availabilityPromise;
    CPSPromise *_iconPromise;
    CPSPromise *_metadataPromise;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLikelyAvailable) BOOL likelyAvailable;
@property (readonly, nonatomic) CPSSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;


-(id)getClipMetadataSynchronously;
-(id)getDownloadedIconURLSynchronously;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 fallbackClipBundleID:(id)arg1 ;
-(id)initWithURLHash:(id)arg0 ;
-(void)_setUpSessionProxyAndPromisesWithURL:(id)arg0 fallbackClipBundleID:(id)arg1 ;
-(void)dealloc;
-(void)proxy:(id)arg0 didDetermineAvailability:(BOOL)arg1 ;
-(void)proxy:(id)arg0 didFinishLoadingWithError:(id)arg1 ;
-(void)proxy:(id)arg0 didRetrieveApplicationIcon:(id)arg1 ;
-(void)proxyDidRetrieveBusinessIcon:(id)arg0 ;
-(void)proxyDidUpdateMetadata:(id)arg0 ;
-(void)proxyRemoteServiceDidCrash:(id)arg0 ;
-(void)requestDownloadedIconWithMetadata:(id)arg0 completion:(id)arg1 ;
-(void)requestMetadataWithCompletion:(id)arg0 ;


@end


#endif