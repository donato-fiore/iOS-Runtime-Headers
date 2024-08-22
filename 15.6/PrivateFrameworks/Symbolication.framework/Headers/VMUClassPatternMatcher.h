// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUCLASSPATTERNMATCHER_H
#define VMUCLASSPATTERNMATCHER_H


#import <Foundation/Foundation.h>


@interface VMUClassPatternMatcher : NSObject {
    *? _classesRegex;
    *? _vmRegionsRegex;
    *__CFDictionary _memoizedRegexResult;
    BOOL _matchingKindOfClass;
    BOOL _patternMatchesNonObjects;
    NSUInteger _allocationSizeLowerBound;
    NSUInteger _allocationSizeUpperBound;
}


@property (nonatomic, getter=isMatchingKindOfClass) BOOL matchingKindOfClass;


-(BOOL)_matchesClassInfo:(id)arg0 ;
-(BOOL)_parseMallocSizePattern:(id)arg0 error:(*id)arg1 ;
-(BOOL)_regex:(struct ? *)arg0 matchesName:(id)arg1 ;
-(BOOL)matchesNodeDetails:(struct ? )arg0 orNodeDescription:(id)arg1 ;
-(id)initWithPattern:(id)arg0 forArgument:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)resetCachedMatches;


@end


#endif