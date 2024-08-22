// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXMDISPLAYPROBE_IPHONEOS_INTERNAL_H
#define MXMDISPLAYPROBE_IPHONEOS_INTERNAL_H

@class NSString;
@protocol MXMDisplayProbePlatform, OS_dispatch_queue, MXMDisplayProbePlatformDelegate;

#import <Foundation/Foundation.h>

#import "MXMDisplayDescriptor.h"

@interface MXMDisplayProbe_iphoneOS_Internal : NSObject <MXMDisplayProbePlatform>

 {
    MXMDisplayDescriptor *_displayDescriptor;
    ? _lastSample;
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _pollRate;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MXMDisplayProbePlatformDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)_displayIndexWithDescriptor:(id)arg0 ;
+(id)_allDescriptors;
-(id)initPrivateWithDescriptor:(id)arg0 queue:(id)arg1 ;
-(struct ? )_pollDisplayForSample;
-(void)_loop;
-(void)_pollMain;
-(void)_start;
-(void)_stop;


@end


#endif