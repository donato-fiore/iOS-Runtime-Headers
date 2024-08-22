// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITESTTYPERDRIVER_H
#define TITESTTYPERDRIVER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TIKeyboardTyper.h"

@interface TITestTyperDriver : NSObject

@property (nonatomic, getter=isDebug) BOOL debug; // ivar: _debug
@property (readonly, nonatomic) NSMutableArray *failedTests; // ivar: _failedTests
@property (readonly, nonatomic) NSMutableArray *syntaxErrors; // ivar: _syntaxErrors
@property (retain, nonatomic) TIKeyboardTyper *testTyper; // ivar: _testTyper


-(BOOL)consumeTestFile:(id)arg0 ;
-(BOOL)consumeTextString:(id)arg0 ;
-(BOOL)handleBoolConfig:(id)arg0 withValue:(BOOL)arg1 lineNumber:(int)arg2 ;
-(BOOL)handleIntConfig:(id)arg0 withValue:(int)arg1 lineNumber:(int)arg2 ;
-(BOOL)handleStringConfig:(id)arg0 withValue:(id)arg1 lineNumber:(int)arg2 ;
-(id)init;
-(id)initWithTestTyper:(id)arg0 ;
-(void)handleCommand:(id)arg0 withValue:(id)arg1 lineNumber:(int)arg2 ;
-(void)handleCorrectionMatch:(id)arg0 lineNumber:(int)arg1 ;
-(void)handleDocumentMatch:(id)arg0 lineNumber:(int)arg1 ;
-(void)handleNewLine;
-(void)handlePredictionMatch:(id)arg0 lineNumber:(int)arg1 ;
-(void)handleTyping:(id)arg0 ;
-(void)printDebugInfo:(id)arg0 lineNumber:(int)arg1 ;
-(void)reportFailedTest:(id)arg0 lineNumber:(int)arg1 ;
-(void)reportSyntaxErrors:(id)arg0 lineNumber:(int)arg1 ;
-(void)selectFromPredictionBar:(id)arg0 lineNumber:(int)arg1 ;


@end


#endif