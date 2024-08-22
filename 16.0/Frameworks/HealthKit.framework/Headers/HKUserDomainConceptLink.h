// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKUSERDOMAINCONCEPTLINK_H
#define HKUSERDOMAINCONCEPTLINK_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKUserDomainConceptLink : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *targetUUID; // ivar: _targetUUID
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConcept:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithTarget:(id)arg0 type:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif