// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDURATIONEVENT_H
#define HMDURATIONEVENT_H

@protocol NSSecureCoding, NSCopying, NSMutableCopying;


#import "HMTimeEvent.h"

@interface HMDurationEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>



@property (nonatomic) CGFloat duration; // ivar: _duration


+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg0 home:(id)arg1 ;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 duration:(CGFloat)arg1 ;
-(id)initWithDuration:(CGFloat)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_handleEventUpdatedNotification:(id)arg0 ;
-(void)_updateDuration:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setOffset:(CGFloat)arg0 ;
-(void)updateDuration:(CGFloat)arg0 completionHandler:(id)arg1 ;


@end


#endif