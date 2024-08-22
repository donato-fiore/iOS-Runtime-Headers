// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRREADRELAY_H
#define SPRREADRELAY_H

@protocol SPRReadDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPRReadRelay : NSObject <SPRReadDelegate>



@property (readonly) NSObject<SPRReadDelegate> *base; // ivar: _base
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithBase:(id)arg0 queue:(id)arg1 ;
-(void)onFailureWithError:(id)arg0 ;
-(void)onSuccessWithTransactionData:(id)arg0 ;
-(void)onUpdateWithEvent:(NSInteger)arg0 mode:(NSInteger)arg1 ;


@end


#endif