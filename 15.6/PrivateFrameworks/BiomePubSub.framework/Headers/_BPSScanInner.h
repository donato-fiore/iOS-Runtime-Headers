// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BPSSCANINNER_H
#define _BPSSCANINNER_H

@class NSString;
@protocol BPSSubscriber;

#import <Foundation/Foundation.h>


@interface _BPSScanInner : NSObject <BPSSubscriber>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *nextPartialResult; // ivar: _nextPartialResult
@property (retain, nonatomic) id *result; // ivar: _result
@property (readonly) Class superclass;


-(NSInteger)receiveInput:(id)arg0 ;
-(id)init;
// -(id)initWithDownstream:(id)arg0 nextPartialResult:(id)arg1 initialResult:(unk)arg2  ;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif