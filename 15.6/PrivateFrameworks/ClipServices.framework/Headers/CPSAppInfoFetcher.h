// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSAPPINFOFETCHER_H
#define CPSAPPINFOFETCHER_H

@class NSCache, NSString;
@protocol CPSAppInfoFetching;

#import <Foundation/Foundation.h>


@interface CPSAppInfoFetcher : NSObject <CPSAppInfoFetching>

 {
    NSCache *_appMetadataByBundleID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_cachedIconFileURLForItemID:(id)arg0 ;
+(id)_sharedAMSBag;
-(id)init;
-(void)_downloadIconIfNeeded:(id)arg0 completionHandler:(id)arg1 ;
-(void)_lookUpClipDemoAMSMetadataWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)evictCachedMetadataForClipBundleID:(id)arg0 ;
-(void)lookUpClipMetadataByBundleID:(id)arg0 sourceBundleID:(id)arg1 URL:(id)arg2 downloadIconIfNeeded:(BOOL)arg3 skipCaching:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)lookUpClipMetadataByBundleID:(id)arg0 sourceBundleID:(id)arg1 downloadIconIfNeeded:(BOOL)arg2 skipCaching:(BOOL)arg3 completionHandler:(id)arg4 ;


@end


#endif