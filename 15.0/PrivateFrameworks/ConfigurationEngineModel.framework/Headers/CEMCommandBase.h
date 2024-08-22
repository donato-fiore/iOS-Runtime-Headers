// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMCOMMANDBASE_H
#define CEMCOMMANDBASE_H

@class NSString, NSNumber;


#import "CEMPayloadBase.h"
#import "CEMAnyPayload.h"

@interface CEMCommandBase : CEMPayloadBase

@property (copy, nonatomic) NSString *commandDescription; // ivar: _commandDescription
@property (copy, nonatomic) NSString *commandIdentifier; // ivar: _commandIdentifier
@property (copy, nonatomic) CEMAnyPayload *commandPayload; // ivar: _commandPayload
@property (copy, nonatomic) NSNumber *commandRequiresNetworkTether; // ivar: _commandRequiresNetworkTether
@property (copy, nonatomic) NSString *commandType; // ivar: _commandType


+(id)commandForData:(id)arg0 error:(*id)arg1 ;
+(id)commandForPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadCommandFromDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)mustBeSupervised;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serialize;
-(id)serializeAsDataWithError:(*id)arg0 ;
-(int)executionLevel;


@end


#endif