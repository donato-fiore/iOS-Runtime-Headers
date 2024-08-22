// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TXRDEFERREDELEMENTINFO_H
#define TXRDEFERREDELEMENTINFO_H

@class NSMutableArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface TXRDeferredElementInfo : NSObject {
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
}


@property (readonly, nonatomic) NSMutableArray *faces; // ivar: _faces


-(id)initAsCubemap:(BOOL)arg0 ;


@end


#endif