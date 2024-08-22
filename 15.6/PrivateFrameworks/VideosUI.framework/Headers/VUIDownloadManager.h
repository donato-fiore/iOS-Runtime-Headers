// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDOWNLOADMANAGER_H
#define VUIDOWNLOADMANAGER_H

@class NSString, NSPointerArray, NSArray, NSMutableArray;
@protocol TVPDownloadDelegate, TVPDownloadSessionDelegate;

#import <Foundation/Foundation.h>


@interface VUIDownloadManager : NSObject <TVPDownloadDelegate, TVPDownloadSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSPointerArray *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dialogBeingPresented; // ivar: _dialogBeingPresented
@property (readonly, nonatomic) NSArray *downloads;
@property (retain, nonatomic) NSMutableArray *failedDownloadsNeedingDialog; // ivar: _failedDownloadsNeedingDialog
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *mutableDownloads; // ivar: _mutableDownloads
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_anyDownloadsFailedDueToInvalidUserToken:(id)arg0 ;
-(id)_alertControllerForFailedDownloads:(id)arg0 ;
-(id)existingDownloadForCanonicalID:(id)arg0 ;
-(id)init;
-(void)_activeAccountDidChange:(id)arg0 ;
-(void)_configureDownloadFromUserPrefs:(id)arg0 allowCellular:(BOOL)arg1 quality:(NSInteger)arg2 ;
-(void)_isPlaybackUIBeingShownDidChange:(id)arg0 ;
-(void)_loadImageForImageInfoManagedObject:(id)arg0 imageType:(NSUInteger)arg1 download:(id)arg2 useForStorageSettings:(BOOL)arg3 ;
-(void)_loadImageForSeriesManagedObject:(id)arg0 imageType:(NSUInteger)arg1 download:(id)arg2 useForStorageSettings:(BOOL)arg3 ;
-(void)_loadImageForVideoManagedObject:(id)arg0 imageType:(NSUInteger)arg1 download:(id)arg2 useForStorageSettings:(BOOL)arg3 ;
-(void)_notifyDelegatesThatDownloadsDidChange;
-(void)_preflightDownloadForPresentingViewController:(id)arg0 contentAllowsCellularDownload:(BOOL)arg1 completion:(id)arg2 ;
-(void)_showDownloadErrorDialogIfAppropriate;
-(void)_showDownloadErrorDialogIfAppropriateAllowingSignInPrompt:(BOOL)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)addDownloadForVideoManagedObject:(id)arg0 allowCellular:(BOOL)arg1 quality:(NSInteger)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg3 ;
-(void)addDownloadOrRenewKeysForMediaItem:(id)arg0 allowCellular:(BOOL)arg1 quality:(NSInteger)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg3 ;
-(void)cancelAndRemoveDownloadForMediaItem:(id)arg0 ;
-(void)cancelDownloadForCanonicalID:(id)arg0 ;
-(void)dealloc;
-(void)download:(id)arg0 didChangeStateTo:(NSInteger)arg1 ;
-(void)download:(id)arg0 didDetermineMaximumResolution:(NSInteger)arg1 maximumVideoRange:(NSInteger)arg2 ;
-(void)download:(id)arg0 didReceiveTaskIdentifier:(id)arg1 ;
-(void)download:(id)arg0 willDownloadToURL:(id)arg1 ;
-(void)downloadSession:(id)arg0 didAddRestoredDownloads:(id)arg1 ;
-(void)fetchNewKeysForDownloadedVideoManagedObject:(id)arg0 ;
-(void)initializeDownloadManager;
-(void)preflightDownloadForLibraryMediaEntity:(id)arg0 presentingViewController:(id)arg1 contentAllowsCellularDownload:(BOOL)arg2 completion:(id)arg3 ;
-(void)preflightDownloadForTVPMediaItem:(id)arg0 presentingViewController:(id)arg1 contentAllowsCellularDownload:(BOOL)arg2 completion:(id)arg3 ;
-(void)preflightDownloadForVideosPlayable:(id)arg0 presentingViewController:(id)arg1 contentAllowsCellularDownload:(BOOL)arg2 completion:(id)arg3 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif