// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSWINDOW_H
#define BPSWINDOW_H

@class NSString;
@protocol BPSSubscriber;


#import "BPSSubscription.h"

@interface BPSWindow : BPSSubscription <BPSSubscriber>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


-(NSInteger)receiveInput:(id)arg0 ;
-(id)metadata;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif