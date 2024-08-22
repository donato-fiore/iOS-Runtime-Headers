// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDMIGRATIONCLIENT_H
#define PLASSETSDMIGRATIONCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdMigrationClient : PLAssetsdBaseClient



-(void)cleanupModelForDataMigrationForRestoreType:(NSInteger)arg0 ;
-(void)dataMigrationWillFinish;
-(void)moveiPhotoLibraryMediaWithReply:(id)arg0 ;


@end


#endif