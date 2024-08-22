// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERPRESENCEREGION_H
#define HMDUSERPRESENCEREGION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HMDUserPresenceRegion : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


+(id)regionWithCoder:(id)arg0 ;
+(id)regionWithDict:(id)arg0 ;
+(id)regionWithMessage:(id)arg0 ;
+(id)regionWithNumber:(id)arg0 ;
+(id)regionWithValue:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithNumber:(id)arg0 ;
-(void)addToCoder:(id)arg0 ;
-(void)addToPayload:(id)arg0 ;


@end


#endif