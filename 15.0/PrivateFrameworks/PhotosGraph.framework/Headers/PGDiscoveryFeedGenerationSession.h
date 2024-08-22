// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGDISCOVERYFEEDGENERATIONSESSION_H
#define PGDISCOVERYFEEDGENERATIONSESSION_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "PGDiscoveryFeedGenerationOptions.h"
#import "PGManagerWorkingContext.h"

@interface PGDiscoveryFeedGenerationSession : NSObject {
    PGDiscoveryFeedGenerationOptions *_options;
    PGManagerWorkingContext *_workingContext;
    NSMutableSet *_usedLocalIdentifiers;
}




-(id)additionalItemsWithTargetCount:(NSUInteger)arg0 ;
-(id)currentState;
-(id)initWithOptions:(id)arg0 workingContext:(id)arg1 ;
-(id)initWithOptions:(id)arg0 workingContext:(id)arg1 state:(id)arg2 ;
-(void)_restoreState:(id)arg0 ;


@end


#endif