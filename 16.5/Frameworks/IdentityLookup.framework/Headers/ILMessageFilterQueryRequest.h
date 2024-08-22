// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ILMESSAGEFILTERQUERYREQUEST_H
#define ILMESSAGEFILTERQUERYREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ILMessageFilterQueryRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (copy, nonatomic) NSString *messageBody; // ivar: _messageBody
@property (copy, nonatomic) NSString *receiverISOCountryCode; // ivar: _receiverISOCountryCode
@property (copy, nonatomic) NSString *sender; // ivar: _sender


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif