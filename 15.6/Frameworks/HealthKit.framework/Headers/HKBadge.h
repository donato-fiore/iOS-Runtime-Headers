// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKBADGE_H
#define HKBADGE_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding, NSObject;

#import <Foundation/Foundation.h>


@interface HKBadge : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger _count;
}


@property (readonly, nonatomic, getter=isErrorBadge) BOOL errorBadge;
@property (readonly, nonatomic, getter=isIndicatorBadge) BOOL indicatorBadge;
@property (readonly, copy, nonatomic) NSNumber *keyValueRepresentation;
@property (readonly, nonatomic, getter=isNumberBadge) BOOL numberBadge;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSObject<NSObject> *value;
@property (readonly, nonatomic, getter=isZeroBadge) BOOL zeroBadge;


+(BOOL)supportsSecureCoding;
+(id)badgeFromKeyValueRepresentation:(id)arg0 ;
+(id)errorBadge;
+(id)indicatorBadge;
+(id)numberBadgeWithCount:(NSInteger)arg0 ;
+(id)zeroBadge;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)badgeByAggregatingWithBadge:(id)arg0 ;
-(id)badgeByIncrementingByCount:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 count:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif