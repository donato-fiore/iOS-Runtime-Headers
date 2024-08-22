// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFIGPREHEATITEM_H
#define PLFIGPREHEATITEM_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "PLPreheatItem.h"

@interface PLFigPreheatItem : PLPreheatItem {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject *_cachedImage;
    BOOL _cachedImageCancelled;
    NSUInteger _requestID;
    *CMPhotoDecompressionContainer _container;
    NSObject<OS_dispatch_group> *_requestGroup;
    NSObject<OS_dispatch_group> *_waitGroup;
    BOOL _dataIsLoading;
    uint8_t _cancelled;
    uint8_t _hasCachedImage;
}


@property (setter=_setHasCachedImage:) BOOL _hasCachedImage;
@property (readonly, copy, nonatomic) NSString *imagePath; // ivar: _imagePath
@property (readonly, nonatomic) unsigned int options; // ivar: _loadingOptions


-(BOOL)addImageHandler:(id)arg0 ;
-(BOOL)isCancelled;
-(id)cachedImage:(*BOOL)arg0 ;
-(id)cachedImageIfAvailable:(*BOOL)arg0 ;
-(id)decodeSessionOptions;
-(id)initWithImagePath:(id)arg0 format:(unsigned short)arg1 imageType:(NSInteger)arg2 optimalSourcePixelSize:(struct CGSize )arg3 options:(unsigned int)arg4 ;
-(id)initialDecodeSessionOptions;
-(id)preheatData;
-(void)_cacheImage;
-(void)_cancel;
-(void)_leaveWaitGroupIfNeeded;
-(void)_loadPreheatDataWithHandler:(id)arg0 ;
-(void)_uncancel;
-(void)cancelPreheatRequestWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)startPreheatRequestWithCompletionHandler:(id)arg0 ;


@end


#endif