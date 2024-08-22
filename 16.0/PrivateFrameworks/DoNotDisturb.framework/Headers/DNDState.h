// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSTATE_H
#define DNDSTATE_H

@class NSArray, NSString, NSUUID, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDModeConfiguration.h"

@interface DNDState : NSObject <NSCopying, NSSecureCoding>

 {
    NSArray *_activeModeAssertionMetadata;
    NSString *_overrideModeIdentifier;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSArray *activeModeAssertionMetadata;
@property (readonly, copy, nonatomic) DNDModeConfiguration *activeModeConfiguration; // ivar: _activeModeConfiguration
@property (readonly, copy, nonatomic) NSString *activeModeIdentifier;
@property (readonly, copy, nonatomic) NSArray *activeModeIdentifiers;
@property (readonly, copy, nonatomic) NSUUID *activeModeUUID;
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSUInteger suppressionState; // ivar: _suppressionState
@property (readonly, copy, nonatomic) NSDate *userVisibleTransitionDate; // ivar: _userVisibleTransitionDate
@property (readonly, nonatomic) NSUInteger userVisibleTransitionLifetimeType; // ivar: _userVisibleTransitionLifetimeType
@property (readonly, nonatomic) BOOL willSuppressInterruptions;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuppressionState:(NSUInteger)arg0 activeModeAssertionMetadata:(id)arg1 startDate:(id)arg2 userVisibleTransitionDate:(id)arg3 userVisibleTransitionLifetimeType:(NSUInteger)arg4 activeModeConfiguration:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setOverrideModeIdentifier:(id)arg0 ;


@end


#endif