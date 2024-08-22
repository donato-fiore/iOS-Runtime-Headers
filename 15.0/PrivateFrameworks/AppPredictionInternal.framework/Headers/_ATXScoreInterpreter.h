// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXSCOREINTERPRETER_H
#define _ATXSCOREINTERPRETER_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface _ATXScoreInterpreter : NSObject {
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