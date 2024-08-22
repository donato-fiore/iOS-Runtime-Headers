// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVREMOTEFIGSAMPLEBUFFERRENDERSYNCHRONIZERFACTORY_H
#define AVREMOTEFIGSAMPLEBUFFERRENDERSYNCHRONIZERFACTORY_H

@class NSString;
@protocol AVFigSampleBufferRenderSynchronizerFactory;

#import <Foundation/Foundation.h>


@interface AVRemoteFigSampleBufferRenderSynchronizerFactory : NSObject <AVFigSampleBufferRenderSynchronizerFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(struct OpaqueFigSampleBufferRenderSynchronizer *)createRenderSynchronizerWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 error:(*id)arg2 ;


@end


#endif