// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCASSETLOADER_H
#define MPCASSETLOADER_H

@class NSOperationQueue;
@protocol MFAssetLoading, MPCAssetLoaderDelegate;

#import <Foundation/Foundation.h>

#import "MPCPlayerItemConfigurator.h"

@interface MPCAssetLoader : NSObject <MFAssetLoading>



@property (retain, nonatomic) MPCPlayerItemConfigurator *configurator; // ivar: _configurator
@property (weak, nonatomic) NSObject<MPCAssetLoaderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSOperationQueue *loadingQueue; // ivar: _loadingQueue


-(id)initWithDelegate:(id)arg0 ;
-(void)cancelLoading;
-(void)loadAssetFor:(id)arg0 token:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif