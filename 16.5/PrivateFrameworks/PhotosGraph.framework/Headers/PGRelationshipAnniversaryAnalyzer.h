// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGRELATIONSHIPANNIVERSARYANALYZER_H
#define PGRELATIONSHIPANNIVERSARYANALYZER_H

@class NSString;
@protocol PGRelationshipAnalyzer;

#import <Foundation/Foundation.h>

#import "PGGraphRelationshipProcessor.h"

@interface PGRelationshipAnniversaryAnalyzer : NSObject <PGRelationshipAnalyzer>

 {
    PGGraphRelationshipProcessor *_processor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;


-(id)initWithRelationshipProcessor:(id)arg0 ;
-(void)runAnalysisWithProgressBlock:(id)arg0 ;


@end


#endif