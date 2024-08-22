// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASSYSTEMAUTHENTICATIONREQUEST_H
#define CASSYSTEMAUTHENTICATIONREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "CASAuthenticationRequest.h"

@interface CASSystemAuthenticationRequest : CASAuthenticationRequest <NSSecureCoding>



@property (retain, nonatomic) NSString *appleAccountAltDSID; // ivar: _appleAccountAltDSID
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSInteger service; // ivar: _service


+(BOOL)supportsSecureCoding;
-(NSInteger)authType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif