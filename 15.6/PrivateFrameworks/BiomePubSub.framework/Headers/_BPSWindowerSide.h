// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BPSWINDOWERSIDE_H
#define _BPSWINDOWERSIDE_H

@class NSString;
@protocol BPSSubscriber, NSCopying;


#import "BPSSubscription.h"
#import "_BPSWindowerInner.h"

@interface _BPSWindowerSide : BPSSubscription <BPSSubscriber>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<NSCopying> *key; // ivar: _key
@property (readonly) Class superclass;
@property (readonly, nonatomic) _BPSWindowerInner *windowerInner; // ivar: _windowerInner


-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithKey:(id)arg0 identifier:(id)arg1 windowerInner:(id)arg2 ;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif