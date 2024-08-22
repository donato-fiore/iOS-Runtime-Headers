// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SWCPATTERNMATCHINGENGINE_H
#define _SWCPATTERNMATCHINGENGINE_H


#import <Foundation/Foundation.h>

#import "_SWCPatternList.h"
#import "_SWCSubstitutionVariableList.h"

@interface _SWCPatternMatchingEngine : NSObject {
    _SWCPatternList *_patternList;
    _SWCSubstitutionVariableList *_subVarList;
}




+(id)new;
-(id)_evaluateURLComponents:(id)arg0 auditToken:(struct ? *)arg1 ;
-(id)evaluateURLComponents:(id)arg0 ;
-(id)evaluateURLComponents:(id)arg0 auditToken:(struct ? )arg1 ;
-(id)init;
-(id)initWithPatternDictionaries:(id)arg0 ;
-(id)initWithPatternDictionaries:(id)arg0 substitutionVariables:(id)arg1 ;


@end


#endif