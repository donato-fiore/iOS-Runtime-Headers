// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICONSTCOLOR_H
#define CICONSTCOLOR_H



#import "CIColor.h"

@interface CIConstColor : CIColor



+(id)alloc;
-(*CGFloat)components;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)alpha;
-(CGFloat)blue;
-(CGFloat)green;
-(CGFloat)red;
-(NSUInteger)hash;
-(NSUInteger)numberOfComponents;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)retain;
-(struct CGColor *)cgColor;
-(struct CGColor *)rgbColor;
-(struct CGColorSpace *)colorSpace;
-(void)dealloc;
-(void)release;


@end


#endif