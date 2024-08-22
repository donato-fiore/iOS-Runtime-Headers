// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLREMOTESESSION_H
#define SLREMOTESESSION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>

#import "SLDatabase.h"

@interface SLRemoteSession : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) SLDatabase *database; // ivar: _database


-(BOOL)clientHasEntitlement:(id)arg0 ;
-(id)initWithConnection:(id)arg0 database:(id)arg1 ;


@end


#endif