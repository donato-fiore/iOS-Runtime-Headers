// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSUSERACCOUNTSERVICECONNECTION_H
#define VSUSERACCOUNTSERVICECONNECTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface VSUserAccountServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(id)init;
-(id)serviceWithErrorHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif