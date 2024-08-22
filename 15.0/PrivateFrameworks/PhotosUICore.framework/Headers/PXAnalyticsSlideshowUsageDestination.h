// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXANALYTICSSLIDESHOWUSAGEDESTINATION_H
#define PXANALYTICSSLIDESHOWUSAGEDESTINATION_H

@class NSMutableDictionary, NSString;
@protocol CPAnalyticsDestinationProtocol;

#import <Foundation/Foundation.h>


@interface PXAnalyticsSlideshowUsageDestination : NSObject <CPAnalyticsDestinationProtocol>

 {
    NSMutableDictionary *_slideshowInfos;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isUserCancelledError:(id)arg0 ;
+(id)exportCPAnalyticsIntervalName;
+(id)exportEndedCPAnalyticsEventNameForSuccess:(BOOL)arg0 error:(id)arg1 duration:(CGFloat)arg2 ;
+(id)exportEndedCoreAnalyticsEventName;
+(id)exportFailedCPAnalyticsEventName;
+(id)payloadAppSuspensionCountKey;
+(id)payloadAssetCountKeyForPlaybackStyle:(NSInteger)arg0 ;
+(id)payloadExportDurationKey;
+(id)payloadExportEndStateKey;
+(id)payloadExportErrorCodeKey;
+(id)payloadExportErrorDomainKey;
+(id)payloadPauseCountKey;
+(id)payloadTimeFractionPlayedKey;
+(id)payloadTimePausedKey;
+(id)payloadTotalAssetCountKey;
+(id)payloadTotalPlaybackTimeKey;
+(id)playbackEndedCPAnalyticsEventNameForTerminationType:(NSInteger)arg0 ;
+(id)playbackEndedCPAnalyticsEventNameForTimeFractionPlayed:(CGFloat)arg0 ;
+(id)playbackEndedCoreAnalyticsEventName;
+(id)playbackStartedCPAnalyticsEventNameForTotalAssetCount:(NSInteger)arg0 ;
+(id)playbackStartedCoreAnalyticsEventName;
-(id)_createDefaultPayloadForInfo:(id)arg0 ;
-(id)_createInfoForEvent:(id)arg0 ;
-(id)_existingInfoForEvent:(id)arg0 ;
-(id)_existingInfoForEvent:(id)arg0 pop:(BOOL)arg1 ;
-(id)_payloadFilteredForCoreAnlaytics:(id)arg0 ;
-(id)_popInfoForEndEvent:(id)arg0 ;
-(id)init;
-(void)processEvent:(id)arg0 ;


@end


#endif