// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPUBLISHINGAGENT_H
#define PLPUBLISHINGAGENT_H

@class NSString, NSData, NSMutableArray;
@protocol PLDataArrayInputStreamProgressDelegate, PLPublishingAgentDelegate;

#import <Foundation/Foundation.h>

#import "PLVideoRemaker.h"

@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate>

 {
    id *_userInfo;
    NSString *_mediaPath;
    NSData *_mediaData;
    NSString *_mimeType;
    BOOL _deleteAfterPublishing;
    CGFloat _changeRate;
    NSInteger _currentValue;
    CGFloat _estimatedTimeRemaining;
    NSInteger _maxValue;
    NSInteger _normalizedCurrentValue;
    NSInteger _normalizedMaxValue;
    float _percentComplete;
    float _remakingPercentComplete;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    BOOL _needsRemaking;
    CGFloat _startTime;
    CGFloat _endTime;
    PLVideoRemaker *_remaker;
    SEL _completionSelector;
    BOOL _remakingWasCancelled;
    BOOL _remaking;
    BOOL _publishing;
}


@property (readonly, nonatomic) BOOL allowsCellularAccessForRequests;
@property (nonatomic) BOOL allowsHDOver3GUpload; // ivar: _allowsHDOver3GUpload
@property (nonatomic) NSInteger approximateHDUploadSize; // ivar: _approximateHDUploadSize
@property (nonatomic) NSInteger approximateSDUploadSize; // ivar: _approximateSDUploadSize
@property (nonatomic) NSObject<PLPublishingAgentDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL enableHDUpload; // ivar: _enableHDUpload
@property (nonatomic) BOOL mediaIsHDVideo; // ivar: _mediaIsHDVideo
@property (nonatomic) BOOL needsTrimming; // ivar: _needsTrimming
@property (nonatomic) BOOL ownerIsCamera; // ivar: _ownerIsCamera
@property (nonatomic) float progressMultiplier; // ivar: _progressMultiplier
@property (nonatomic) int remakerMode; // ivar: _remakerMode
@property (nonatomic) int selectedOption; // ivar: _selectedOption
@property (nonatomic) BOOL shouldCancelPublish; // ivar: _shouldCancelPublish


+(BOOL)canUploadHDVideoOverCellular;
+(id)publishingAgentForBundleNamed:(id)arg0 toPublishMedia:(id)arg1 ;
-(BOOL)allowsTellingFriend;
-(BOOL)allowsViewingOnHost;
-(BOOL)deleteMediaFileAfterPublishing;
-(BOOL)isPublishing;
-(BOOL)isRemaking;
-(BOOL)isVideoMedia;
-(CGFloat)estimatedTimeRemaining;
-(CGFloat)maximumVideoDuration;
-(float)percentComplete;
-(float)remakingPercentComplete;
-(id)initWithMedia:(id)arg0 ;
-(id)mediaData;
-(id)mediaPath;
-(id)mediaTitle;
-(id)mediaURL;
-(id)navigationController;
-(id)progressViewMessageDuringRemake;
-(id)serviceName;
-(id)tellAFriendBody;
-(id)tellAFriendSubject;
-(id)tellAFriendURL;
-(id)userInfo;
-(void)_agentIsReadyToPublish:(id)arg0 ;
-(void)_cancelRemaking:(id)arg0 ;
-(void)_networkReachabilityDidChange:(id)arg0 ;
-(void)_remakerDidFinish:(id)arg0 ;
-(void)_setApproximateVideoUploadSizes;
-(void)_setUpPublishingParams;
-(void)_startNetworkObservation;
-(void)_stopNetworkObservation;
-(void)_transcodeVideo:(id)arg0 ;
-(void)_updateStatisticsFromSnapshots;
-(void)cancelButtonClicked;
-(void)cancelRemaking;
-(void)dataArrayInputStreamBytesWereRead:(id)arg0 ;
-(void)dealloc;
-(void)dismiss;
-(void)doneButtonClicked;
-(void)presentModalSheetInViewController:(id)arg0 ;
-(void)publish;
-(void)resignPublishingSheetResponders;
-(void)setDeleteMediaFileAfterPublishing:(BOOL)arg0 ;
-(void)setMediaData:(id)arg0 ;
-(void)setMediaPath:(id)arg0 ;
-(void)setPublishing:(BOOL)arg0 ;
-(void)setTotalBytesWritten:(NSInteger)arg0 totalBytes:(NSInteger)arg1 ;
-(void)setTrimStartTime:(CGFloat)arg0 andEndTime:(CGFloat)arg1 ;
-(void)setUserInfo:(id)arg0 ;
-(void)showAlertWithError:(id)arg0 ;
-(void)snapshot;
-(void)videoRemaker:(id)arg0 progressDidChange:(float)arg1 ;
-(void)videoRemakerDidBeginRemaking:(id)arg0 ;
-(void)videoRemakerDidEndRemaking:(id)arg0 temporaryPath:(id)arg1 ;
-(void)willDismiss;


@end


#endif