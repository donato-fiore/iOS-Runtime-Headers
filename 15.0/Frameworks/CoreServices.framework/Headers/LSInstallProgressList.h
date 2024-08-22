// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSINSTALLPROGRESSLIST_H
#define LSINSTALLPROGRESSLIST_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface LSInstallProgressList : NSObject {
    NSMutableDictionary *_progresses;
    NSMutableDictionary *_subscriptions;
}




-(id)description;
-(id)init;
-(id)progressForBundleID:(id)arg0 ;
-(id)subscriberForBundleID:(id)arg0 andPublishingKey:(id)arg1 ;
-(void)addSubscriber:(id)arg0 forPublishingKey:(id)arg1 andBundleID:(id)arg2 ;
-(void)removeProgressForBundleID:(id)arg0 ;
-(void)removeSubscriberForPublishingKey:(id)arg0 andBundleID:(id)arg1 ;
-(void)setProgress:(id)arg0 forBundleID:(id)arg1 ;


@end


#endif