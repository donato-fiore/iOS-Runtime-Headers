// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HSMESSAGEREQUEST_H
#define HSMESSAGEREQUEST_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;


#import "HSMessage.h"

@interface HSMessageRequest : HSMessage <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *messageDict; // ivar: _messageDict
@property (readonly, nonatomic) NSString *messageStr; // ivar: _messageStr


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 request:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif