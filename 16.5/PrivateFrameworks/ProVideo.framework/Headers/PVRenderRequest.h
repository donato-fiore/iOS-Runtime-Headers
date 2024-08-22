// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVRENDERREQUEST_H
#define PVRENDERREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PVRenderRequest : NSObject

@property (nonatomic) unsigned int childCode; // ivar: _childCode
@property (nonatomic) int gcdPriority; // ivar: _gcdPriority
@property (nonatomic) int gpuPriority; // ivar: _gpuPriority
@property (nonatomic) BOOL highQuality; // ivar: _highQuality
@property (nonatomic) unsigned int outputCVPixelBufferFormat; // ivar: _outputCVPixelBufferFormat
@property (readonly, nonatomic) NSArray *outputNodes; // ivar: _outputNodes
@property (readonly, nonatomic) CGSize outputSize; // ivar: _outputSize
@property (nonatomic) unsigned int parentCode; // ivar: _parentCode
@property (nonatomic) int priority; // ivar: _priority
@property (readonly, nonatomic) ? time; // ivar: _time
@property (retain, nonatomic) id *userContext; // ivar: _userContext


-(id)initWithOutputs:(id)arg0 atTime:(struct ? )arg1 outputSize:(struct CGSize )arg2 ;


@end


#endif