// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARPERSONOCCLUSIONPARENTTECHNIQUE_H
#define ARPERSONOCCLUSIONPARENTTECHNIQUE_H

@class ARTechnique<ARMLDepthDataSourceProvider>, NSString;
@protocol ARTechniqueDelegate, ARTechniqueForwardingStrategy;


#import "ARParentTechnique.h"
#import "ARTechnique.h"

@interface ARPersonOcclusionParentTechnique : ARParentTechnique <ARTechniqueDelegate>

 {
    CGFloat _lastDetectedPersonTimeStamp;
    BOOL _detectedPerson;
    Class _detectionTechniqueClass;
    BOOL _shouldSkipFramesWhenBusy;
    ARTechnique<ARMLDepthDataSourceProvider> *_depthTechnique;
    ARTechnique *_personDetectionTechnique;
    *__CVBuffer _placeholderDepthBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<ARTechniqueForwardingStrategy> *depthTechniqueProcessingStrategy; // ivar: _depthTechniqueProcessingStrategy
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger optimizationStrategy; // ivar: _optimizationStrategy
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithTechniques:(id)arg0 delegate:(id)arg1 ;
-(id)processData:(id)arg0 ;
-(id)techniquesToRunWithForwardedDepth:(BOOL)arg0 ;
-(void)dealloc;
-(void)reconfigureFrom:(id)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(void)setTechniques:(id)arg0 ;
-(void)technique:(id)arg0 didOutputResultData:(id)arg1 timestamp:(CGFloat)arg2 context:(id)arg3 ;


@end


#endif