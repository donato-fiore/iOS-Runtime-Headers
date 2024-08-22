// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCONCEPTSYNTHESIZER_H
#define HKCONCEPTSYNTHESIZER_H


#import <Foundation/Foundation.h>


@interface HKConceptSynthesizer : NSObject



+(id)_popValueForString:(id)arg0 startingFromSubstring:(id)arg1 untilSubstring:(id)arg2 outRemainderString:(*id)arg3 outEndOfString:(*BOOL)arg4 error:(*id)arg5 ;
+(id)_substringsInBetweenSequentialDelimiters:(id)arg0 poppableString:(id)arg1 outReachedEndOfString:(*BOOL)arg2 outStringRemainder:(*id)arg3 error:(*id)arg4 ;
+(id)_synthesizeConceptWithIdentifier:(id)arg0 forCodingCollection:(id)arg1 additionalAttributes:(id)arg2 ;
+(id)_synthesizeConceptWithIdentifier:(id)arg0 forCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2 addtionalAttributes:(id)arg3 ;
+(id)adHocCodingForCodingCollection:(id)arg0 ;
+(id)bestCodingSystemForDisplayForCodingCollection:(id)arg0 prioritizedCodingSystems:(id)arg1 ;
+(id)bestDisplayNameForCodingCollection:(id)arg0 ;
+(id)bestDisplayNameForCodingCollection:(id)arg0 prioritizedCodingSystems:(id)arg1 ;
+(id)codingCollectionFromAdHocCode:(id)arg0 error:(*id)arg1 ;
+(id)enumerateCodingsBySystem:(id)arg0 prioritizingCodingSystems:(id)arg1 handler:(id)arg2 ;
+(id)prioritizedCodingSystemsForDisplay;
+(id)privateCodeCreationCodingSortDescriptors;
+(id)synthesizeConceptWithIdentifier:(id)arg0 forCodingCollection:(id)arg1 ;
+(id)synthesizeInMemoryConceptForCodingCollection:(id)arg0 ;
+(id)synthesizeInMemoryConceptForCodingCollection:(id)arg0 additionalAttributes:(id)arg1 ;


@end


#endif