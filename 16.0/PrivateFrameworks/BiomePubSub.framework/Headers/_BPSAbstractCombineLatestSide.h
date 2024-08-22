// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BPSABSTRACTCOMBINELATESTSIDE_H
#define _BPSABSTRACTCOMBINELATESTSIDE_H

@class NSString;
@protocol BPSSubscriber;

#import <Foundation/Foundation.h>

#import "_BPSAbstractCombineLatest.h"

@interface _BPSAbstractCombineLatestSide : NSObject <BPSSubscriber>



@property (retain, nonatomic) _BPSAbstractCombineLatest *combiner; // ivar: _combiner
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger index; // ivar: _index
@property (readonly) Class superclass;


-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithIndex:(NSUInteger)arg0 combiner:(id)arg1 ;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif