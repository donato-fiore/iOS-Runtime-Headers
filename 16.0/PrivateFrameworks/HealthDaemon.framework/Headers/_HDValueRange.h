// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDVALUERANGE_H
#define _HDVALUERANGE_H


#import <Foundation/Foundation.h>


@interface _HDValueRange : NSObject

@property (nonatomic) BOOL isMaximumInclusive; // ivar: _isMaximumInclusive
@property (nonatomic) BOOL isMinimumInclusive; // ivar: _isMinimumInclusive
@property (nonatomic) CGFloat maximum; // ivar: _maximum
@property (nonatomic) CGFloat minimum; // ivar: _minimum


-(BOOL)contains:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 isMinimumInclusive:(BOOL)arg2 isMaximumInclusive:(BOOL)arg3 ;


@end


#endif