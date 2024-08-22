// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BCULAYERRENDEREROPERATION_H
#define _BCULAYERRENDEREROPERATION_H

@class NSString, CALayer;
@protocol BCUOperation, BCUPurgeableImage;

#import <Foundation/Foundation.h>

#import "BCULayerRenderer.h"

@interface _BCULayerRendererOperation : NSObject <BCUOperation>

 {
    uint8_t _operationId;
    BOOL _cancelled;
    BOOL _configuring;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CALayer *layer; // ivar: _layer
@property (copy, nonatomic) id *layerBlock; // ivar: _layerBlock
@property (nonatomic) float priority; // ivar: _priority
@property (retain, nonatomic) BCULayerRenderer *renderer; // ivar: _renderer
@property (retain, nonatomic) NSObject<BCUPurgeableImage> *result; // ivar: _result
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL waitForCPUSynchronization; // ivar: _waitForCPUSynchronization


-(NSInteger)_compareHoldingStateLock:(id)arg0 ;
-(id)configureLayer;
// -(id)initWithRenderer:(id)arg0 priority:(float)arg1 waitForCPUSynchronization:(BOOL)arg2 layerBlock:(id)arg3 completion:(unk)arg4  ;
-(void)cancel;
-(void)completeWithImage:(id)arg0 ;
-(void)dealloc;
-(void)start;


@end


#endif