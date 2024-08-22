// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMUSERHOMEACCESSSETTINGS_H
#define HMUSERHOMEACCESSSETTINGS_H

@class NSSet, NSArray, NSString;
@protocol HMFObject, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMUserHomeAccessSchedule.h"

@interface HMUserHomeAccessSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>



@property (getter=isAccessAllowedToAllAccessories) BOOL accessAllowedToAllAccessories; // ivar: _accessAllowedToAllAccessories
@property (copy) NSSet *allowedAccessoryCategoryTypes; // ivar: _allowedAccessoryCategoryTypes
@property (copy) NSSet *allowedAccessoryIdentifiers; // ivar: _allowedAccessoryIdentifiers
@property (copy) NSSet *allowedRoomIdentifiers; // ivar: _allowedRoomIdentifiers
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (copy) HMUserHomeAccessSchedule *schedule; // ivar: _schedule
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif