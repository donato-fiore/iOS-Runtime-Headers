// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCAMERACLIPVIDEOFILECOMBINER_H
#define HMCAMERACLIPVIDEOFILECOMBINER_H

@class NSString, NSArray;
@protocol HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMCameraClipVideoFileCombiner : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *videoFileURLs; // ivar: _videoFileURLs


+(id)logCategory;
-(id)initWithVideoFileURLs:(id)arg0 queue:(id)arg1 ;
-(void)combineToOutputFileURL:(id)arg0 completion:(id)arg1 ;
-(void)writeSamplesFromOutputs:(id)arg0 toInput:(id)arg1 completion:(id)arg2 ;


@end


#endif