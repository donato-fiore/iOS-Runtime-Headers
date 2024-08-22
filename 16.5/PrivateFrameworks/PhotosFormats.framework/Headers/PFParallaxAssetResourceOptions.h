// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPARALLAXASSETRESOURCEOPTIONS_H
#define PFPARALLAXASSETRESOURCEOPTIONS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PFParallaxAssetResourceOptions : NSObject

@property (nonatomic) BOOL aspectFit; // ivar: _aspectFit
@property (copy, nonatomic) id *canHandleAdjustmentData; // ivar: _canHandleAdjustmentData
@property (copy, nonatomic) id *downloadProgressHandler; // ivar: _downloadProgressHandler
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // ivar: _resultHandlerQueue




@end


#endif