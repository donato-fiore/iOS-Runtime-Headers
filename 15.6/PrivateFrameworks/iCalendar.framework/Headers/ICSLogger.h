// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSLOGGER_H
#define ICSLOGGER_H

@protocol ICSLoggingDelegate;

#import <Foundation/Foundation.h>


@interface ICSLogger : NSObject {
    int _logCount;
    id<ICSLoggingDelegate> *_loggingDelegate;
}




+(id)sharedInstance;
+(void)logAtLevel:(NSInteger)arg0 forTokenizer:(id)arg1 message:(id)arg2 ;
+(void)setDelegate:(id)arg0 ;
-(void)logAtLevel:(NSInteger)arg0 forTokenizer:(id)arg1 format:(id)arg2 args:(char *)arg3 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif