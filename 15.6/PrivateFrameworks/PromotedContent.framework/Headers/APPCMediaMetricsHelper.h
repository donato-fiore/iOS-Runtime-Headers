// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPCMEDIAMETRICSHELPER_H
#define APPCMEDIAMETRICSHELPER_H

@protocol APPCMediaMetricsHelping, APPCMetricRegister;

#import <Foundation/Foundation.h>


@interface APPCMediaMetricsHelper : NSObject <APPCMediaMetricsHelping, APPCMetricRegister>

 {
    ? contextIdentifier;
    ? promotedContentIdentifier;
    ? primitiveCreator;
    ? notificationOwner;
    ? videoDuration;
    ? videoURL;
    ? videoQuality;
    ? mediaHasStarted;
    ? impressionThreshold;
    ? containerType;
    ? adType;
    ? mediaStartedTimestamp;
    ? adHasImpressed;
    ? promotedContent;
    ? $__lazy_storage_$_initialVolumeSender;
    ? visiblePercentageChanged;
    ? _visiblePercentage;
}


@property (nonatomic) NSInteger visiblePercentage;
@property (nonatomic, copy) id *visiblePercentageChanged;


-(id)init;
-(id)initWithContextIdentifier:(id)arg0 promotedContentIdentifier:(id)arg1 primitiveCreator:(id)arg2 notificationOwner:(id)arg3 ;
-(void)mediaContractedAtPosition:(CGFloat)arg0 fullScreen:(BOOL)arg1 ;
-(void)mediaExpandedAtPosition:(CGFloat)arg0 fullScreen:(BOOL)arg1 ;
-(void)mediaFinished;
-(void)mediaLoaded;
-(void)mediaPausedAtPosition:(CGFloat)arg0 ;
-(void)mediaPlayedAtPosition:(CGFloat)arg0 ;
-(void)mediaProgress:(NSInteger)arg0 ;
-(void)mediaShowControlsAtPosition:(CGFloat)arg0 ;
-(void)mediaSkippedAtPosition:(CGFloat)arg0 ;
-(void)mediaStarted;
-(void)mediaUserExitedArticle;
-(void)mediaVolumeChangedAtPosition:(CGFloat)arg0 volume:(float)arg1 ;
-(void)registerHandlerForAllMetricsWithClosure:(id)arg0 ;
-(void)removeHandler;
-(void)videoChosen;
-(void)videoChosenWithVideoWidth:(float)arg0 videoHeight:(float)arg1 ;


@end


#endif