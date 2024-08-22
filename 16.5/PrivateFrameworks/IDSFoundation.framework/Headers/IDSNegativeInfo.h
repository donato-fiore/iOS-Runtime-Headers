// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSNEGATIVEINFO_H
#define IDSNEGATIVEINFO_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IDSNegativeInfo : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) CGFloat time; // ivar: _time


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTime:(CGFloat)arg0 count:(NSInteger)arg1 ;


@end


#endif