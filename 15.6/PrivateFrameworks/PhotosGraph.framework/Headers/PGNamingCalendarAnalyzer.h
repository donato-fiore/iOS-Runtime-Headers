// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGNAMINGCALENDARANALYZER_H
#define PGNAMINGCALENDARANALYZER_H

@class NSString;
@protocol PGNamingAnalyzer;

#import <Foundation/Foundation.h>

#import "PGGraphNamingProcessor.h"

@interface PGNamingCalendarAnalyzer : NSObject <PGNamingAnalyzer>

 {
    PGGraphNamingProcessor *_processor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithNamingProcessor:(id)arg0 ;
-(id)name;
-(void)findCalendarMatchesFromEventUniversalStartDateTime:(id)arg0 eventUniversalEndDateTime:(id)arg1 personAttendees:(id)arg2 graph:(id)arg3 momentNodes:(id)arg4 ;
-(void)runAnalysisWithProgressBlock:(id)arg0 ;


@end


#endif