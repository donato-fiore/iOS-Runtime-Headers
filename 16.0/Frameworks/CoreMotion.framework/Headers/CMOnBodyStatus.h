// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMONBODYSTATUS_H
#define CMONBODYSTATUS_H



#import "CMLogItem.h"

@interface CMOnBodyStatus : CMLogItem {
    int fResult;
    int fConfidence;
}


@property (readonly, nonatomic) NSInteger confidence;
@property (readonly, nonatomic) NSInteger result;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOnBodyResult:(int)arg0 confidence:(int)arg1 timestamp:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif