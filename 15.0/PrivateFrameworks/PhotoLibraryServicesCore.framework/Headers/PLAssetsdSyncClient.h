// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDSYNCCLIENT_H
#define PLASSETSDSYNCCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdSyncClient : PLAssetsdBaseClient



-(void)finalizeOTARestoreRecreatingAlbums:(BOOL)arg0 ;
-(void)updateRestoredAssetWithUUID:(id)arg0 paths:(id)arg1 fixAddedDate:(BOOL)arg2 ;


@end


#endif