// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18VISUALINTELLIGENCE9PARSEFLOW_H
#define _TTC18VISUALINTELLIGENCE9PARSEFLOW_H

@class SwiftObject;



@interface _TtC18VisualIntelligence9ParseFlow : SwiftObject {
    ? triggeringModelProcessor;
    ? domainAssignmentProcessor;
    ? regionMergingProcessor;
    ? regionSelectionProcessor;
    ? triggeringPredictionProcessor;
    ? annotationExtractorProcessor;
    ? nsfwCheckerProcessor;
    ? eligibilityChecker;
    ? availableDomainManager;
    ? config;
    ? trialWrapper;
    ? ocrRequiringDomains;
    ? modelProviderService;
    ? objectDetector;
    ? domainGlyphConfig;
    ? queue;
    ? _flowEvent;
}






@end


#endif