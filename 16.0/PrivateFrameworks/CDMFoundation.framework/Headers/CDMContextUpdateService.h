// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMCONTEXTUPDATESERVICE_H
#define CDMCONTEXTUPDATESERVICE_H

@class NSString;


#import "CDMDAGBaseService.h"

@interface CDMContextUpdateService : CDMDAGBaseService {
    NSString *locale;
}




-(BOOL)isEnabled;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;
-(void)doCoreAnalyticsForContextUpdateOutcome:(int)arg0 numTurnsRollback:(int)arg1 success:(BOOL)arg2 locale:(id)arg3 ;


@end


#endif