// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDBYPASSSETTINGS_H
#define DNDBYPASSSETTINGS_H

@class NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDBypassSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *immediateBypassCNGroupIdentifier; // ivar: _immediateBypassCNGroupIdentifier
@property (readonly, nonatomic) NSUInteger immediateBypassEventSourceType; // ivar: _immediateBypassEventSourceType
@property (readonly, nonatomic) NSUInteger repeatEventSourceBehaviorEnabledSetting; // ivar: _repeatEventSourceBehaviorEnabledSetting


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithImmediateBypassEventSourceType:(NSUInteger)arg0 immediateBypassCNGroupIdentifier:(id)arg1 repeatEventSourceBehaviorEnabledSetting:(NSUInteger)arg2 ;
-(id)_initWithSettings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diffDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif