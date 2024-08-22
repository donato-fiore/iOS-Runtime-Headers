// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVARTWORKSERVICECOLORANALYSISOPERATION_H
#define MSVARTWORKSERVICECOLORANALYSISOPERATION_H



#import "MSVArtworkServiceOperation.h"
#import "MSVArtworkColorAnalysis.h"

@interface MSVArtworkServiceColorAnalysisOperation : MSVArtworkServiceOperation {
    MSVArtworkColorAnalysis *_colorAnalysis;
}


@property (readonly, nonatomic) MSVArtworkColorAnalysis *colorAnalysis;


-(void)main;


@end


#endif