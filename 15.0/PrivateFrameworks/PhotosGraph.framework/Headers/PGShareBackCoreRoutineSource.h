// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSHAREBACKCOREROUTINESOURCE_H
#define PGSHAREBACKCOREROUTINESOURCE_H

@class CLSRoutineService;


#import "PGShareBackSource.h"

@interface PGShareBackCoreRoutineSource : PGShareBackSource {
    CLSRoutineService *_routineService;
}




-(BOOL)prepareSourceWithGraph:(id)arg0 ;
-(BOOL)suggesterInput:(id)arg0 isCloseEnoughToLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(id)initWithLoggingConnection:(id)arg0 ;
-(id)suggesterResultsForInputs:(id)arg0 momentNodes:(id)arg1 inGraph:(id)arg2 error:(*id)arg3 ;


@end


#endif