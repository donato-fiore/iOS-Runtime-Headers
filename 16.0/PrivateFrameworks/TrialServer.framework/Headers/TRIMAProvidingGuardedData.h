// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIMAPROVIDINGGUARDEDDATA_H
#define TRIMAPROVIDINGGUARDEDDATA_H

@class NSMutableArray, MAAutoAsset;

#import <Foundation/Foundation.h>


@interface TRIMAProvidingGuardedData : NSObject {
    BOOL didDeferDuringMADownload;
    BOOL deferralHandlerInvalid;
    NSMutableArray *fetchSemaphores;
    BOOL cancelReceived;
    MAAutoAsset *currentAsset;
}




-(id)description;


@end


#endif