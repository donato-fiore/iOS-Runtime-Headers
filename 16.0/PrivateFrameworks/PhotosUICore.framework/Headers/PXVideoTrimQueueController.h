// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXVIDEOTRIMQUEUECONTROLLER_H
#define PXVIDEOTRIMQUEUECONTROLLER_H

@class NSMutableArray, PLPhotoLibrary, PLManagedAlbum, NSString, NSDictionary, NSArray;
@protocol PXVideoTrimQueueControllerDelegate;

#import <Foundation/Foundation.h>


@interface PXVideoTrimQueueController : NSObject {
    CGFloat _startTime;
    CGFloat _endTime;
    NSMutableArray *_sourcesToTransform;
    NSMutableArray *_trimQueue;
    ? _delegateFlags;
    PLPhotoLibrary *_photoLibrary;
}


@property (readonly, nonatomic) PLManagedAlbum *album; // ivar: _album
@property (retain, nonatomic) NSString *albumName; // ivar: _albumName
@property (retain, nonatomic) NSString *commentText; // ivar: _commentText
@property (readonly, nonatomic) NSDictionary *customExportsInfo; // ivar: _customExportsInfo
@property (weak, nonatomic) NSObject<PXVideoTrimQueueControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) NSDictionary *trimmedVideoInfo; // ivar: _trimmedVideoInfo
@property (readonly, nonatomic) NSArray *videosSources; // ivar: _videosSources
@property (readonly, nonatomic) NSDictionary *videosSourcesSharingInfo; // ivar: _videosSourcesSharingInfo


+(BOOL)areVideoSourcesStreamShareSources:(id)arg0 ;
+(CGFloat)durationFromVideoAtURL:(id)arg0 ;
+(id)photoLibraryFromSources:(id)arg0 album:(id)arg1 ;
+(id)videoInfoKeyForSource:(id)arg0 ;
-(BOOL)_shouldShowVideoTooLongAlertForVideoSource:(id)arg0 ;
-(id)_videoTooLongAlertController;
-(id)alternateSourceToUseIfNeededFromSource:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 videoSources:(id)arg1 videoSourcesSharingInfo:(id)arg2 customExportsInfo:(id)arg3 album:(id)arg4 ;
-(void)_dequeueTrimmingControl;
-(void)_dismissViewControllerWithCompletion:(id)arg0 ;
-(void)_presentViewController:(id)arg0 ;
-(void)_sendDidFinish;
-(void)_showTrimViewControllerForSource:(id)arg0 ;
-(void)_trimVideoSource:(id)arg0 ;
-(void)cleanupResources;
-(void)editVideoViewController:(id)arg0 didTrimVideoWithOptions:(id)arg1 ;
-(void)editVideoViewControllerDidCancel:(id)arg0 ;
-(void)start;


@end


#endif