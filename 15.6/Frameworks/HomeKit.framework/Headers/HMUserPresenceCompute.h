// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMUSERPRESENCECOMPUTE_H
#define HMUSERPRESENCECOMPUTE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HMUserPresenceCompute : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


+(id)computeWithCoder:(id)arg0 ;
+(id)computeWithDict:(id)arg0 ;
+(id)computeWithMessage:(id)arg0 ;
+(id)computeWithNumber:(id)arg0 ;
+(id)computeWithValue:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithNumber:(id)arg0 ;
-(void)addToCoder:(id)arg0 ;
-(void)addToPayload:(id)arg0 ;


@end


#endif