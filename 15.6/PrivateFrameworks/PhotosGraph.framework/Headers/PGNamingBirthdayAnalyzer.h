// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGNAMINGBIRTHDAYANALYZER_H
#define PGNAMINGBIRTHDAYANALYZER_H

@class NSString;
@protocol PGNamingAnalyzer;

#import <Foundation/Foundation.h>

#import "PGGraphNamingProcessor.h"

@interface PGNamingBirthdayAnalyzer : NSObject <PGNamingAnalyzer>

 {
    PGGraphNamingProcessor *_processor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)birthdaySceneNodesFromGraph:(id)arg0 ;
-(id)initWithNamingProcessor:(id)arg0 ;
-(id)name;
-(id)weakBirthdayMomentNodesUsingSceneNodes:(id)arg0 ;
-(void)findBirthdayMatchesFromBirthdayByContactIdentifier:(id)arg0 contactIdentifiersWithExplicitBirthday:(id)arg1 graph:(id)arg2 birthdaySceneNodes:(id)arg3 withProgressBlock:(id)arg4 ;
-(void)runAnalysisWithProgressBlock:(id)arg0 ;


@end


#endif