// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16SIRIVIDEOINTENTS22PLAYVIDEOINTENTHANDLER_H
#define _TTC16SIRIVIDEOINTENTS22PLAYVIDEOINTENTHANDLER_H

@protocol PlayVideoIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriVideoIntents22PlayVideoIntentHandler : NSObject <PlayVideoIntentHandling>

 {
    ? contentResolver;
    ? analyticsService;
    ? backgroundFetch;
    ? signalRecorder;
    ? userDefaultsProvider;
    ? contentWith3pAppsProviding;
    ? deviceState;
    ? tipService;
}




-(?)confirmPlayVideocompletion;
-(?)handlePlayVideocompletion;
-(?)resolveContentForPlayVideowithCompletion;
-(id)init;


@end


#endif