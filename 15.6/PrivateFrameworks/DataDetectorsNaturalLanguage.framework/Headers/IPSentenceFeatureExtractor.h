// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPSENTENCEFEATUREEXTRACTOR_H
#define IPSENTENCEFEATUREEXTRACTOR_H



#import "IPFeatureExtractor.h"

@interface IPSentenceFeatureExtractor : IPFeatureExtractor



-(NSUInteger)responseKitAnnotationTypeForFeatureDataType:(NSUInteger)arg0 ;
-(id)eventIdentifierForLanguageID:(id)arg0 ;
-(id)featureSentencesFromText:(id)arg0 dataDetectedFeatures:(id)arg1 languageID:(id)arg2 ;
-(id)featuresForTextString:(id)arg0 inMessageUnit:(id)arg1 context:(id)arg2 ;
-(id)queue;
-(void)identifyAndStorePolarityInFeatureSentences:(id)arg0 eventIdentifier:(id)arg1 previousFeatureSentences:(id)arg2 ;


@end


#endif