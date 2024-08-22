// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSDLIBRARYMANAGEMENTCLIENT_H
#define PLASSETSDLIBRARYMANAGEMENTCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient



-(BOOL)closeAndDeletePhotoLibraryAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)closePhotoLibraryAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)overrideSystemPhotoLibraryURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)removePhotoLibraryURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetSyndicationLibrary:(*id)arg0 ;
-(BOOL)setSystemPhotoLibraryURL:(id)arg0 error:(*id)arg1 ;
-(id)activePhotoLibraries:(*id)arg0 ;
-(void)getPhotoLibraryURLsWithLibraryURL:(id)arg0 reply:(id)arg1 ;


@end


#endif