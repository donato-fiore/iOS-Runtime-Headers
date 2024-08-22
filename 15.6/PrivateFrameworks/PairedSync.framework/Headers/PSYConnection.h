// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSYCONNECTION_H
#define PSYCONNECTION_H

@class NSXPCConnection;
@protocol PSYConnectionDelegate;

#import <Foundation/Foundation.h>

#import "PSYOptions.h"

@interface PSYConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<PSYConnectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PSYOptions *options; // ivar: _options
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(id)init;
-(id)remoteConnection;
-(void)startSync;
-(void)startSyncWithOptions:(id)arg0 ;


@end


#endif