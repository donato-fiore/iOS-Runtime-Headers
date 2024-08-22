// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSPROGRESSSUBSCRIBER_H
#define _NSPROGRESSSUBSCRIBER_H

@class NSMutableDictionary;
@protocol NSProgressSubscriber;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSLock.h"

@interface _NSProgressSubscriber : NSObject <NSProgressSubscriber>

 {
    id *_publishingHandler;
    NSString *_subscriberID;
    NSMutableDictionary *_proxiesByPublisherID;
    BOOL _started;
    NSLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPublishingHandler:(id)arg0 ;
-(void)addPublisher:(id)arg0 forID:(id)arg1 withValues:(id)arg2 isOld:(BOOL)arg3 ;
-(void)dealloc;
-(void)observePublisherForID:(id)arg0 values:(id)arg1 forKeys:(id)arg2 ;
-(void)observePublisherUserInfoForID:(id)arg0 value:(id)arg1 forKey:(id)arg2 ;
-(void)removePublisherForID:(id)arg0 ;
-(void)startForCategory:(id)arg0 ;
-(void)startForFileURL:(id)arg0 ;
-(void)stop;


@end


#endif