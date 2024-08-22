// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSWITCHTOLATESTPUBLISHER_H
#define AVSWITCHTOLATESTPUBLISHER_H



#import "AVPublisher.h"
#import "AVNotificationSubscription.h"

@interface AVSwitchToLatestPublisher : AVPublisher {
    *OpaqueFigReentrantMutex _callbackMutex;
    AVPublisher *_upstream;
    AVNotificationSubscription *_outputPublisherSubscription;
    int _publisherIndex;
}




+(id)switchToLatestPublisherWithUpstream:(id)arg0 ;
-(id)description;
-(id)initWithUpstream:(id)arg0 ;
-(id)subscribeRequestingInitialValue:(BOOL)arg0 block:(id)arg1 ;
-(void)dealloc;


@end


#endif