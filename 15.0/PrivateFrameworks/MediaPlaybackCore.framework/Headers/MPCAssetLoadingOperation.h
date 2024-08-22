// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCASSETLOADINGOPERATION_H
#define MPCASSETLOADINGOPERATION_H

@class NSOperation, NSError, MPAVItem;
@protocol OS_dispatch_queue, MPCAssetLoaderDelegate;


#import "MPCPlayerItemConfigurator.h"

@interface MPCAssetLoadingOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}


@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) MPCPlayerItemConfigurator *configurator; // ivar: _configurator
@property (weak, nonatomic) NSObject<MPCAssetLoaderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) MPAVItem *item; // ivar: _item
@property (readonly, nonatomic) NSInteger token; // ivar: _token


-(BOOL)_configureItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)initWithPlayerItem:(id)arg0 configurator:(id)arg1 delegate:(id)arg2 token:(NSInteger)arg3 callbackQueue:(id)arg4 completion:(id)arg5 ;
-(void)main;
-(void)start;


@end


#endif