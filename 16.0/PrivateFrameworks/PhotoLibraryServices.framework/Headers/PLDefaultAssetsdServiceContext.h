// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDEFAULTASSETSDSERVICECONTEXT_H
#define PLDEFAULTASSETSDSERVICECONTEXT_H

@class NSXPCConnection, NSString, NSError;
@protocol PLAssetsdServiceContext;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryBundle.h"
#import "PLAssetsdConnectionAuthorization.h"

@interface PLDefaultAssetsdServiceContext : NSObject <PLAssetsdServiceContext>

 {
    SEL _selector;
    NSXPCConnection *_connection;
    PLPhotoLibraryBundle *_libraryBundle;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}


@property (readonly, copy, nonatomic) NSString *clientDebugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotos;
@property (readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotosAdd;
@property (readonly, copy) NSError *shutdownReason;
@property (readonly) Class superclass;


-(BOOL)hasEntitlement:(id)arg0 ;
-(id)initWithSelector:(SEL)arg0 connection:(id)arg1 libraryBundle:(id)arg2 connectionAuthorization:(id)arg3 ;
-(id)libraryServicesManager;
-(void)awaitLibraryState:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)invalidateClientAuthorizationCache;


@end


#endif