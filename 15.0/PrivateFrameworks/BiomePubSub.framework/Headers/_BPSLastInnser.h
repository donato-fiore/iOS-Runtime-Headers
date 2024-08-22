// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BPSLASTINNSER_H
#define _BPSLASTINNSER_H

@class NSString;
@protocol BPSSubscriber;

#import <Foundation/Foundation.h>


@interface _BPSLastInnser : NSObject <BPSSubscriber>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *last; // ivar: _last
@property (readonly) Class superclass;


-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithDownstream:(id)arg0 ;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif