// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PACOALESCEDACCESSRECORD_H
#define PACOALESCEDACCESSRECORD_H



#import "PACompleteAccessRecord.h"

@interface PACoalescedAccessRecord : PACompleteAccessRecord

@property (readonly, nonatomic) NSUInteger count; // ivar: _count


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToAccessRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAccess:(id)arg0 startTime:(CGFloat)arg1 endTime:(CGFloat)arg2 count:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif