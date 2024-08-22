// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLDOWNLOADQUEUE_H
#define BLDOWNLOADQUEUE_H

@class BLDownloadQueueNonUI;



@interface BLDownloadQueue : BLDownloadQueueNonUI



+(id)sharedInstance;
-(id)init;
-(void)addDownloadsWithManifestRequest:(id)arg0 uiManager:(id)arg1 completion:(id)arg2 ;
-(void)purchaseWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)purchaseWithRequest:(id)arg0 uiManager:(id)arg1 completion:(id)arg2 ;
-(void)setAutomaticDownloadEnabled:(BOOL)arg0 uiManager:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif