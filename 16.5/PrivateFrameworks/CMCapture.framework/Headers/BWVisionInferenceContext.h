// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWVISIONINFERENCECONTEXT_H
#define BWVISIONINFERENCECONTEXT_H

@class VNSequenceRequestHandler;

#import <Foundation/Foundation.h>


@interface BWVisionInferenceContext : NSObject

@property (readonly, nonatomic, getter=isPrepared) BOOL prepared;
@property (readonly, nonatomic) VNSequenceRequestHandler *sequenceRequestHandler; // ivar: _sequenceRequestHandler


+(void)initialize;
-(id)init;
-(int)prepareForInference;
-(void)dealloc;


@end


#endif