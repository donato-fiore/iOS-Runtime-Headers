// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROAUTOEDITLOGGER_H
#define MIROAUTOEDITLOGGER_H

@class NSRegularExpression, NSMutableString;

#import <Foundation/Foundation.h>


@interface MiroAutoEditLogger : NSObject

@property (nonatomic) NSInteger disableLoggingCount; // ivar: _disableLoggingCount
@property (retain, nonatomic) NSRegularExpression *framesRegex; // ivar: _framesRegex
@property (nonatomic) NSInteger indentationLevel; // ivar: _indentationLevel
@property (retain, nonatomic) NSMutableString *log; // ivar: _log
@property (nonatomic) NSInteger loggingLevel; // ivar: _loggingLevel
@property (nonatomic) BOOL logsToConsole; // ivar: _logsToConsole


-(id)init;
-(void)commit;
-(void)decrementIndentationLevel;
-(void)disableLogging;
-(void)enableLogging;
-(void)incrementIndentationLevel;
-(void)logAndDescribeFrameCounts:(BOOL)arg0 level:(NSInteger)arg1 formatString:(id)arg2 ;


@end


#endif