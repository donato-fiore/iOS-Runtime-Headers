// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMAXELEMENTDETECTORNODE_H
#define AXMAXELEMENTDETECTORNODE_H



#import "AXMMobileAssetEvaluationNode.h"
#import "AXMIconClassDetectorNode.h"
#import "AXMindNetDetector.h"

@interface AXMAXElementDetectorNode : AXMMobileAssetEvaluationNode {
    AXMIconClassDetectorNode *_iconDetector;
}


@property (readonly, nonatomic) AXMindNetDetector *clickabilityDetector; // ivar: _clickabilityDetector
@property (readonly, nonatomic) AXMindNetDetector *mindNetDetector; // ivar: _mindNetDetector


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(CGFloat)IoUForbb1:(struct CGRect )arg0 bb2:(struct CGRect )arg1 ;
-(NSInteger)remapUIClassForClickability:(int)arg0 andClass:(NSInteger)arg1 ;
-(NSUInteger)maxSupportedFormatVersion;
-(NSUInteger)minSupportedFormatVersion;
-(id)_imageByWipingTextFromRects:(id)arg0 image:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 ciContext:(id)arg3 ;
-(id)_nonMaxSupression:(id)arg0 iouThreshold:(CGFloat)arg1 ;
-(id)_performCrossClassNMSForDetections:(id)arg0 iouThreshold:(CGFloat)arg1 ;
-(id)_screenEquivalenceToken:(id)arg0 ;
-(id)contentVersionKey;
-(id)mlModelClasses;
-(id)mobileAssetType;
-(id)modelResourceNames;
-(void)_evaluateANOD:(id)arg0 metrics:(id)arg1 ;
-(void)_initializeClickabilityModel;
-(void)_initializeIconDetector;
-(void)_initializeMindNetDetector;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;


@end


#endif