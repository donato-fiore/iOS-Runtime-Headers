// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17SIRIAUDIOINTERNAL24INPLAYMEDIAINTENTHANDLER_H
#define _TTC17SIRIAUDIOINTERNAL24INPLAYMEDIAINTENTHANDLER_H

@protocol INPlayMediaIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC17SiriAudioInternal24INPlayMediaIntentHandler : NSObject <INPlayMediaIntentHandling>

 {
    ? playbackService;
    ? localSearch;
    ? deviceProvider;
    ? nowPlaying;
    ? seDeviceProvider;
    ? appleMediaServicesProvider;
    ? knowledgeStoreProvider;
    ? featureFlagProvider;
    ? nearDeviceProvider;
    ? deviceState;
    ? accountProvider;
    ? subscriptionProvider;
    ? siriKitTaskLoggingProvider;
}




-(id)init;
-(void)handlePlayMedia:(id)arg0 completion:(id)arg1 ;
-(void)resolveMediaItemsForPlayMedia:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif