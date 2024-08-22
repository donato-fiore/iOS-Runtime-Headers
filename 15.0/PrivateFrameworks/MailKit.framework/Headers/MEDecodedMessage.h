// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDECODEDMESSAGE_H
#define MEDECODEDMESSAGE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MEMessageSecurityInformation.h"

@interface MEDecodedMessage : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *rawData; // ivar: _rawData
@property (readonly, nonatomic) MEMessageSecurityInformation *securityInformation; // ivar: _securityInformation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 securityInformation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif