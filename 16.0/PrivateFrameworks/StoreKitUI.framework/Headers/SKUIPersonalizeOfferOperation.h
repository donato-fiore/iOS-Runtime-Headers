// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPERSONALIZEOFFEROPERATION_H
#define SKUIPERSONALIZEOFFEROPERATION_H

@class NSOperation;
@protocol OS_dispatch_queue;


#import "SKUIClientContext.h"

@interface SKUIPersonalizeOfferOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSInteger _itemID;
    id *_outputBlock;
}


@property (copy) id *outputBlock;


-(id)initWithItemIdentifier:(NSInteger)arg0 clientContext:(id)arg1 ;
-(void)main;


@end


#endif