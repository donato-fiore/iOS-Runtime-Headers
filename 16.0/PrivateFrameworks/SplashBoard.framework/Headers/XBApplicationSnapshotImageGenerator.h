// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XBAPPLICATIONSNAPSHOTIMAGEGENERATOR_H
#define XBAPPLICATIONSNAPSHOTIMAGEGENERATOR_H

@class NSString;
@protocol XBApplicationSnapshotImageGenerationScheduling, XBSnapshotDataProvider;

#import <Foundation/Foundation.h>

#import "XBApplicationSnapshot.h"

@interface XBApplicationSnapshotImageGenerator : NSObject {
    XBApplicationSnapshot *_weak_snapshot;
    id<XBApplicationSnapshotImageGenerationScheduling> *_scheduler;
    id<XBSnapshotDataProvider> *_dataProvider;
    id *_didGenerateImageHandler;
    id *_didGenerateImageDataHandler;
    NSString *_loggingPrefix;
    BOOL _generate_handled_request;
    os_unfair_lock_s _generate_lock;
    NSInteger _imageDataRequest;
    NSInteger _dataProviderFetchType;
}




-(BOOL)_generate_lock_shouldGenerateForSnapshot:(id)arg0 reason:(*id)arg1 ;
-(BOOL)_shouldGenerateForSnapshot:(id)arg0 reason:(*id)arg1 ;
-(id)_generate_imageFromLegacyDataProvider:(id)arg0 forSnapshot:(id)arg1 imageDataHandler:(id)arg2 ;
-(id)_generate_imageFromNewDataProvider:(id)arg0 forSnapshot:(id)arg1 imageDataHandler:(id)arg2 ;
// -(id)initWithScheduler:(id)arg0 snapshot:(id)arg1 dataProvider:(id)arg2 imageDataRequest:(NSInteger)arg3 loggingPrefix:(id)arg4 imageGenerationHandler:(id)arg5 imageDataGenerationHandler:(unk)arg6  ;
-(void)_generate;
// -(void)_performImageDataGeneration:(id)arg0 withHandler:(unk)arg1  ;
-(void)generate;
-(void)performAsync:(id)arg0 ;
-(void)scheduleGeneration;


@end


#endif