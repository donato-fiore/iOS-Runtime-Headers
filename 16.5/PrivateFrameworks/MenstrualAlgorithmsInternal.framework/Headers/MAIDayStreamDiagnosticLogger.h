// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAIDAYSTREAMDIAGNOSTICLOGGER_H
#define MAIDAYSTREAMDIAGNOSTICLOGGER_H



#import "MAIDiagnosticLogger.h"

@interface MAIDayStreamDiagnosticLogger : MAIDiagnosticLogger



-(id)baseFileName;
-(id)initWithConfig:(id)arg0 ;
-(id)notificationName;
-(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )jsonObjectName;
-(void)finalizeDayStreamInputWithDay:(unsigned int)arg0 ;
-(void)logDayStreamProcessorOutput:(struct MAIDayStreamProcessorOutput )arg0 ;


@end


#endif