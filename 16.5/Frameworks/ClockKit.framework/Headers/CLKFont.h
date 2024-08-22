// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKFONT_H
#define CLKFONT_H

@class UIFont;



@interface CLKFont : UIFont



+(id)compactSoftFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 ;
+(id)fontWithDescriptor:(id)arg0 size:(CGFloat)arg1 ;
+(id)fontWithName:(id)arg0 size:(CGFloat)arg1 ;
+(id)nonAccessibleCompactSoftFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 ;
+(id)nonAccessibleSystemFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 ;
+(id)systemFontOfSize:(CGFloat)arg0 ;
+(id)systemFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 ;
+(id)systemFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 design:(id)arg2 ;
-(id)fontWithSize:(CGFloat)arg0 ;


@end


#endif