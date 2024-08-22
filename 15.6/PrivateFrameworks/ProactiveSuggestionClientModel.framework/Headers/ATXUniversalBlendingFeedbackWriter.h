// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXUNIVERSALBLENDINGFEEDBACKWRITER_H
#define ATXUNIVERSALBLENDINGFEEDBACKWRITER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXBiomeClientModelStream.h"
#import "ATXBiomeLightweightClientModelCacheUpdateStream.h"
#import "ATXBiomeBlendingModelStream.h"
#import "ATXUniversalBiomeUIStream.h"

@interface ATXUniversalBlendingFeedbackWriter : NSObject {
    ATXBiomeClientModelStream *_clientModelStream;
    ATXBiomeLightweightClientModelCacheUpdateStream *_lightWeightClientModelStream;
    ATXBiomeBlendingModelStream *_blendingModelStream;
    ATXUniversalBiomeUIStream *_uiStream;
    NSObject<OS_dispatch_queue> *_internalQueue;
}




-(id)init;
-(id)initWithClientModelStream:(id)arg0 lightWeightClientModelStream:(id)arg1 blendingModelStream:(id)arg2 uiStream:(id)arg3 ;
-(void)donateBlendingModelUICacheUpdate:(id)arg0 uiConsumer:(unsigned char)arg1 ;
-(void)donateUIInteractionEvent:(id)arg0 ;
-(void)sendEventToBiomeIfNeededForClientModelCacheUpdate:(id)arg0 previousUpdate:(id)arg1 ;


@end


#endif