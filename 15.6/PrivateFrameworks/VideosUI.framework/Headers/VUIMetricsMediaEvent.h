// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMETRICSMEDIAEVENT_H
#define VUIMETRICSMEDIAEVENT_H


#import <Foundation/Foundation.h>


@interface VUIMetricsMediaEvent : NSObject



+(id)_metricsDataFromTVPMediaItem:(id)arg0 isBackground:(BOOL)arg1 isAmbient:(BOOL)arg2 ;
+(id)clickMetricsDataFromTVPMediaItem:(id)arg0 ;
+(id)generateSkipImpressionsFromSkipInfo:(id)arg0 ;
+(id)impressionsMetricsDataFromTVPMediaItem:(id)arg0 ;
+(void)recordBGVideoPlayOfTVPMediaItem:(id)arg0 isAmbient:(BOOL)arg1 ;
+(void)recordClickOfSkipInfo:(id)arg0 onMediaItem:(id)arg1 ;
+(void)recordImpressionsOfSkipButton:(id)arg0 onMediaItem:(id)arg1 ;
+(void)recordPlay:(id)arg0 isLaunchingExtras:(BOOL)arg1 ;
+(void)recordPlayOfTVPMediaItem:(id)arg0 ;
+(void)recordPunchout:(id)arg0 isUrlForPlay:(BOOL)arg1 ;


@end


#endif