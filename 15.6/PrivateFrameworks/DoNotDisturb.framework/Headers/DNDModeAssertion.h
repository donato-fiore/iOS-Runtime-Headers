// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDMODEASSERTION_H
#define DNDMODEASSERTION_H

@class NSUUID, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDModeAssertionDetails.h"
#import "DNDModeAssertionSource.h"

@interface DNDModeAssertion : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) DNDModeAssertionDetails *details; // ivar: _details
@property (readonly, copy, nonatomic) DNDModeAssertionSource *source; // ivar: _source
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 startDate:(id)arg1 details:(id)arg2 source:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif