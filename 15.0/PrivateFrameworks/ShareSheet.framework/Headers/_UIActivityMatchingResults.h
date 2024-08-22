// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIVITYMATCHINGRESULTS_H
#define _UIACTIVITYMATCHINGRESULTS_H

@class NSMutableSet, NSArray;

#import <Foundation/Foundation.h>

#import "_UIActivityMatchingContext.h"

@interface _UIActivityMatchingResults : NSObject {
    NSMutableSet *_excludedActivityTypesSet;
}


@property (readonly, nonatomic) _UIActivityMatchingContext *context; // ivar: _context
@property (readonly, nonatomic) NSArray *excludedActivityTypes;
@property (retain, nonatomic) NSArray *orderedActivities; // ivar: _orderedActivities


-(id)initWithActivityMatchingContext:(id)arg0 ;
-(void)addExcludedActivityTypes:(id)arg0 ;


@end


#endif