// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNRECOGNIZEDOCUMENTSREQUESTCONFIGURATION_H
#define VNRECOGNIZEDOCUMENTSREQUESTCONFIGURATION_H



#import "VNRecognizeTextRequestConfiguration.h"

@interface VNRecognizeDocumentsRequestConfiguration : VNRecognizeTextRequestConfiguration

@property (nonatomic) BOOL detectionOnly; // ivar: _detectionOnly
@property (nonatomic) NSUInteger maximumCandidateCount; // ivar: _maximumCandidateCount
@property (nonatomic) BOOL usesAlternateLineGrouping; // ivar: _usesAlternateLineGrouping
@property (nonatomic) BOOL usesLanguageDetection; // ivar: _usesLanguageDetection


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif