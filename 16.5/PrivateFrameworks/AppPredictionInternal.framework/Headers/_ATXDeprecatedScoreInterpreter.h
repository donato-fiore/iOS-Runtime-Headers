// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXDEPRECATEDSCOREINTERPRETER_H
#define _ATXDEPRECATEDSCOREINTERPRETER_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface _ATXDeprecatedScoreInterpreter : NSObject {
    NSDictionary *_varPrograms;
}


@property (readonly, nonatomic) NSUInteger instructionCount;
@property (readonly, nonatomic) NSSet *subscoreNames;


-(CGFloat)_evalVariable:(id)arg0 withCtx:(id)arg1 ;
-(id)evaluateWithInputScoreDict:(id)arg0 intentType:(id)arg1 ;
-(id)evaluateWithInputScores:(id)arg0 intentType:(id)arg1 ;
-(id)initWithParseRoot:(id)arg0 ;
-(void)_compileRoot:(id)arg0 ;


@end


#endif