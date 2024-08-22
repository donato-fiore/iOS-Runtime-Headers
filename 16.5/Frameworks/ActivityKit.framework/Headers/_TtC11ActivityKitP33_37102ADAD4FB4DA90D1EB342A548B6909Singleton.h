// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ACTIVITYKITP33_37102ADAD4FB4DA90D1EB342A548B6909SINGLETON_H
#define _TTC11ACTIVITYKITP33_37102ADAD4FB4DA90D1EB342A548B6909SINGLETON_H

@protocol ACActivityPresentationObservationXPCClient;

#import <Foundation/Foundation.h>


@interface _TtC11ActivityKitP33_37102ADAD4FB4DA90D1EB342A548B6909Singleton : NSObject <ACActivityPresentationObservationXPCClient>

 {
    ? queue;
    ? connection;
    ? serverStartupToken;
    ? _presentationPublisher;
    ? _queue_presentations;
    ? _queue_predicates;
}




+(id)shared;
-(id)init;
-(id)listenForActivityPresentationWithActivityIdentifier:(id)arg0 presenterBundleIdentifier:(id)arg1 handler:(id)arg2 ;
-(void)activityPresentationsDidChange:(id)arg0 completion:(id)arg1 ;


@end


#endif