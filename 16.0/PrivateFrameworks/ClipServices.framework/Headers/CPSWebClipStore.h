// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSWEBCLIPSTORE_H
#define CPSWEBCLIPSTORE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPSWebClipStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)_readWebClipDictionaryRepresentationFromDiskWithWebClipIdentifier:(id)arg0 ;
+(id)_urlForWebClipWithIdentifier:(id)arg0 ;
+(id)sharedStore;
-(BOOL)_redirectPoweredByWebClipsWithApplicationBundleIdentifier:(id)arg0 toParentApplicationBundleIdentifier:(id)arg1 errors:(*id)arg2 ;
-(BOOL)_removeWebClipWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)_removeWebClipsWithApplicationBundleIdentifier:(id)arg0 errors:(*id)arg1 ;
-(BOOL)_saveWebClip:(id)arg0 error:(*id)arg1 ;
-(id)_appClips;
-(id)_bookmarkWebClips;
-(id)_copyOrReplaceExistingFileAtPath:(id)arg0 withNewFileAtPath:(id)arg1 ;
-(id)_createOrUpdateExistingWebClipWithClipMetadata:(id)arg0 createdNewWebClip:(*BOOL)arg1 error:(*id)arg2 ;
-(id)_enumerateAndFilterClipsWithBlock:(id)arg0 ;
-(id)_fetchInstalledAppClips;
-(id)_init;
-(id)_removeFileFromPath:(id)arg0 ;
-(id)_webClipsBackedbyAppClipIdentifier:(id)arg0 ;
-(id)synchronouslyGetAppClipWithIdentifier:(id)arg0 ;
-(void)_reloadSpringBoardIconForWebClipWithIdentifier:(id)arg0 ;
-(void)createOrUpdateExistingWebClipWithMetadata:(id)arg0 comletionHandler:(id)arg1 ;
-(void)fetchAppClipsWithCompletionHandler:(id)arg0 ;
-(void)fetchBookmarkWebClipsWithCompletionHandler:(id)arg0 ;
-(void)getAppClipWithIdentifier:(id)arg0 receiveOnQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAppClipWithURLHash:(id)arg0 completionHandler:(id)arg1 ;
-(void)getWebClipWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)getWebClipsBackedbyAppClipIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)purgeDuplicateWebClipsWithCompletionHandler:(id)arg0 ;
-(void)redirectPoweredByWebClipsWithApplicationBundleIdentifier:(id)arg0 toParentApplicationBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)reloadSpringBoardIconForWebClipWithIdentifier:(id)arg0 ;
-(void)removeAppClipIconForWebClipWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeExpiredPoweredByWebClipsWithCompletionHandler:(id)arg0 ;
-(void)removePoweredByWebClipsLastActivatedBefore:(id)arg0 completion:(id)arg1 ;
-(void)removeWebClipWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeWebClipsWithApplicationBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeWebClipsWithApplicationBundleIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveWebClip:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateAppClipIcon:(id)arg0 forWebClipWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateWebClipTitle:(id)arg0 forAppClipBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif