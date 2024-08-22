// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIPLAYBACKREPORTERVPAF_H
#define VUIPLAYBACKREPORTERVPAF_H

@class NSMapTable;


#import "VUIPlaybackReporter.h"

@interface VUIPlaybackReporterVPAF : VUIPlaybackReporter {
    NSMapTable *_pendingPlayerProperties;
}




+(NSUInteger)_playHeadMillis:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_isDelegatedForPlayer:(id)arg0 ;
-(BOOL)enforceSinglePlaybackSession;
-(id)_audioFormatForPlayer:(id)arg0 session:(id)arg1 ;
-(id)_audioInfoForPlayer:(id)arg0 ;
-(id)_colorRangeForPlayer:(id)arg0 ;
-(id)_connectionInfo;
-(id)_createSessionForPlayer:(id)arg0 ;
-(id)_delegatedInfoForPlayer:(id)arg0 ;
-(id)_downloadInfoForPlayer:(id)arg0 ;
-(id)_focusInfoForSession:(id)arg0 ;
-(id)_metricsForPlayer:(id)arg0 session:(id)arg1 ;
-(id)_metricsForSession:(id)arg0 ;
-(id)_screenInfo;
-(id)_sensitiveContentInfoForPlayer:(id)arg0 ;
-(id)_skipIntroActionForSession:(id)arg0 consume:(BOOL)arg1 ;
-(id)_subtitleInfoForPlayer:(id)arg0 ;
-(id)_videoDisplayInfoForSession:(id)arg0 ;
-(id)init;
-(void)_handleDisplaySizeChange:(id)arg0 ;
-(void)_handlePIPChange:(id)arg0 ;
-(void)_handleSeek_iOS:(id)arg0 ;
-(void)_reportForSession:(id)arg0 state:(id)arg1 reason:(id)arg2 ;
-(void)_setSessionMetadataValue:(id)arg0 forKey:(id)arg1 player:(id)arg2 ;
-(void)dealloc;
-(void)flushUnreportedEvents;


@end


#endif