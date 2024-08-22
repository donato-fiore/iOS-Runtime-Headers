// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSPASSTHROUGHSUBJECT_H
#define BPSPASSTHROUGHSUBJECT_H

@class NSString, NSMutableArray;
@protocol BPSSubject, BPSSubscriber;


#import "BMBookmarkablePublisher.h"
#import "BPSCompletion.h"
#import "BPSSubscriberList.h"
#import "BPSSubscription.h"

@interface BPSPassThroughSubject : BMBookmarkablePublisher <BPSSubject, BPSSubscriber>

 {
    os_unfair_lock_s _lock;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) BPSCompletion *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BPSSubscriberList *downstreams; // ivar: _downstreams
@property (nonatomic) BOOL hasAnyDownstreamDemand; // ivar: _hasAnyDownstreamDemand
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BPSSubscription *sub; // ivar: _sub
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *upstreamSubscriptions; // ivar: _upstreamSubscriptions


+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(BOOL)canStorePassThroughValueInBookmark;
-(NSInteger)receiveInput:(id)arg0 ;
-(id)bookmarkableUpstreams;
-(id)init;
-(void)acknowledgeDownstreamDemand;
-(void)cancel;
-(void)dealloc;
-(void)disassociate:(NSInteger)arg0 ;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)sendCompletion:(id)arg0 ;
-(void)sendSubscription:(id)arg0 ;
-(void)sendValue:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif