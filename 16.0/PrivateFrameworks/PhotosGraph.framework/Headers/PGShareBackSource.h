// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSHAREBACKSOURCE_H
#define PGSHAREBACKSOURCE_H

@protocol PGShareBackSourceProtocol, OS_os_log;

#import <Foundation/Foundation.h>


@interface PGShareBackSource : NSObject <PGShareBackSourceProtocol>



@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection


-(BOOL)prepareSourceWithGraph:(id)arg0 ;
-(id)initWithLoggingConnection:(id)arg0 ;
-(id)prepareAndReturnSuggesterResultsForInputs:(id)arg0 inGraph:(id)arg1 error:(*id)arg2 ;
-(id)suggesterResultsForInputs:(id)arg0 momentNodes:(id)arg1 inGraph:(id)arg2 error:(*id)arg3 ;


@end


#endif