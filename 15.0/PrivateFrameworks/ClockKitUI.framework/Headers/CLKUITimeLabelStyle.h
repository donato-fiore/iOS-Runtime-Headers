// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKUITIMELABELSTYLE_H
#define CLKUITIMELABELSTYLE_H

@class CLKFont;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CLKUITimeLabelStyle : NSObject <NSCopying>



@property (retain, nonatomic) CLKFont *designatorFont; // ivar: _designatorFont
@property (retain, nonatomic) CLKFont *fourDigitFont; // ivar: _fourDigitFont
@property (retain, nonatomic) CLKFont *threeDigitFont; // ivar: _threeDigitFont


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif