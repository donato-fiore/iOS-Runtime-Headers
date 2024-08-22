// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDMODEASSERTIONDETAILS_H
#define DNDMODEASSERTIONDETAILS_H

@class NSString, NSDate;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDModeAssertionLifetime.h"

@interface DNDModeAssertionDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) DNDModeAssertionLifetime *lifetime; // ivar: _lifetime
@property (readonly, copy, nonatomic) NSDate *modeConfigurationModifiedDate; // ivar: _modeConfigurationModifiedDate
@property (readonly, copy, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly, nonatomic, getter=isUserRequested) BOOL userRequested;
@property (readonly, copy, nonatomic) NSDate *userVisibleEndDate; // ivar: _userVisibleEndDate


+(BOOL)supportsSecureCoding;
+(id)detailsWithIdentifier:(id)arg0 modeIdentifier:(id)arg1 lifetime:(id)arg2 ;
+(id)detailsWithIdentifier:(id)arg0 modeIdentifier:(id)arg1 lifetime:(id)arg2 reason:(NSUInteger)arg3 ;
+(id)userRequestedAssertionDetailsWithIdentifier:(id)arg0 modeIdentifier:(id)arg1 lifetime:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDetails:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 modeIdentifier:(id)arg1 modeConfigurationModifiedDate:(id)arg2 lifetime:(id)arg3 reason:(NSUInteger)arg4 userVisibleEndDate:(id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif