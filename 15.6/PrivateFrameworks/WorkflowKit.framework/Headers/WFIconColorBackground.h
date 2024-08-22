// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFICONCOLORBACKGROUND_H
#define WFICONCOLORBACKGROUND_H

@class WFColor;


#import "WFIconBackground.h"

@interface WFIconColorBackground : WFIconBackground

@property (readonly, nonatomic) WFColor *color; // ivar: _color


+(BOOL)supportsSecureCoding;
+(id)clearBackground;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif