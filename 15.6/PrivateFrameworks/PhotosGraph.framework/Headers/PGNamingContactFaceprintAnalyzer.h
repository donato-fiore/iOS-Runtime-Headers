// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGNAMINGCONTACTFACEPRINTANALYZER_H
#define PGNAMINGCONTACTFACEPRINTANALYZER_H

@class NSString;
@protocol PGNamingAnalyzer;

#import <Foundation/Foundation.h>

#import "PGGraphNamingProcessor.h"

@interface PGNamingContactFaceprintAnalyzer : NSObject <PGNamingAnalyzer>

 {
    PGGraphNamingProcessor *_processor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithNamingProcessor:(id)arg0 ;
-(id)name;
-(void)runAnalysisWithProgressBlock:(id)arg0 ;


@end


#endif