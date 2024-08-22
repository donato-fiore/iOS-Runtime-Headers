// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ACTIVITYKITP33_53EEA475F928A92791709C064B1A8B959SINGLETON_H
#define _TTC11ACTIVITYKITP33_53EEA475F928A92791709C064B1A8B959SINGLETON_H

@protocol ACActivityProminenceObservationXPCClient;

#import <Foundation/Foundation.h>


@interface _TtC11ActivityKitP33_53EEA475F928A92791709C064B1A8B959Singleton : NSObject <ACActivityProminenceObservationXPCClient>

 {
    ? queue;
    ? connection;
    ? serverStartupToken;
    ? _prominencePublisher;
    ? _queue_prominentActivityIdentifiers;
    ? _queue_predicates;
}




+(id)shared;
-(id)init;
-(id)listenForActivityProminenceWithActivityIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)activityProminenceDidChange:(id)arg0 completion:(id)arg1 ;


@end


#endif