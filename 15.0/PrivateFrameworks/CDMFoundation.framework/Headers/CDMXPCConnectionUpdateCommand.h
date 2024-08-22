// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMXPCCONNECTIONUPDATECOMMAND_H
#define CDMXPCCONNECTIONUPDATECOMMAND_H

@class NSString, NSDictionary;


#import "CDMBaseCommand.h"

@interface CDMXPCConnectionUpdateCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *clientId; // ivar: _clientId
@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)commandName;
-(id)initWithClientId:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithClientId:(id)arg0 type:(NSInteger)arg1 payload:(id)arg2 ;


@end


#endif