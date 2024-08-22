// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLEXTENSIONHOSTCONTEXTTHUMBNAILOPERATION_H
#define QLEXTENSIONHOSTCONTEXTTHUMBNAILOPERATION_H

@class NSOperationQueue, NSFileCoordinator, NSDictionary;
@protocol OS_dispatch_semaphore, QLTExtensionThumbnailItem;


#import "QLAsynchronousOperation.h"
#import "QLThumbnailHostContext.h"

@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation

@property (nonatomic) NSUInteger badgeType; // ivar: _badgeType
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSOperationQueue *coordinationQueue; // ivar: _coordinationQueue
@property (retain, nonatomic) NSFileCoordinator *coordinator; // ivar: _coordinator
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *generationSemaphore; // ivar: _generationSemaphore
@property (retain, nonatomic) NSDictionary *generatorData; // ivar: _generatorData
@property (retain, nonatomic) QLThumbnailHostContext *hostContext; // ivar: _hostContext
@property (nonatomic) int iconFlavor; // ivar: _iconFlavor
@property (nonatomic) int interpolationQuality; // ivar: _interpolationQuality
@property (retain, nonatomic) NSObject<QLTExtensionThumbnailItem> *item; // ivar: _item
@property (nonatomic) CGFloat minimumSize; // ivar: _minimumSize
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (copy, nonatomic) id *serviceErrorHandler; // ivar: _serviceErrorHandler
@property (nonatomic) CGSize size; // ivar: _size


// -(id)initWithThumbnailHostContext:(id)arg0 item:(id)arg1 size:(struct CGSize )arg2 minimumSize:(CGFloat)arg3 scale:(CGFloat)arg4 badgeType:(NSUInteger)arg5 iconFlavor:(int)arg6 generatorData:(id)arg7 interpolationQuality:(int)arg8 completionHandler:(id)arg9 serviceErrorHandler:(unk)arg10  ;
-(void)finish;
-(void)main;


@end


#endif