// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWKUICOLORINDEX_H
#define NWKUICOLORINDEX_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface NWKUIColorIndex : NSObject

@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) CGFloat value; // ivar: _value


+(id)colorForValue:(CGFloat)arg0 ;
+(id)indexForValue:(CGFloat)arg0 ;
+(id)indexWithValue:(CGFloat)arg0 color:(id)arg1 ;
+(id)zeroIndex;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithValue:(CGFloat)arg0 color:(id)arg1 ;


@end


#endif