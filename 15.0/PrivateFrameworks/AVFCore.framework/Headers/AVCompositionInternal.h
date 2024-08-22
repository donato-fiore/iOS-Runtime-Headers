// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCOMPOSITIONINTERNAL_H
#define AVCOMPOSITIONINTERNAL_H

@class NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "AVDispatchOnce.h"
#import "AVAssetInspectorLoader.h"
#import "AVAssetInspector.h"

@interface AVCompositionInternal : NSObject {
    *OpaqueFigMutableComposition mutableComposition;
    AVDispatchOnce *formatReaderInitializationOnce;
    AVDispatchOnce *assetInspectorInitializationOnce;
    AVDispatchOnce *tracksInitializationOnce;
    *OpaqueFigFormatReader formatReader;
    AVAssetInspectorLoader *assetInspectorLoader;
    AVAssetInspector *assetInspector;
    CGSize naturalSize;
    NSDictionary *URLAssetInitializationOptions;
    NSMutableArray *tracks;
    AVDispatchOnce *figAssetInitializationOnce;
    *OpaqueFigAsset figAsset;
}






@end


#endif