// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPDROPCAPBACKGROUNDADORNMENT_H
#define TSWPDROPCAPBACKGROUNDADORNMENT_H

@class TSUColor, NSString;
@protocol TSWPLineFragmentAdornment;

#import <Foundation/Foundation.h>


@interface TSWPDropCapBackgroundAdornment : NSObject <TSWPLineFragmentAdornment>

 {
    TSUColor *_color;
    CGRect _bounds;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBackground;
@property (readonly) Class superclass;


-(id)initWithColor:(id)arg0 bounds:(struct CGRect )arg1 ;
-(void)dealloc;
-(void)drawAdornmentForFragment:(*void)arg0 inContext:(struct CGContext *)arg1 withFlags:(unsigned int)arg2 state:(*void)arg3 bounds:(struct CGRect )arg4 ;


@end


#endif