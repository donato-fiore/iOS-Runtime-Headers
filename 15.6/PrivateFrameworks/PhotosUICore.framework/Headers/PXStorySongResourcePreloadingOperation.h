// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYSONGRESOURCEPRELOADINGOPERATION_H
#define PXSTORYSONGRESOURCEPRELOADINGOPERATION_H

@class NSString, NSProgress;
@protocol PXChangeObserver, NSProgressReporting, OS_dispatch_queue, PXStorySongResource;


#import "PXAsyncOperation.h"
#import "PXAudioSession.h"

@interface PXStorySongResourcePreloadingOperation : PXAsyncOperation <PXChangeObserver, NSProgressReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<PXStorySongResource> *resource; // ivar: _resource
@property (retain, nonatomic) PXAudioSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSongResource:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)px_start;


@end


#endif