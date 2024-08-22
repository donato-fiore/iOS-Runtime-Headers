// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSACCOUNTPROVIDERRESPONSE_H
#define VSACCOUNTPROVIDERRESPONSE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSAccountProviderResponse : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *authenticationScheme; // ivar: _authenticationScheme
@property (copy, nonatomic) NSString *body; // ivar: _body
@property (copy, nonatomic) NSString *status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif