// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDOWNLOADBUTTONVIEWMODEL_H
#define VUIDOWNLOADBUTTONVIEWMODEL_H

@class NSDate, NSString, NSArray;
@protocol VUIMediaEntityAssetControllerDelegate, VUIMediaEntityAssetController;

#import <Foundation/Foundation.h>

#import "VUIMediaEntity.h"
#import "VUIVideosPlayable.h"

@interface VUIDownloadButtonViewModel : NSObject <VUIMediaEntityAssetControllerDelegate>



@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController; // ivar: _assetController
@property (retain, nonatomic) NSDate *availabilityEndDate; // ivar: _availabilityEndDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *downloadExpirationDate; // ivar: _downloadExpirationDate
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (nonatomic) NSUInteger downloadState; // ivar: _downloadState
@property (retain, nonatomic) NSString *downloadStateStringValue; // ivar: _downloadStateStringValue
@property (retain, nonatomic) NSArray *downloadStateToString; // ivar: _downloadStateToString
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUIMediaEntity *mediaEntity; // ivar: _mediaEntity
@property (nonatomic) BOOL renewsOfflineKeysAutomatically; // ivar: _renewsOfflineKeysAutomatically
@property (readonly) Class superclass;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable; // ivar: _videosPlayable


-(NSUInteger)_downloadStateFromAssetsControllerStatus:(NSUInteger)arg0 ;
-(id)_createDownloadStateToStringArrayMap;
-(id)initWithAssetController:(id)arg0 ;
-(id)initWithVideosPlayable:(id)arg0 ;
-(void)_getAssetControllerCreatingMediaItem:(BOOL)arg0 completion:(id)arg1 ;
-(void)_updateDownloadStateFromAssetControllerState:(id)arg0 ;
-(void)dealloc;
-(void)deleteDownload;
-(void)fetchNewKeysForDownloadedVideo;
-(void)mediaEntityAssetController:(id)arg0 stateDidChange:(id)arg1 ;
-(void)pauseDownload;
-(void)preflightPresentingViewController:(id)arg0 completion:(id)arg1 ;
-(void)resumeDownload;
-(void)startDownloadAllowingCellular:(BOOL)arg0 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg1 quality:(NSInteger)arg2 ;
-(void)stopDownload;


@end


#endif