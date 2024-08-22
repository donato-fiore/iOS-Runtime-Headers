// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BYSETTINGSMANAGERCLIENT_H
#define BYSETTINGSMANAGERCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface BYSettingsManagerClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(BOOL)hasStashedValuesOnDisk;
-(id)init;
-(void)_connectToDaemon;


@end


#endif