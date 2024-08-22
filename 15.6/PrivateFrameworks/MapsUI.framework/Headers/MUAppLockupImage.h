// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUAPPLOCKUPIMAGE_H
#define MUAPPLOCKUPIMAGE_H

@class UIImage, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MUAppLockupImageMetrics.h"

@interface MUAppLockupImage : NSObject {
    NSObject<OS_dispatch_queue> *_imageProcessingQueue;
}


@property (readonly, nonatomic) UIImage *cachedImage; // ivar: _cachedImage
@property (readonly, nonatomic) MUAppLockupImageMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithRemoteURL:(id)arg0 metrics:(id)arg1 ;
-(void)loadImageWithCompletion:(id)arg0 ;


@end


#endif