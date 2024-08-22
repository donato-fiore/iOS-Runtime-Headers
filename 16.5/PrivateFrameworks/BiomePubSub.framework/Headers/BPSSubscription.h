// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSSUBSCRIPTION_H
#define BPSSUBSCRIPTION_H

@class NSString, NSArray;
@protocol BPSSubscription, BPSUpstreamSubscriptions;

#import <Foundation/Foundation.h>


@interface BPSSubscription : NSObject <BPSSubscription, BPSUpstreamSubscriptions>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *upstreamSubscriptions;


-(void)cancel;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif