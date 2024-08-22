// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTIMAGEQUEUESAMPLEEVENT_H
#define SIGNPOSTIMAGEQUEUESAMPLEEVENT_H

@protocol SignpostCARenderServerFrameMetadata;

#import <Foundation/Foundation.h>


@interface SignpostImageQueueSampleEvent : NSObject <SignpostCARenderServerFrameMetadata>



@property (readonly, nonatomic) unsigned int frameSeed; // ivar: _frameSeed
@property (readonly, nonatomic) unsigned int queueGeneration; // ivar: _queueGeneration
@property (readonly, nonatomic) unsigned int queueID; // ivar: _queueID
@property (readonly, nonatomic) CGFloat serverSamplingTime; // ivar: _serverSamplingTime
@property (readonly, nonatomic) unsigned int surfaceID; // ivar: _surfaceID


-(id)initWithImageQueueSampleEvent:(id)arg0 ;


@end


#endif