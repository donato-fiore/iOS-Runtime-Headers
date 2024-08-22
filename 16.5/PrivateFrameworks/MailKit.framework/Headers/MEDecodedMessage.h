// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDECODEDMESSAGE_H
#define MEDECODEDMESSAGE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MEDecodedMessageBanner.h"
#import "MEMessageSecurityInformation.h"

@interface MEDecodedMessage : NSObject <NSSecureCoding>



@property (readonly, nonatomic) MEDecodedMessageBanner *banner; // ivar: _banner
@property (readonly, nonatomic) NSData *context; // ivar: _context
@property (readonly, copy, nonatomic) NSData *rawData; // ivar: _rawData
@property (readonly, nonatomic) MEMessageSecurityInformation *securityInformation; // ivar: _securityInformation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 securityInformation:(id)arg1 context:(id)arg2 ;
-(id)initWithData:(id)arg0 securityInformation:(id)arg1 context:(id)arg2 banner:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif