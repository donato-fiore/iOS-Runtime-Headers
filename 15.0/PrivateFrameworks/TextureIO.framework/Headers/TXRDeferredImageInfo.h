// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRDEFERREDIMAGEINFO_H
#define TXRDEFERREDIMAGEINFO_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "TXRImageInfo.h"

@interface TXRDeferredImageInfo : NSObject {
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
}


@property (retain, nonatomic) TXRImageInfo *info; // ivar: _info


-(id)init;
-(void)signalLoaded;


@end


#endif