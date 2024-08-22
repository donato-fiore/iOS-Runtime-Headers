// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSCOUNTWINDOW_H
#define BPSCOUNTWINDOW_H

@class NSString;


#import "BPSWindow.h"
#import "BPSSubscriptionStatus.h"

@interface BPSCountWindow : BPSWindow {
    os_unfair_lock_s _lock;
    BPSSubscriptionStatus *_status;
    NSString *_identifier;
    BOOL _downstreamRequested;
}


@property (readonly, nonatomic) id *accumulator; // ivar: _accumulator
@property (readonly, nonatomic) NSUInteger capacity; // ivar: _capacity
@property (readonly, nonatomic) id *closure; // ivar: _closure
@property (readonly, nonatomic) NSUInteger currentCount; // ivar: _currentCount


-(NSInteger)receiveInput:(id)arg0 ;
-(id)identifier;
-(id)initWithCapacity:(NSUInteger)arg0 aggregator:(id)arg1 identifier:(id)arg2 ;
-(id)metadata;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif