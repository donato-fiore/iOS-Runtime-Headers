// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SIRIAUDIOINTERNAL23INADDMEDIAINTENTHANDLER_H
#define _TTC17SIRIAUDIOINTERNAL23INADDMEDIAINTENTHANDLER_H

@protocol INAddMediaIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC17SiriAudioInternal23INAddMediaIntentHandler : NSObject <INAddMediaIntentHandling>

 {
    ? library;
    ? nowPlaying;
    ? subscription;
    ? provider;
    ? instanceReference;
}




-(id)init;
-(void)handleAddMedia:(id)arg0 completion:(id)arg1 ;
-(void)resolveMediaDestinationForAddMedia:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveMediaItemsForAddMedia:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif