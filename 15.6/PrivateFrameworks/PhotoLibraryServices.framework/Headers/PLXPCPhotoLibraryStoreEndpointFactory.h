// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLXPCPHOTOLIBRARYSTOREENDPOINTFACTORY_H
#define PLXPCPHOTOLIBRARYSTOREENDPOINTFACTORY_H

@class NSURL, PLAssetsdClient, NSString;
@protocol NSXPCStoreServerEndpointFactory;

#import <Foundation/Foundation.h>


@interface PLXPCPhotoLibraryStoreEndpointFactory : NSObject <NSXPCStoreServerEndpointFactory>

 {
    NSURL *_libraryURL;
    PLAssetsdClient *_assetsdClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAssetsdClient:(id)arg0 ;
-(id)newEndpoint;


@end


#endif