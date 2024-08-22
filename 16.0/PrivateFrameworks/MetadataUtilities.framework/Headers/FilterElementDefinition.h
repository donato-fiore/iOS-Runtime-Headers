// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FILTERELEMENTDEFINITION_H
#define FILTERELEMENTDEFINITION_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "FilterElementDefinition.h"

@interface FilterElementDefinition : NSObject {
    NSString *_rootName;
    NSUInteger _rule;
    NSUInteger _mask;
    NSUInteger _subRule;
    NSUInteger _subMask;
    int _subAuxValueCount;
    BOOL _hasAuxValue;
    NSUInteger _auxValue;
    NSMutableDictionary *_setOfMatches;
    NSString *_namedLink;
    FilterElementDefinition *_wildCard;
    FilterElementDefinition *_superWildCard;
}




-(BOOL)isBottomValue;
-(id)initAsRoot:(id)arg0 ;
-(struct ? )encodeInto:(struct _MDPlistContainer *)arg0 auxArray:(id)arg1 namedRootMap:(id)arg2 ;
-(void)addRuleField:(int)arg0 value:(int)arg1 hasAuxValue:(BOOL)arg2 auxValue:(NSUInteger)arg3 inside:(BOOL)arg4 forPathComponents:(id)arg5 permitLink:(BOOL)arg6 componentIndex:(int)arg7 parentElement:(id)arg8 copyParentWildcardLink:(BOOL)arg9 ;
-(void)dealloc;
-(void)dump:(int)arg0 ;
-(void)dumpAttributesInto:(char *)arg0 forLevel:(int)arg1 ;


@end


#endif