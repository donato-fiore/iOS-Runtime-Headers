// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKIOHIDSERVICEMATCHER_H
#define BKIOHIDSERVICEMATCHER_H

@class NSString, NSDictionary;
@protocol BSInvalidatable, BKIOHIDServiceMatcherDataProviding, BKIOHIDServiceMatchObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BKIOHIDServiceMatcher : NSObject <BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    BOOL _startedMatching;
    BOOL _invalidated;
}


@property (retain, nonatomic) NSObject<BKIOHIDServiceMatcherDataProviding> *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *matchingDictionary; // ivar: _matchingDictionary
@property (weak, nonatomic) NSObject<BKIOHIDServiceMatchObserver> *observer; // ivar: _observer
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (retain, nonatomic) Class serviceClass; // ivar: _serviceClass
@property (readonly) Class superclass;


-(id)_servicesForIOHIDServiceRefs:(id)arg0 ;
-(id)existingServices;
-(id)initWithMatchingDictionary:(id)arg0 dataProvider:(id)arg1 ;
-(id)initWithMatchingDictionary:(id)arg0 serviceClass:(Class)arg1 dataProvider:(id)arg2 ;
-(id)initWithUsagePage:(int)arg0 usage:(int)arg1 builtIn:(BOOL)arg2 dataProvider:(id)arg3 ;
-(void)_expectDeallocation;
-(void)_lock_servicesAdded:(id)arg0 ;
-(void)_servicesAdded:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)startObserving:(id)arg0 queue:(id)arg1 ;


@end


#endif