// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERPRESENCEUPDATEREASON_H
#define HMDUSERPRESENCEUPDATEREASON_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HMDUserPresenceUpdateReason : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


+(id)reasonWithCoder:(id)arg0 ;
+(id)reasonWithDict:(id)arg0 ;
+(id)reasonWithMessage:(id)arg0 ;
+(id)reasonWithNumber:(id)arg0 ;
+(id)reasonWithValue:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithNumber:(id)arg0 ;
-(void)addToCoder:(id)arg0 ;
-(void)addToPayload:(id)arg0 ;


@end


#endif