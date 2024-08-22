// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDLIBRARYMANAGEMENTSERVICE_H
#define PLASSETSDLIBRARYMANAGEMENTSERVICE_H

@class NSString;
@protocol PLAssetsdLibraryManagementServiceProtocol;

#import <Foundation/Foundation.h>

#import "PLAssetsdConnectionAuthorization.h"
#import "PLPhotoLibraryBundleController.h"

@interface PLAssetsdLibraryManagementService : NSObject <PLAssetsdLibraryManagementServiceProtocol>

 {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    PLPhotoLibraryBundleController *_bundleController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_deleteLibraryFromFilesystemAtURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithConnectionAuthorization:(id)arg0 bundleController:(id)arg1 ;
-(void)_closePhotoLibraryAtURL:(id)arg0 delete:(BOOL)arg1 reply:(id)arg2 ;
-(void)closeAndDeletePhotoLibraryAtURL:(id)arg0 reply:(id)arg1 ;
-(void)closePhotoLibraryAtURL:(id)arg0 reply:(id)arg1 ;
-(void)getActivePhotoLibrariesWithReply:(id)arg0 ;
-(void)getPhotoLibraryURLsWithLibraryURL:(id)arg0 reply:(id)arg1 ;
-(void)resetSyndicationLibraryWithReply:(id)arg0 ;
-(void)setSystemPhotoLibraryURL:(id)arg0 sandboxExtension:(id)arg1 options:(unsigned short)arg2 reply:(id)arg3 ;


@end


#endif