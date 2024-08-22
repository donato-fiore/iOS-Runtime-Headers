// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMMIGRATIONPLUGINWRAPPERCONNECTION_H
#define DMMIGRATIONPLUGINWRAPPERCONNECTION_H


#import <Foundation/Foundation.h>

#import "DMXPCConnection.h"

@interface DMMigrationPluginWrapperConnection : NSObject {
    DMXPCConnection *_connection;
    BOOL _didReceivePid;
}


@property (readonly, nonatomic) BOOL didReceivePid;


+(id)connection;
-(id)init;
-(int)pid;
-(void)handleMessage:(id)arg0 ;
-(void)invalidate;
-(void)resume;
-(void)runPluginAtPath:(id)arg0 withParameters:(id)arg1 completion:(id)arg2 ;


@end


#endif