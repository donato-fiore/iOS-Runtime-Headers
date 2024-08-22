// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIFACEOBSERVATIONCACHE_H
#define PIFACEOBSERVATIONCACHE_H

@protocol OS_dispatch_group, OS_dispatch_queue, NUFaceDetectionResult;

#import <Foundation/Foundation.h>


@interface PIFaceObservationCache : NSObject {
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
    id<NUFaceDetectionResult> *_result;
}




+(id)faceRequestWithRequest:(id)arg0 ;
-(id)init;
-(id)submitSynchronous:(id)arg0 error:(*id)arg1 ;
-(void)submit:(id)arg0 response:(id)arg1 ;


@end


#endif