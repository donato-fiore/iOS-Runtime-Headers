// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LAUITOUCHIDGLYPH_H
#define LAUITOUCHIDGLYPH_H

@class UIImpactFeedbackGenerator, UIView;

#import <Foundation/Foundation.h>

#import "LAPKGlyphWrapper.h"

@interface LAUITouchIDGlyph : NSObject {
    LAPKGlyphWrapper *_glyph;
    UIImpactFeedbackGenerator *_hapticGenerator;
}


@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) UIView *view;


-(id)initWithStyle:(NSInteger)arg0 ;
-(void)dealloc;
-(void)shake;


@end


#endif