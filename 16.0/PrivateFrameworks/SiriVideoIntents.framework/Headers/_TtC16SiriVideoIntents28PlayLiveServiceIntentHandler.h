// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SIRIVIDEOINTENTS28PLAYLIVESERVICEINTENTHANDLER_H
#define _TTC16SIRIVIDEOINTENTS28PLAYLIVESERVICEINTENTHANDLER_H

@protocol PlayLiveServiceIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriVideoIntents28PlayLiveServiceIntentHandler : NSObject <PlayLiveServiceIntentHandling>

 {
    ? liveServiceResolver;
    ? analyticsService;
}




-(?)confirmPlayLiveServicecompletion;
-(?)handlePlayLiveServicecompletion;
-(?)resolveLiveServiceForPlayLiveServicewithCompletion;
-(id)init;


@end


#endif