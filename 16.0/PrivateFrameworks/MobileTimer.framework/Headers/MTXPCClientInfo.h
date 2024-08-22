// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTXPCCLIENTINFO_H
#define MTXPCCLIENTINFO_H

@class NSDate, NSXPCConnection, NSString;
@protocol MTSource;

#import <Foundation/Foundation.h>


@interface MTXPCClientInfo : NSObject <MTSource>



@property (retain, nonatomic) id *clientLink; // ivar: _clientLink
@property (retain, nonatomic) NSDate *connectedDate; // ivar: _connectedDate
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int processID;
@property (readonly, copy, nonatomic) NSString *processName;
@property (readonly) Class superclass;


+(id)clientInfoForConnection:(id)arg0 clientLink:(id)arg1 ;
-(BOOL)donatesIntent;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithConnection:(id)arg0 clientLink:(id)arg1 ;
-(id)sourceIdentifier;


@end


#endif