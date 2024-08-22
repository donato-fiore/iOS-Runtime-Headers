// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKUSERDOMAINCONCEPTPROPERTY_H
#define HKUSERDOMAINCONCEPTPROPERTY_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKUserDomainConceptProperty : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)mergeListsOfPropertiesWithType:(NSInteger)arg0 intoListOfProperties:(id)arg1 fromListOfProperties:(id)arg2 options:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 timestamp:(CGFloat)arg2 deleted:(BOOL)arg3 ;
-(id)valueDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif