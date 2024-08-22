// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI8VIDEOSUI_H
#define _TTC8VIDEOSUI8VIDEOSUI_H


#import <Foundation/Foundation.h>


@interface _TtC8VideosUI8VideosUI : NSObject



+(CGFloat)getPlaybackElapsedTime;
+(id)getFullorHalfSheetPromptedAt;
+(void)handleAppDidFinishLoading;
+(void)handleGDPRDidChangeSignal;
+(void)handlePlaybackDidEndForTCC;
+(void)handleUpsellPresented:(BOOL)arg0 ;
+(void)initializeGroupActivities;
+(void)initializeJSContext:(id)arg0 ;
+(void)initializeUIFactory;
+(void)initializeUnifiedMessagingManager;
+(void)markLastPlaybackEventasError;
+(void)markLastPlaybackEventasUpsellPresented;
+(void)markPlaybackElapsedTime:(CGFloat)arg0 ;
+(void)messageViewController:(id)arg0 didSelectActionWith:(id)arg1 ;
+(void)processDeeplink:(id)arg0 ;
+(void)pushDownloadDidStartSignal;
-(id)init;


@end


#endif