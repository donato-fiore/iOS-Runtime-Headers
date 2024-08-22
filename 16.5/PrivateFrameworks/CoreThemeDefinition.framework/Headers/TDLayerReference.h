// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDLAYERREFERENCE_H
#define TDLAYERREFERENCE_H



#import "TDAbstractLayerReference.h"
#import "TDNamedArtworkProduction.h"
#import "TDLayerStackRenditionSpec.h"

@interface TDLayerReference : TDAbstractLayerReference

@property (retain, nonatomic) TDNamedArtworkProduction *reference;
@property (retain, nonatomic) TDLayerStackRenditionSpec *stack;


-(id)cuiLayerReference;


@end


#endif