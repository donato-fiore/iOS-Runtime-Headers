// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCMESSAGEREQUEST_H
#define WCMESSAGEREQUEST_H

@protocol NSSecureCoding;


#import "WCMessage.h"

@interface WCMessageRequest : WCMessage <NSSecureCoding>



@property BOOL expectsResponse; // ivar: _expectsResponse


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPairingID:(id)arg0 identifier:(id)arg1 data:(id)arg2 dictionaryMessage:(BOOL)arg3 expectsResponse:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif