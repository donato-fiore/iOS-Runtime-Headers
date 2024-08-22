// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DASDELEGATE_H
#define DASDELEGATE_H

@class NSXPCConnection;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface DASDelegate : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToService; // ivar: _connectionToService
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


-(id)init;
-(void)appLaunchResumeInfoWithStartDate:(id)arg0 withEndDate:(id)arg1 withReply:(id)arg2 ;
-(void)connect;
-(void)disconnect;


@end


#endif