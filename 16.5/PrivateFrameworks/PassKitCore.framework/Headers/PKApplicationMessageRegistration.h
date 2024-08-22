// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONMESSAGEREGISTRATION_H
#define PKAPPLICATIONMESSAGEREGISTRATION_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKApplicationMessageKey.h"

@interface PKApplicationMessageRegistration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL badge; // ivar: _badge
@property (readonly, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (readonly, nonatomic) PKApplicationMessageKey *key; // ivar: _key
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority


+(BOOL)supportsSecureCoding;
+(id)createWithKey:(id)arg0 createdDate:(id)arg1 priority:(NSUInteger)arg2 badge:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif