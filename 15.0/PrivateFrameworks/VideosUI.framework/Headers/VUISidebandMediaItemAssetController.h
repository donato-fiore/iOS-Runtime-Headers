// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUISIDEBANDMEDIAITEMASSETCONTROLLER_H
#define VUISIDEBANDMEDIAITEMASSETCONTROLLER_H

@class NSString, TVPDownload;
@protocol VUIDownloadManagerDelegate, TVPDownloadDelegate, VUIMediaEntityAssetController, OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

#import <Foundation/Foundation.h>

#import "VUIMediaEntityType.h"
#import "VUIMediaEntityAssetControllerState.h"
#import "VUIVideoManagedObject.h"

@interface VUISidebandMediaItemAssetController : NSObject <VUIDownloadManagerDelegate, TVPDownloadDelegate, VUIMediaEntityAssetController>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal; // ivar: _completionDispatchQueueInternal
@property (readonly, nonatomic) BOOL contentAllowsCellularDownload;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIMediaEntityAssetControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<VUIMediaEntityAssetControllerDelegate> *delegateInternal; // ivar: _delegateInternal
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TVPDownload *downloadInternal; // ivar: _downloadInternal
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifierInternal; // ivar: _mediaEntityIdentifierInternal
@property (readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) VUIMediaEntityAssetControllerState *stateInternal; // ivar: _stateInternal
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsRedownloadingContent;
@property (readonly, nonatomic) BOOL supportsStartingDownload;
@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObjectInternal; // ivar: _videoManagedObjectInternal


-(id)initWithVideoManagedObject:(id)arg0 mediaEntityIdentifier:(id)arg1 ;
-(void)_updateDownloadStateAndNotifyDelegates;
-(void)_updateObservedDownload;
-(void)cancelAndRemoveDownload;
-(void)cancelKeyFetch;
-(void)dealloc;
-(void)deleteAndRedownloadAllowingCellular:(BOOL)arg0 quality:(NSInteger)arg1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg2 completion:(id)arg3 ;
-(void)download:(id)arg0 didChangeStateTo:(NSInteger)arg1 ;
-(void)download:(id)arg0 progressDidChange:(CGFloat)arg1 ;
-(void)downloadManagerDownloadsDidChange:(id)arg0 ;
-(void)fetchNewKeysForDownloadedVideo;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseDownload;
-(void)resumeDownload;
-(void)startDownloadAllowingCellular:(BOOL)arg0 quality:(NSInteger)arg1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif