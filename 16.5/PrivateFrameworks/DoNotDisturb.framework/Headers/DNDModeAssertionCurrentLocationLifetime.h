// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDMODEASSERTIONCURRENTLOCATIONLIFETIME_H
#define DNDMODEASSERTIONCURRENTLOCATIONLIFETIME_H



#import "DNDModeAssertionLifetime.h"

@interface DNDModeAssertionCurrentLocationLifetime : DNDModeAssertionLifetime



+(BOOL)supportsSecureCoding;
+(id)sharedInstance;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)lifetimeType;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif