// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGNAMINGBIOLOGICALSEXANALYZER_H
#define PGNAMINGBIOLOGICALSEXANALYZER_H

@class NSString;
@protocol PGNamingAnalyzer;

#import <Foundation/Foundation.h>

#import "PGGraphNamingProcessor.h"

@interface PGNamingBiologicalSexAnalyzer : NSObject <PGNamingAnalyzer>

 {
    PGGraphNamingProcessor *_processor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)sexMatchBetweenPersonBiologicalSex:(NSUInteger)arg0 andContactBiologicalSex:(NSUInteger)arg1 ;
-(id)initWithNamingProcessor:(id)arg0 ;
-(id)name;
-(void)runAnalysisWithProgressBlock:(id)arg0 ;


@end


#endif