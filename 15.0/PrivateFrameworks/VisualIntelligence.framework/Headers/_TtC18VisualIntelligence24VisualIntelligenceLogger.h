// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18VISUALINTELLIGENCE24VISUALINTELLIGENCELOGGER_H
#define _TTC18VISUALINTELLIGENCE24VISUALINTELLIGENCELOGGER_H


#import <Foundation/Foundation.h>


@interface _TtC18VisualIntelligence24VisualIntelligenceLogger : NSObject



+(id)osLog;
+(void)log:(id)arg0 file:(id)arg1 ;
+(void)logDebug:(id)arg0 file:(id)arg1 ;
+(void)logError:(id)arg0 file:(id)arg1 ;
+(void)logErrorIfExisting:(id)arg0 error:(id)arg1 file:(id)arg2 ;
-(id)init;


@end


#endif