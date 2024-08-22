// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMAPSNAPSHOTTER_H
#define MKMAPSNAPSHOTTER_H

@class geo_isolater, NSXPCConnection, VKMapSnapshotCreator;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MKMapSnapshotOptions.h"

@interface MKMapSnapshotter : NSObject {
    MKMapSnapshotOptions *_options;
    int _loadingFlag;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id *_completionHandler;
    geo_isolater *_isolation;
    NSXPCConnection *_snapshotService;
    VKMapSnapshotCreator *_snapshotCreator;
    BOOL _needsResume;
}


@property (readonly, nonatomic, getter=isLoading) BOOL loading;


-(BOOL)_isWidget;
-(BOOL)_shouldRenderLogoForSnapshotDimensions;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(void)_cancel;
-(void)_cleanupSnapshotCreator;
-(void)_deliverSnapshot:(id)arg0 ;
-(void)_drawAppleLogoIfNecessaryOnSnapshot:(id)arg0 ;
-(void)_enterBackground:(id)arg0 ;
-(void)_exitBackground:(id)arg0 ;
-(void)_failWithError:(id)arg0 ;
-(void)_performSnapshot;
-(void)_respondWithError:(id)arg0 ;
-(void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
-(void)_succeedWithSnapshot:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)startWithQueue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif