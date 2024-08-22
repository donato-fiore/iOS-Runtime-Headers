// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRSENDCOMMANDHANDLEREVENT_H
#define MRSENDCOMMANDHANDLEREVENT_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_MRSendCommandMessageProtobuf.h"

@interface MRSendCommandHandlerEvent : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned int command; // ivar: _command
@property (readonly, nonatomic) NSString *commandDescription;
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, copy, nonatomic) _MRSendCommandMessageProtobuf *protobuf;


+(id)eventWithCommand:(unsigned int)arg0 options:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCommand:(unsigned int)arg0 options:(id)arg1 ;
-(id)initWithProtobuf:(id)arg0 ;


@end


#endif