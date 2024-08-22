// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDRESOLVEDLAYERREFERENCE_H
#define TDRESOLVEDLAYERREFERENCE_H



#import "TDAbstractLayerReference.h"
#import "TDSimpleArtworkRenditionSpec.h"
#import "TDFlattenedImageRenditionSpec.h"

@interface TDResolvedLayerReference : TDAbstractLayerReference

@property (retain, nonatomic) TDSimpleArtworkRenditionSpec *reference;
@property (retain, nonatomic) TDFlattenedImageRenditionSpec *stack;




@end


#endif