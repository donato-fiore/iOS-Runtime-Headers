// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRHANDSHAKEREQUEST_H
#define TRHANDSHAKEREQUEST_H



#import "TRRequestMessage.h"

@interface TRHandshakeRequest : TRRequestMessage

@property (nonatomic) NSInteger protocolVersion; // ivar: _protocolVersion


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif