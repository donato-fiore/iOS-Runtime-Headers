// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNDASEARCHQUERYCONSUMER_H
#define CNDASEARCHQUERYCONSUMER_H

@class CNCountdownLatch, NSMutableArray, CNResult;
@protocol DASearchQueryConsumer;

#import <Foundation/Foundation.h>


@interface CNDASearchQueryConsumer : NSObject <DASearchQueryConsumer>

 {
    CNCountdownLatch *_latch;
    NSMutableArray *_results;
}


@property (readonly) CNResult *result; // ivar: _result


+(id)SuccessfulResults:(SEL)arg0 ;
-(id)initWithLatch:(id)arg0 ;
-(void)searchQuery:(id)arg0 finishedWithError:(id)arg1 ;
-(void)searchQuery:(id)arg0 returnedResults:(id)arg1 ;


@end


#endif