// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXSCOREINTERPRETER_H
#define _ATXSCOREINTERPRETER_H

@class NSDictionary, NSMutableArray, NSSet;

#import <Foundation/Foundation.h>


@interface _ATXScoreInterpreter : NSObject {
    NSDictionary *_bytecode;
    NSMutableArray *_bytecodeDependencies;
}


@property (readonly, nonatomic) NSSet *subscoreNames;


-(id)evaluateWithInputScoreDict:(id)arg0 intentType:(id)arg1 ;
-(id)evaluateWithInputScores:(id)arg0 intentType:(id)arg1 ;
-(id)initWithParseRoot:(id)arg0 ;


@end


#endif