// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXMOVINGAVERAGE_H
#define _ATXMOVINGAVERAGE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _ATXMovingAverage : NSObject <NSSecureCoding>

 {
    CGFloat _movingAverage;
    CGFloat _movingError;
    NSInteger _count;
    CGFloat _alpha;
}


@property (readonly, nonatomic) CGFloat movingAverage;
@property (readonly, nonatomic) CGFloat movingError;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithAlpha:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addElement:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif