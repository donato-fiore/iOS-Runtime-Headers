// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDENTIFIERGROUPINGUTILS_H
#define IDENTIFIERGROUPINGUTILS_H


#import <Foundation/Foundation.h>


@interface IdentifierGroupingUtils : NSObject



+(id)createIdentifier:(unsigned int)arg0 interpretationGroupIndex:(unsigned int)arg1 nodeIndex:(unsigned int)arg2 spanIdentifier:(id)arg3 ;
+(id)getInterpretationGroupMax:(id)arg0 ;
+(id)getInterpretationGroups:(id)arg0 ;
+(id)getTokenIndexIdentifier:(unsigned int)arg0 interpretationGroup:(unsigned int)arg1 nodeIndex:(unsigned int)arg2 span:(id)arg3 spanIdentifier:(id)arg4 ;
+(id)limitAlignments:(id)arg0 alignmentSpanDict:(id)arg1 ;
+(void)createIdentifierGroups:(id)arg0 alignmentSpanDict:(id)arg1 identifiers:(id)arg2 nodeIndex:(unsigned int)arg3 interpretationGroupCurrentMax:(id)arg4 tagSpans:(id)arg5 ;
+(void)createNonOverlapping:(id)arg0 interpretationGroup:(id)arg1 start:(NSUInteger)arg2 interpretationGroups:(id)arg3 ;
+(void)sortAlignmentDict:(id)arg0 orderedIndexes:(id)arg1 alignmentSpanDict:(id)arg2 ;


@end


#endif