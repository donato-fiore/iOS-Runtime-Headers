// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUILOADPRODUCTPAGEOPERATION_H
#define SKUILOADPRODUCTPAGEOPERATION_H

@class NSOperation, SSMetricsPageEvent, NSURLRequest;
@protocol OS_dispatch_queue;


#import "SKUIClientContext.h"

@interface SKUILoadProductPageOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSInteger _itemID;
    SSMetricsPageEvent *_metricsPageEvent;
    id *_outputBlock;
    NSURLRequest *_urlRequest;
}


@property (readonly) SSMetricsPageEvent *metricsPageEvent;
@property (copy) id *outputBlock;


-(id)_initSKUILoadProductPageOperation;
-(id)initWithItemIdentifier:(NSInteger)arg0 clientContext:(id)arg1 ;
-(id)initWithProductPageURLRequest:(id)arg0 clientContext:(id)arg1 ;
-(void)main;


@end


#endif