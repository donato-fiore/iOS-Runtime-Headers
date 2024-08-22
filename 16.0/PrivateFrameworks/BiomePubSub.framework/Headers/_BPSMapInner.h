// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BPSMAPINNER_H
#define _BPSMAPINNER_H

@class NSString;
@protocol BPSSubscriber;

#import <Foundation/Foundation.h>


@interface _BPSMapInner : NSObject <BPSSubscriber>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *transform; // ivar: _transform


-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithDownstream:(id)arg0 transform:(id)arg1 ;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif