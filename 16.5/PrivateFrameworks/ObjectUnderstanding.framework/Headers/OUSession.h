// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OUSESSION_H
#define OUSESSION_H

@class NSDate, NSArray, NSMutableDictionary, OS_os_workgroup;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OUFrame, OUSessionDelegate;

#import <Foundation/Foundation.h>

#import "OUConfiguration.h"
#import "OU3DObjectDetector.h"
#import "OUObjectAsset.h"

@interface OUSession : NSObject {
    OUConfiguration *configuration_;
    OU3DObjectDetector *det3d_;
    NSObject<OS_dispatch_queue> *detQueue_;
    NSObject<OS_dispatch_queue> *ouframeQueue_;
    NSObject<OS_dispatch_semaphore> *detSemaphore_;
    float _minFrameInterval;
    NSDate *_detStartDate;
    NSArray *objects_;
    OUObjectAsset *object_asset_;
    NSArray *offline_objects_;
    NSMutableDictionary *allKeyframes_;
    NSMutableDictionary *skipedKeyframes_;
    id<OUFrame> *ouframe_;
    OS_os_workgroup *_workgroupOD;
    OS_os_workgroup *_workgroupFrame;
}


@property (weak, nonatomic) NSObject<OUSessionDelegate> *delegate; // ivar: _delegate


-(id)init:(BOOL)arg0 ;
-(void)generateOfflineObjectAsset:(id)arg0 onlineObjects:(id)arg1 block:(id)arg2 ;
-(void)generateOfflineObjects:(id)arg0 onlineObjects:(id)arg1 ;
-(void)generateOfflineObjects:(id)arg0 onlineObjects:(id)arg1 block:(id)arg2 ;
-(void)runWithConfiguration:(id)arg0 ;
-(void)stop;
-(void)updateWithFrame:(id)arg0 ;
-(void)updateWithKeyframes:(id)arg0 currentCameraPose:(struct ? )arg1 ;
-(void)updateWithKeyframes:(id)arg0 ouframe:(id)arg1 ;


@end


#endif