// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSLEGACYBEHAVIOROVERRIDE_H
#define DNDSLEGACYBEHAVIOROVERRIDE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDSLegacyBehaviorOverride : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *effectiveIntervals; // ivar: _effectiveIntervals
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) NSUInteger overrideType; // ivar: _overrideType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOverrideType:(NSUInteger)arg0 mode:(NSUInteger)arg1 effectiveIntervals:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif