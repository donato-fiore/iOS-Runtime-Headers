// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMASSISTANTACCESSCONTROL_H
#define HMASSISTANTACCESSCONTROL_H

@class NSSet, NSArray;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;


#import "HMAccessControl.h"

@interface HMAssistantAccessControl : HMAccessControl <NSSecureCoding, NSCopying, NSMutableCopying>

 {
    NSUInteger _options;
    NSSet *_accessories;
    BOOL _activityNotificationsEnabledForPersonalRequests;
}


@property (readonly, copy) NSArray *accessories;
@property (readonly, getter=areActivityNotificationsEnabledForPersonalRequests) BOOL activityNotificationsEnabledForPersonalRequests;
@property (readonly) BOOL allowUnauthenticatedRequests;
@property (readonly, getter=isEnabled) BOOL enabled; // ivar: _enabled


+(BOOL)isAccessorySupported:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)options;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif