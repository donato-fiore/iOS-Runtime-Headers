// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFPROFILEPAYLOAD_H
#define DMFPROFILEPAYLOAD_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFProfilePayload : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *organization; // ivar: _organization
@property (readonly, copy, nonatomic) NSString *payloadDescription; // ivar: _payloadDescription
@property (readonly, nonatomic) NSInteger payloadVersion; // ivar: _payloadVersion
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 identifier:(id)arg1 payloadVersion:(NSInteger)arg2 displayName:(id)arg3 organization:(id)arg4 payloadDescription:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif