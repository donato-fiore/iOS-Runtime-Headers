// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLNNLAYERCOMPUTEUNITSELECTIONUTILS_H
#define MLNNLAYERCOMPUTEUNITSELECTIONUTILS_H


#import <Foundation/Foundation.h>


@interface MLNNLayerComputeUnitSelectionUtils : NSObject



+(BOOL)undoLastHintUpdate:(id)arg0 error:(*id)arg1 ;
+(BOOL)updateHints:(id)arg0 hints:(id)arg1 error:(*id)arg2 ;
+(id)getLayerHints:(id)arg0 error:(*id)arg1 ;
+(id)getLayerTypes:(id)arg0 error:(*id)arg1 ;
+(id)getNetJson:(id)arg0 error:(*id)arg1 ;


@end


#endif