// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFACESNAPSHOTTER_H
#define NTKFACESNAPSHOTTER_H

@class NSString;
@protocol NTKComplicationCollectionObserver;

#import <Foundation/Foundation.h>

#import "NTKFaceSnapshottingWindow.h"

@interface NTKFaceSnapshotter : NSObject <NTKComplicationCollectionObserver>

 {
    NTKFaceSnapshottingWindow *_snapshotWindow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultModernSnapshotOptions;
+(id)renderSnapshotAndTexture:(*id)arg0 fromWindow:(id)arg1 ;
+(id)renderSnapshotFromWindow:(id)arg0 ;
-(id)init;
-(id)viewControllerForFace:(id)arg0 withOptions:(id)arg1 ;
-(void)_hideSnapshotWindow;
-(void)_mainQueue_serviceRequest:(id)arg0 completion:(id)arg1 ;
-(void)_queue_serviceRequestIfIdle;
-(void)_setupNotificationForCollectionLoadForDevice:(id)arg0 completion:(id)arg1 ;
-(void)_showSnapshotWindowForDevice:(id)arg0 ;
-(void)complicationCollectionDidLoad:(id)arg0 ;
-(void)dealloc;
-(void)provideSnapshotOfFace:(id)arg0 completion:(id)arg1 ;
-(void)provideSnapshotOfFace:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif