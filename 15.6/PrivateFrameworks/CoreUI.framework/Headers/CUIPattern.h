// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIPATTERN_H
#define CUIPATTERN_H


#import <Foundation/Foundation.h>


@interface CUIPattern : NSObject {
    *CGImage _patternImage;
    *CGPattern _pattern;
}


@property (nonatomic) CGFloat alpha; // ivar: _alpha


-(id)description;
-(id)initWithImageRef:(struct CGImage *)arg0 ;
-(struct CGImage *)patternImageRef;
-(struct CGPattern *)_newPattern;
-(struct CGPattern *)pattern;
-(void)dealloc;
-(void)setPatternInContext:(struct CGContext *)arg0 ;


@end


#endif