// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLREGEXMATCHER_H
#define SLREGEXMATCHER_H

@class NSString, NSArray;
@protocol SLODLDPreProcessingComponent;

#import <Foundation/Foundation.h>


@interface SLRegexMatcher : NSObject <SLODLDPreProcessingComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *regexMatchingRules; // ivar: _regexMatchingRules
@property (retain, nonatomic) NSArray *replaceStrings; // ivar: _replaceStrings
@property (readonly) Class superclass;


-(id)applyPreprocessingOnUtt:(id)arg0 ;
-(id)initWithConfigFile:(id)arg0 ;
-(void)_compileRegexRulesForPatterns:(id)arg0 ;


@end


#endif