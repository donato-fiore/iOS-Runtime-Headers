// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLHLSAUDIOBOOKFETCHER_H
#define BLHLSAUDIOBOOKFETCHER_H

@class NSURLSession;

#import <Foundation/Foundation.h>


@interface BLHLSAudiobookFetcher : NSObject

@property (readonly, nonatomic) NSURLSession *session; // ivar: _session


+(id)preferredStreamFromMasterPlaylist:(id)arg0 ;
-(id)initCanUseCellularData:(BOOL)arg0 powerRequired:(BOOL)arg1 bundleID:(id)arg2 ;
-(id)setupDownloadTaskForFetchingMasterPlaylistAndSelectingStreamFromMasterPlaylistURL:(id)arg0 completion:(id)arg1 ;
-(void)getRacGUIDFromMasterPlaylistURL:(id)arg0 completion:(id)arg1 ;


@end


#endif