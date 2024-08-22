// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRPLAYBACKQUEUECLIENT_H
#define MRPLAYBACKQUEUECLIENT_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRPlaybackQueueClient : NSObject {
    NSMutableDictionary *_controllers;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)debugDescription;
-(id)existingSubscriptionControllerForPlayerPath:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)subscriptionControllerForPlayerPath:(id)arg0 ;
-(void)_handleApplicationRemovedNotification:(id)arg0 ;
-(void)_handleOriginRemovedNotification:(id)arg0 ;
-(void)_handlePlayerPathRemovedNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif