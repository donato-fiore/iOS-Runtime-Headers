// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRSENDCOMMANDRESULTSTATUS_H
#define MRSENDCOMMANDRESULTSTATUS_H

@class NSError, NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MRSendCommandHandlerDialog.h"
#import "_MRSendCommandResultStatusProtobuf.h"

@interface MRSendCommandResultStatus : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSError *commandError; // ivar: _commandError
@property (readonly, copy, nonatomic) NSData *customData; // ivar: _customData
@property (readonly, copy, nonatomic) NSString *customDataType; // ivar: _customDataType
@property (readonly, nonatomic) MRSendCommandHandlerDialog *dialog; // ivar: _dialog
@property (readonly, copy, nonatomic) _MRSendCommandResultStatusProtobuf *protobuf;
@property (readonly, nonatomic) unsigned int statusCode; // ivar: _statusCode
@property (readonly, nonatomic) NSInteger statusType; // ivar: _statusType


+(id)statusWithCode:(unsigned int)arg0 ;
+(id)statusWithCode:(unsigned int)arg0 customData:(id)arg1 type:(id)arg2 ;
+(id)statusWithCode:(unsigned int)arg0 dialog:(id)arg1 ;
+(id)statusWithCode:(unsigned int)arg0 error:(id)arg1 ;
+(id)successStatus;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithStatusType:(NSInteger)arg0 statusCode:(unsigned int)arg1 dialog:(id)arg2 customData:(id)arg3 customDataType:(id)arg4 error:(id)arg5 ;


@end


#endif