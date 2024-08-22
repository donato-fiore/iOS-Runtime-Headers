// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYTRANSPORTLOG_H
#define SYTRANSPORTLOG_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface SYTransportLog : NSObject {
    NSObject<OS_os_log> *_log;
}


@property (copy, nonatomic) NSString *facility; // ivar: _facility
@property (readonly, nonatomic) NSObject<OS_os_log> *oslog; // ivar: _oslog


+(id)sharedInstance;
-(id)init;
-(void)_createLog;
-(void)_logOSMessage:(char *)arg0 args:(char *)arg1 returnAddress:(*void)arg2 ;
-(void)logMessage:(id)arg0 ;
-(void)logMessage:(id)arg0 args:(char *)arg1 ;


@end


#endif