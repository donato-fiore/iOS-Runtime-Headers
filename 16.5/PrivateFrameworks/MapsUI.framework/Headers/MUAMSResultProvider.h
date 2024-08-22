// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUAMSRESULTPROVIDER_H
#define MUAMSRESULTPROVIDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MUAMSResultCache.h"

@interface MUAMSResultProvider : NSObject {
    MUAMSResultCache *_amsResultCache;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initWithCache:(id)arg0 ;
-(void)_finishWithResults:(id)arg0 error:(id)arg1 onCallbackQueue:(id)arg2 completion:(id)arg3 ;
-(void)fetchResultsForAdamIds:(id)arg0 options:(id)arg1 callbackQueue:(id)arg2 completion:(id)arg3 ;
-(void)fetchResultsForBundleIds:(id)arg0 options:(id)arg1 callbackQueue:(id)arg2 completion:(id)arg3 ;


@end


#endif