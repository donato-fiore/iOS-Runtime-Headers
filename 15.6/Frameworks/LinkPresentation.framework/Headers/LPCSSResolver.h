// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPCSSRESOLVER_H
#define LPCSSRESOLVER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "LPTheme.h"

@interface LPCSSResolver : NSObject

@property (readonly, nonatomic) NSMutableDictionary *localVariables; // ivar: _localVariables
@property (readonly, nonatomic) LPTheme *theme; // ivar: _theme


-(id)initWithTheme:(id)arg0 ;
-(id)resolveCSSValue:(id)arg0 ;
-(id)ruleDictionaryForStyle:(id)arg0 forComponentClass:(Class)arg1 ;
-(void)addStyle:(id)arg0 toElement:(id)arg1 inComponent:(id)arg2 ;
-(void)enumerateResolvedRulesFromRuleDictionary:(id)arg0 withBlock:(id)arg1 ;


@end


#endif