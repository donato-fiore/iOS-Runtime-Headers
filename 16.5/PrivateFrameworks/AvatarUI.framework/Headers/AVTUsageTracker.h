// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTUSAGETRACKER_H
#define AVTUSAGETRACKER_H


#import <Foundation/Foundation.h>


@interface AVTUsageTracker : NSObject



+(id)currentSession;
+(void)trackCountOfMemojiInStore:(id)arg0 ;
+(void)trackCountOfMemojiInStore:(id)arg0 withCoreAnalyticsClient:(id)arg1 ;
+(void)trackStickerSentFromHostBundleIdentifier:(id)arg0 ;
+(void)trackStickerSentFromHostBundleIdentifier:(id)arg0 withCoreAnalyticsClient:(id)arg1 ;


@end


#endif