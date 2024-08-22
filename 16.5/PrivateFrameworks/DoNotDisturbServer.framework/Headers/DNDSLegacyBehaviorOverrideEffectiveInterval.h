// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSLEGACYBEHAVIOROVERRIDEEFFECTIVEINTERVAL_H
#define DNDSLEGACYBEHAVIOROVERRIDEEFFECTIVEINTERVAL_H

@class NSString, NSDateComponents, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDSLegacyBehaviorOverrideEffectiveInterval : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *calendarIdentifier; // ivar: _calendarIdentifier
@property (readonly, copy, nonatomic) NSDateComponents *endComponents; // ivar: _endComponents
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger repeatInterval; // ivar: _repeatInterval
@property (readonly, copy, nonatomic) NSDateComponents *startComponents; // ivar: _startComponents


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartComponents:(id)arg0 endComponents:(id)arg1 calendarIdentifier:(id)arg2 repeatInterval:(NSUInteger)arg3 identifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif