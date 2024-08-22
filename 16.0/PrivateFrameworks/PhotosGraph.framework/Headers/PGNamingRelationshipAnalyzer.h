// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGNAMINGRELATIONSHIPANALYZER_H
#define PGNAMINGRELATIONSHIPANALYZER_H

@class NSString;
@protocol PGNamingAnalyzer;

#import <Foundation/Foundation.h>

#import "PGGraphNamingProcessor.h"

@interface PGNamingRelationshipAnalyzer : NSObject <PGNamingAnalyzer>

 {
    PGGraphNamingProcessor *_processor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithNamingProcessor:(id)arg0 ;
-(id)name;
-(void)findRelationshipMatchesFromContactIdentifiersByRelationship:(id)arg0 graph:(id)arg1 withProgressBlock:(id)arg2 ;
-(void)runAnalysisWithProgressBlock:(id)arg0 ;


@end


#endif