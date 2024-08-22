// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMMAGICMOUNTSTATE_H
#define CMMAGICMOUNTSTATE_H



#import "CMLogItem.h"

@interface CMMagicMountState : CMLogItem

@property (readonly, nonatomic, getter=isMounted) BOOL mounted; // ivar: _mounted


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMounted:(BOOL)arg0 timestamp:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif