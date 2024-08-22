// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFLEXMUSICDOWNLOADER_H
#define PXFLEXMUSICDOWNLOADER_H

@class NSString, NSProgress;
@protocol PXChangeObserver, NSProgressReporting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXExpectation.h"
#import "PXFlexMusicAsset.h"

@interface PXFlexMusicDownloader : NSObject <PXChangeObserver, NSProgressReporting>

 {
    id *_queue_completionHandler;
    BOOL _queue_isFinished;
    NSObject<OS_dispatch_queue> *_queue;
    PXExpectation *_queue_downloadExpectation;
    NSInteger _downloadSignpostID;
}


@property (readonly, nonatomic) PXFlexMusicAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat downloadFractionCompleted; // ivar: _downloadFractionCompleted
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSInteger resource; // ivar: _resource
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAsset:(id)arg0 resource:(NSInteger)arg1 ;
-(void)_handleCancellation;
-(void)_queue_finishIfPossible;
-(void)_queue_handleDownloadFinished:(BOOL)arg0 error:(id)arg1 ;
-(void)_queue_handleDownloadProgressChanged;
-(void)_queue_startWithCompletion:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)startWithCompletion:(id)arg0 ;


@end


#endif