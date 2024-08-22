// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSHAREBACKSIGNIFICANTLOCATIONSOURCE_H
#define PGSHAREBACKSIGNIFICANTLOCATIONSOURCE_H



#import "PGShareBackSource.h"
#import "PGGraphHomeWorkNodeCollection.h"

@interface PGShareBackSignificantLocationSource : PGShareBackSource {
    PGGraphHomeWorkNodeCollection *_homeNodes;
}




-(BOOL)prepareSourceWithGraph:(id)arg0 ;
-(id)suggesterResultsForInputs:(id)arg0 momentNodes:(id)arg1 inGraph:(id)arg2 error:(*id)arg3 ;


@end


#endif