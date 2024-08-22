// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSMULTICAST_H
#define BPSMULTICAST_H

@class NSString;
@protocol BPSConnectablePublisher, BPSSubject><BPSSubscriber, BPSPublisher;


#import "BMBookmarkablePublisher.h"

@interface BPSMulticast : BMBookmarkablePublisher <BPSConnectablePublisher>

 {
    os_unfair_lock_s _lock;
    id<BPSSubject><BPSSubscriber> *_subject;
}


@property (readonly, nonatomic) id *createSubject; // ivar: _createSubject
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)initWithUpstream:(id)arg0 createSubject:(id)arg1 ;
-(id)lazySubject;
-(void)connect;
-(void)subscribe:(id)arg0 ;


@end


#endif