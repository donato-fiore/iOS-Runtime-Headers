// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDCLIENTEVENTBEHAVIOR_H
#define DNDCLIENTEVENTBEHAVIOR_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDClientEventDetails.h"

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *activeModeUUID; // ivar: _activeModeUUID
@property (readonly, copy, nonatomic) DNDClientEventDetails *eventDetails; // ivar: _eventDetails
@property (readonly, nonatomic) NSUInteger interruptionSuppression; // ivar: _interruptionSuppression
@property (readonly, copy) NSString *redactedDescription;
@property (readonly, nonatomic) NSUInteger resolutionReason; // ivar: _resolutionReason


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionForRedacted:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventDetails:(id)arg0 interruptionSuppression:(NSUInteger)arg1 resolutionReason:(NSUInteger)arg2 activeModeUUID:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif