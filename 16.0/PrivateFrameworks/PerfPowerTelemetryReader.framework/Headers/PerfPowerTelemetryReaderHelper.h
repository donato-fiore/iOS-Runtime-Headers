// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PERFPOWERTELEMETRYREADERHELPER_H
#define PERFPOWERTELEMETRYREADERHELPER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface PerfPowerTelemetryReaderHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer; // ivar: _connectionToServer


-(id)createXPCConnection;
-(id)postDataRequest:(id)arg0 outError:(*id)arg1 ;
-(void)closeXPCConnection;


@end


#endif