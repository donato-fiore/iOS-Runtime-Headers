// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCATHERINEDATA_H
#define CMCATHERINEDATA_H



#import "CMLogItem.h"

@interface CMCatherineData : CMLogItem

@property (readonly, nonatomic) CGFloat catherine; // ivar: _catherine
@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCatherine:(CGFloat)arg0 confidence:(CGFloat)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif