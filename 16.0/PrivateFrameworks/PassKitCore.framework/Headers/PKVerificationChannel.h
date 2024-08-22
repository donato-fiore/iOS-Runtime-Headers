// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKVERIFICATIONCHANNEL_H
#define PKVERIFICATIONCHANNEL_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKVerificationChannel : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *contactPoint; // ivar: _contactPoint
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (nonatomic) BOOL requiresUserInteraction; // ivar: _requiresUserInteraction
@property (copy, nonatomic) NSString *sourceAddress; // ivar: _sourceAddress
@property (nonatomic) NSUInteger type; // ivar: _type
@property (copy, nonatomic) NSString *typeDescription; // ivar: _typeDescription
@property (readonly, copy, nonatomic) NSString *typeDescriptionUnlocalized;


+(BOOL)supportsSecureCoding;
+(id)verificationChannelWithDictionary:(id)arg0 andOrganizationName:(id)arg1 ;
-(BOOL)needsServerRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif