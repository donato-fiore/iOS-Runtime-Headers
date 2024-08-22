// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCUNCONFIRMEDDEVIATION_H
#define HKMCUNCONFIRMEDDEVIATION_H

@class NSDictionary, NSString;
@protocol HKRedactedDescription, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMCUnconfirmedDeviation : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *analyticsMetadata; // ivar: _analyticsMetadata
@property (readonly, nonatomic) ? days; // ivar: _days
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 days:(struct ? )arg1 analyticsMetadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif