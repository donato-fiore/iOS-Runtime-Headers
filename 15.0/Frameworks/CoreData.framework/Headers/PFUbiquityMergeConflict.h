// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYMERGECONFLICT_H
#define PFUBIQUITYMERGECONFLICT_H

@class NSDictionary;


#import "NSMergeConflict.h"

@interface PFUbiquityMergeConflict : NSMergeConflict

@property (retain) NSDictionary *ancestorSnapshot; // ivar: _ancestorSnapshot


-(id)initWithSource:(id)arg0 newVersion:(NSUInteger)arg1 oldVersion:(NSUInteger)arg2 cachedSnapshot:(id)arg3 persistedSnapshot:(id)arg4 ;
-(void)dealloc;


@end


#endif