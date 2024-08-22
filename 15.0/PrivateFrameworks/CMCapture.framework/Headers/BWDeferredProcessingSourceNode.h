// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWDEFERREDPROCESSINGSOURCENODE_H
#define BWDEFERREDPROCESSINGSOURCENODE_H

@class NSDictionary;
@protocol OS_dispatch_queue;


#import "BWSourceNode.h"

@interface BWDeferredProcessingSourceNode : BWSourceNode {
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
    BOOL _running;
}


@property (readonly, nonatomic) NSDictionary *outputsByPortType; // ivar: _outputsByPortType


+(void)initialize;
-(BOOL)start:(*id)arg0 ;
-(BOOL)stop:(*id)arg0 ;
-(id)initWithPortTypes:(id)arg0 attributes:(id)arg1 colorSpaceProperties:(int)arg2 ;
-(id)outputForPortType:(id)arg0 ;
-(id)portTypeForOutput:(id)arg0 ;
-(void)dealloc;
-(void)processBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif