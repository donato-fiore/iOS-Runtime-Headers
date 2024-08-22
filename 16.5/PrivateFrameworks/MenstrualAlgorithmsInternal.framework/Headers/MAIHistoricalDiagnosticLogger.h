// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAIHISTORICALDIAGNOSTICLOGGER_H
#define MAIHISTORICALDIAGNOSTICLOGGER_H



#import "MAIDiagnosticLogger.h"

@interface MAIHistoricalDiagnosticLogger : MAIDiagnosticLogger



-(id)baseFileName;
-(id)notificationName;
-(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )jsonObjectName;
-(void)finalizeHistoricalAnalyzerInput;
-(void)logHistoricalAnalyzerOutput:(struct MAIHistoricalAnalyzerOutput )arg0 ;


@end


#endif