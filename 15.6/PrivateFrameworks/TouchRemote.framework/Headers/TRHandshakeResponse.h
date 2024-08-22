// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRHANDSHAKERESPONSE_H
#define TRHANDSHAKERESPONSE_H



#import "TRResponseMessage.h"

@interface TRHandshakeResponse : TRResponseMessage

@property (nonatomic) NSInteger protocolVersion; // ivar: _protocolVersion


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif