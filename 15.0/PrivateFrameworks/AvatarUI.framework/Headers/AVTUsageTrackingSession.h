// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTUSAGETRACKINGSESSION_H
#define AVTUSAGETRACKINGSESSION_H

@class AVTAvatarRecord, NSString, NSDate;
@protocol AVTUsageTrackingSession, AVTAvatarStoreInternal, AVTUILogger, AVTAvatarConfigurationMetric, AVTCoreAnalyticsClient, AVTDifferentialPrivacyRecorder, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVTAvatarConfiguration.h"
#import "AVTUsageTrackingRecordTimedEvent.h"

@interface AVTUsageTrackingSession : NSObject <AVTUsageTrackingSession>



@property (readonly, nonatomic) AVTAvatarRecord *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) NSObject<AVTAvatarStoreInternal> *avatarStore; // ivar: _avatarStore
@property (readonly, nonatomic) NSString *bundleAppName; // ivar: _bundleAppName
@property (readonly, nonatomic) AVTAvatarConfiguration *defaultConfiguration; // ivar: _defaultConfiguration
@property (retain, nonatomic) NSDate *editorEnterDate; // ivar: _editorEnterDate
@property (nonatomic) BOOL expandedMode; // ivar: _expandedMode
@property (retain, nonatomic) AVTUsageTrackingRecordTimedEvent *faceTrackingEvent; // ivar: _faceTrackingEvent
@property (readonly, nonatomic) NSString *keyBasePrefix; // ivar: _keyBasePrefix
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<AVTAvatarConfigurationMetric> *metric; // ivar: _metric
@property (readonly, nonatomic) NSObject<AVTCoreAnalyticsClient> *ntsCAClient; // ivar: _ntsCAClient
@property (readonly, nonatomic) NSObject<AVTDifferentialPrivacyRecorder> *ntsDPRecorder; // ivar: _ntsDPRecorder
@property (readonly, copy, nonatomic) id *recordTransformer; // ivar: _recordTransformer
@property (nonatomic) BOOL recordedVideo; // ivar: _recordedVideo
@property (readonly, copy, nonatomic) id *timeProvider; // ivar: _timeProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)colorPresetDescriptionForAvatarConfiguration:(id)arg0 ;
+(id)configurationDistanceClassifierWithMetric:(SEL)arg0 ;
+(id)defaultRecordTransformerForCoreModel:(SEL)arg0 ;
+(id)defaultTimeProvider:(SEL)arg0 ;
+(id)dpKeyBasePrefix;
+(id)keyBasePrefixForBundleIdentifier:(id)arg0 ;
+(id)likenessComparator:(SEL)arg0 ;
+(id)makeDPKey:(id)arg0 ;
+(id)makeKeyAnalyticsCompliant:(id)arg0 ;
+(id)payloadForAvatarRecord:(id)arg0 ;
+(id)payloadForAvatarRecordIdentifier:(id)arg0 ;
+(id)whitelistAppNameFromBundleID:(id)arg0 ;
+(void)getPresetDescription:(*id)arg0 usedCategoriesDescription:(*id)arg1 forAvatarConfiguration:(id)arg2 defaultConfiguration:(id)arg3 ;
// -(id)initWithCoreAnalyticsClient:(id)arg0 dpRecorder:(id)arg1 serialQueueProvider:(id)arg2 recordTransformer:(unk)arg3 avatarRecord:(id)arg4 defaultConfiguration:(unk)arg5 timeProvider:(id)arg6 configurationMetric:(id)arg7 logger:(id)arg8 keyBasePrefix:(unk)arg9 bundleAppName:(id)arg10  ;
// -(id)initWithSerialQueueProvider:(id)arg0 recordTransformer:(unk)arg1 logger:(id)arg2  ;
-(id)makeCrossAppEventKeyForAction:(id)arg0 ;
-(id)makeEventKeyForAction:(id)arg0 ;
-(id)payloadForCrossAppEvent;
-(void)beginWithStore:(id)arg0 ;
-(void)didChangeCurrentAvatarInCarousel:(id)arg0 ;
-(void)didChangeCurrentAvatarInStickers:(id)arg0 ;
-(void)didCreateAvatar:(id)arg0 ;
-(void)didDeleteAvatar:(id)arg0 ;
-(void)didDiscardVideoWithDuration:(CGFloat)arg0 ;
-(void)didDuplicateAvatar:(id)arg0 ;
-(void)didEditAvatar:(id)arg0 ;
-(void)didEnterEditor;
-(void)didLeaveEditor;
-(void)didOpenStickersAppFromRecents;
-(void)didPauseFaceTracking;
-(void)didPeelOffStickerFromStickersApp:(id)arg0 withAvatar:(id)arg1 ;
-(void)didRecordVideo;
-(void)didReplayVideo;
-(void)didResumeFaceTracking;
-(void)didSendImageWithAvatar:(id)arg0 ;
-(void)didSendStickerWithAvatar:(id)arg0 ;
-(void)didSendVideoWithAvatar:(id)arg0 duration:(CGFloat)arg1 ;
-(void)didShowExpandedMode;
-(void)didStartFaceTrackingInCarouselWithAvatar:(id)arg0 ;
-(void)didStopFaceTrackingInCarousel;
-(void)didTapStickerFromRecents:(id)arg0 withAvatarIdentifier:(id)arg1 ;
-(void)didTapStickerFromStickersApp:(id)arg0 withAvatar:(id)arg1 ;
-(void)end;
-(void)nts_loadDefaultConfigurationIfNeeded;
-(void)nts_reportAvatarComplexity:(id)arg0 withClient:(id)arg1 ;
-(void)nts_reportAvatarCountWithClient:(id)arg0 ;
-(void)nts_reportAvatarDescription:(id)arg0 dpRecorder:(id)arg1 ;
-(void)nts_reportAvatarLikenessClustersWithClient:(id)arg0 ;
-(void)nts_reportEditorTimeWithExitTime:(id)arg0 client:(id)arg1 ;
-(void)nts_reportExpandedModeWithClient:(id)arg0 ;
-(void)nts_reportFaceTrackingTimeWithEndTime:(id)arg0 client:(id)arg1 ;
-(void)performClientWork:(id)arg0 ;
-(void)sendCrossAppsEventForAction:(id)arg0 ;
-(void)sendEventForAction:(id)arg0 ;
-(void)sentStickerFromStickersApp:(id)arg0 withAvatarRecord:(id)arg1 action:(id)arg2 peeled:(BOOL)arg3 ;


@end


#endif