// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXLAYOUTPERFORMERCACHEENTRY_H
#define PXLAYOUTPERFORMERCACHEENTRY_H

@protocol PXLayoutPerformer;

#import <Foundation/Foundation.h>


@interface PXLayoutPerformerCacheEntry : NSObject

@property (retain, nonatomic) NSObject<PXLayoutPerformer> *performer; // ivar: _performer
@property (nonatomic) NSUInteger reentryCount; // ivar: _reentryCount




@end


#endif