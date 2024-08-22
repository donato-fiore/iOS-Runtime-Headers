// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTSERVICEDESCRIPTOR_H
#define CTSERVICEDESCRIPTOR_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTServiceDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger domain; // ivar: _domain
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSNumber *instance; // ivar: _instance


+(BOOL)supportsSecureCoding;
+(id)descriptorWithSubscriptionContext:(id)arg0 ;
+(id)telephonyDescriptorWithInstance:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(NSInteger)arg0 instance:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif