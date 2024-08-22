// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMSETUPRESPONSECOMMAND_H
#define CDMSETUPRESPONSECOMMAND_H

@class NSString;


#import "CDMBaseCommand.h"

@interface CDMSetupResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) NSInteger serviceState; // ivar: _serviceState


-(id)commandName;
-(id)initWithServiceState:(NSInteger)arg0 serviceName:(id)arg1 ;


@end


#endif