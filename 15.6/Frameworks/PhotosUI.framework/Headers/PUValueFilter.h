// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUVALUEFILTER_H
#define PUVALUEFILTER_H


#import <Foundation/Foundation.h>


@interface PUValueFilter : NSObject

@property (nonatomic) CGFloat currentValue; // ivar: _currentValue


-(CGFloat)outputValue;
-(CGFloat)updatedValue:(CGFloat)arg0 withTargetValue:(CGFloat)arg1 ;
-(id)init;
-(id)initWithValue:(CGFloat)arg0 ;
-(void)setInputValue:(CGFloat)arg0 ;


@end


#endif