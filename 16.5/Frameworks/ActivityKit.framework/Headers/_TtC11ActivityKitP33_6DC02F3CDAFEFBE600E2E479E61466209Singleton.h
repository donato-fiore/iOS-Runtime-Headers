// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ACTIVITYKITP33_6DC02F3CDAFEFBE600E2E479E61466209SINGLETON_H
#define _TTC11ACTIVITYKITP33_6DC02F3CDAFEFBE600E2E479E61466209SINGLETON_H

@protocol ACActivityQoSObservationXPCClient;

#import <Foundation/Foundation.h>


@interface _TtC11ActivityKitP33_6DC02F3CDAFEFBE600E2E479E61466209Singleton : NSObject <ACActivityQoSObservationXPCClient>

 {
    ? queue;
    ? connection;
    ? serverStartupToken;
    ? _qosPublisher;
    ? _queue_qos;
    ? _queue_predicates;
}




+(id)shared;
-(id)init;
-(id)listenForActivityQoSWithActivityIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)activityQoSDidChange:(id)arg0 completion:(id)arg1 ;


@end


#endif