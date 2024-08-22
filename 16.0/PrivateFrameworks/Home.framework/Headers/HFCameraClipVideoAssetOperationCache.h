// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERACLIPVIDEOASSETOPERATIONCACHE_H
#define HFCAMERACLIPVIDEOASSETOPERATIONCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HFCameraClipVideoAssetOperationMarker.h"

@interface HFCameraClipVideoAssetOperationCache : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (retain, nonatomic) HFCameraClipVideoAssetOperationMarker *head; // ivar: _head
@property (retain, nonatomic) NSMutableDictionary *markerInfo; // ivar: _markerInfo
@property (nonatomic) NSUInteger maxSize; // ivar: _maxSize
@property (retain, nonatomic) HFCameraClipVideoAssetOperationMarker *tail; // ivar: _tail
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(CGFloat)defaultFrameSize;
-(NSUInteger)cacheSizeForDevice;
-(id)init;
-(id)operationForKey:(id)arg0 ;
-(void)_removeOperationForKey:(id)arg0 ;
-(void)addOperation:(id)arg0 forClip:(id)arg1 usingKey:(id)arg2 ;
-(void)pointHeadAtMarker:(id)arg0 ;
-(void)purge;
-(void)removeMarker:(id)arg0 ;
-(void)removeOperationForKey:(id)arg0 ;
-(void)resetSentinels;


@end


#endif