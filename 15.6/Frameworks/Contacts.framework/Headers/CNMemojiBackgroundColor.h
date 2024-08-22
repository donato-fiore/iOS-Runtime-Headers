// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMEMOJIBACKGROUNDCOLOR_H
#define CNMEMOJIBACKGROUNDCOLOR_H


#import <Foundation/Foundation.h>


@interface CNMemojiBackgroundColor : NSObject

@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) CGFloat blue; // ivar: _blue
@property (nonatomic) CGFloat green; // ivar: _green
@property (nonatomic) CGFloat red; // ivar: _red


+(id)log;
-(id)initWithColorDescription:(id)arg0 ;
-(id)initWithColorDescription:(id)arg0 alpha:(CGFloat)arg1 ;
-(id)initWithDefaultColorWithAlpha:(CGFloat)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;


@end


#endif