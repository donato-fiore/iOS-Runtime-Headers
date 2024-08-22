// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRLV2PLIST_H
#define SRLV2PLIST_H


#import <Foundation/Foundation.h>


@interface SRLv2Plist : NSObject {
    float maskThreshold;
    float minFaceSize;
    float maxCurveBoost;
    float minCurveBoost;
    float maxTargetRatioDarkening;
    float maxTargetRatioLimit;
    float biasFactorSRLv2;
    float toneSimilaritySigma;
    float faceExpDifThreshold;
    BOOL relightOnlyPersonMask;
    float targetMedian_I;
    float targetMedian_II;
    float targetMedian_III;
    float targetMedian_IV;
    float targetMedian_V;
    float targetMedian_VI;
    float maxBoost_I;
    float maxBoost_II;
    float maxBoost_III;
    float maxBoost_IV;
    float maxBoost_V;
    float maxBoost_VI;
}




-(int)readPlist:(id)arg0 ;


@end


#endif