// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPKEYWORDFEATUREEXTRACTOR_H
#define IPKEYWORDFEATUREEXTRACTOR_H



#import "IPFeatureExtractor.h"

@interface IPKeywordFeatureExtractor : IPFeatureExtractor



-(id)_matchingKeywordsForRegex:(id)arg0 inText:(id)arg1 message:(id)arg2 eventType:(id)arg3 keywordType:(NSUInteger)arg4 ;
-(id)featuresForTextString:(id)arg0 inMessageUnit:(id)arg1 context:(id)arg2 ;
-(id)matchesForTextString:(id)arg0 inMessageUnit:(id)arg1 eventType:(id)arg2 ;
-(id)matchesForTextString:(id)arg0 inMessageUnit:(id)arg1 eventType:(id)arg2 keywordType:(NSUInteger)arg3 ;
-(id)queue;


@end


#endif