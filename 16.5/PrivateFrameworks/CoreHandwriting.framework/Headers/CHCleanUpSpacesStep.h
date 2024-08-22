// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCLEANUPSPACESSTEP_H
#define CHCLEANUPSPACESSTEP_H

@class NSLocale;


#import "CHPostprocessingStepModifyingOriginalTokens.h"

@interface CHCleanUpSpacesStep : CHPostprocessingStepModifyingOriginalTokens

@property (retain, nonatomic) NSLocale *locale; // ivar: _locale


-(id)cleanUpSpacesInToken:(id)arg0 leftContext:(id)arg1 inString:(id)arg2 withQuoteCount:(id)arg3 ;
-(id)initWithLocale:(id)arg0 ;
-(id)prepareQuoteCountFromLeftContext:(id)arg0 ;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif