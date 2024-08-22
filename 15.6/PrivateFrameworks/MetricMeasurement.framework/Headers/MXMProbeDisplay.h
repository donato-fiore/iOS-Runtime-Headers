// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXMPROBEDISPLAY_H
#define MXMPROBEDISPLAY_H

@class NSString;
@protocol MXMDisplayProbePlatformDelegate, MXMDisplayProbePlatform;


#import "MXMProbe.h"

@interface MXMProbeDisplay : MXMProbe <MXMDisplayProbePlatformDelegate>

 {
    id<MXMDisplayProbePlatform> *_impl;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)descriptors;
+(id)mainDescriptor;
+(id)probe;
+(id)probeWithDescriptor:(id)arg0 ;
-(id)init;
-(id)initWithDescriptor:(id)arg0 ;
-(void)_beginUpdates;
-(void)_didRecieveData:(id)arg0 ;
-(void)_stopUpdates;


@end


#endif