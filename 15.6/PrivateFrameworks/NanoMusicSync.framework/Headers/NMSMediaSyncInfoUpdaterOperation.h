// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMEDIASYNCINFOUPDATEROPERATION_H
#define NMSMEDIASYNCINFOUPDATEROPERATION_H

@class MPAsyncOperation, NSDictionary;



@interface NMSMediaSyncInfoUpdaterOperation : MPAsyncOperation

@property (readonly, nonatomic) NSDictionary *syncInfo; // ivar: _syncInfo


+(id)sharedLibraryRequestQueue;
-(id)_fetchRequestForSyncInfoWithFetchRequest:(id)arg0 ;
-(id)_fetchRequestForSyncInfoWithPredicate:(id)arg0 ;
-(void)_updatePodcastsSyncInfo:(id)arg0 forEpisode:(id)arg1 withDownloadInfoIdentifiers:(id)arg2 ;
-(void)execute;


@end


#endif