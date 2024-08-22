// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSOCKETPAIRSERVICEMAPMESSAGE_H
#define IDSSOCKETPAIRSERVICEMAPMESSAGE_H

@class NSString;


#import "IDSSocketPairMessage.h"

@interface IDSSocketPairServiceMapMessage : IDSSocketPairMessage

@property (readonly, nonatomic) unsigned short mappedStreamID; // ivar: _mappedStreamID
@property (readonly, nonatomic) unsigned char reason; // ivar: _reason
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName


-(id)_nonHeaderData;
-(id)initWithCommand:(unsigned char)arg0 underlyingData:(id)arg1 ;
-(id)initWithReason:(unsigned char)arg0 mappedStreamID:(unsigned short)arg1 serviceName:(id)arg2 ;
-(unsigned char)command;


@end


#endif