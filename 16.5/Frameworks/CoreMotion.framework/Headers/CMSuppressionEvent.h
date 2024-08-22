// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSUPPRESSIONEVENT_H
#define CMSUPPRESSIONEVENT_H



#import "CMLogItem.h"

@interface CMSuppressionEvent : CMLogItem {
    NSInteger fType;
    NSUInteger fReason;
}


@property (readonly, nonatomic) NSUInteger reason;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
+(id)stringForEventReason:(NSUInteger)arg0 ;
+(id)stringForEventType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventType:(NSInteger)arg0 reason:(NSUInteger)arg1 timestamp:(CGFloat)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif