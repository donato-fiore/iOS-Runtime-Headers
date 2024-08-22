// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BNPENDINGDEQUEUEPROMISE_H
#define BNPENDINGDEQUEUEPROMISE_H


#import <Foundation/Foundation.h>

#import "BNPostingContext.h"

@interface BNPendingDequeuePromise : NSObject {
    id *_dequeueBlock;
}


@property (readonly, nonatomic) BNPostingContext *postingContext; // ivar: _postingContext
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initWithPostingContext:(id)arg0 dequeueBlock:(id)arg1 ;
-(void)dequeue;


@end


#endif