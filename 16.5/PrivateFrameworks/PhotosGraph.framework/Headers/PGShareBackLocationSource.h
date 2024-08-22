// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSHAREBACKLOCATIONSOURCE_H
#define PGSHAREBACKLOCATIONSOURCE_H



#import "PGShareBackSource.h"

@interface PGShareBackLocationSource : PGShareBackSource



+(id)suggesterInputsByDateIntervalForInputs:(id)arg0 ;
-(BOOL)prepareSourceWithGraph:(id)arg0 ;
-(id)suggesterResultsForInputs:(id)arg0 momentNodes:(id)arg1 inGraph:(id)arg2 error:(*id)arg3 ;


@end


#endif