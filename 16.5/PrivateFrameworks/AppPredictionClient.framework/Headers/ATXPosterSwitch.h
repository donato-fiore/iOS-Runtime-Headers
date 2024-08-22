// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOSTERSWITCH_H
#define ATXPOSTERSWITCH_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXPosterSwitch : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSString *lockscreenId; // ivar: _lockscreenId
@property (readonly, copy, nonatomic) NSString *outcome; // ivar: _outcome
@property (readonly, copy, nonatomic) NSString *switchMechanism; // ivar: _switchMechanism


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPosterSwitch:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLockscreenId:(id)arg0 switchMechanism:(id)arg1 ;
-(id)initWithLockscreenId:(id)arg0 switchMechanism:(id)arg1 outcome:(id)arg2 duration:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif