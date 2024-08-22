// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDLAYERSTACKPRODUCTION_H
#define TDLAYERSTACKPRODUCTION_H



#import "TDNamedArtworkProduction.h"
#import "TDSimpleArtworkElementProduction.h"

@interface TDLayerStackProduction : TDNamedArtworkProduction

@property (retain, nonatomic) TDNamedArtworkProduction *flattenedImageProduction;
@property (retain, nonatomic) TDSimpleArtworkElementProduction *radiosityImageProduction;




@end


#endif