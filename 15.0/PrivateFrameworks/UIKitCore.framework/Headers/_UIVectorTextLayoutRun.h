// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVECTORTEXTLAYOUTRUN_H
#define _UIVECTORTEXTLAYOUTRUN_H

@class NSAttributedString, NSString;
@protocol _UIVectorTextLayoutRun;

#import <Foundation/Foundation.h>

#import "_UIVectorTextLayoutInfo.h"

@interface _UIVectorTextLayoutRun : NSObject <_UIVectorTextLayoutRun>

 {
    NSUInteger _glyphCount;
    NSAttributedString *_sourceString;
    _UIVectorTextLayoutInfo *_layoutInfo;
}


@property (readonly, nonatomic) *__CTRun _CTRun; // ivar: _runRef
@property (nonatomic) CGFloat baseline; // ivar: _baseline
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger lineIndex; // ivar: _lineIndex
@property (nonatomic) CGRect lineRect; // ivar: _lineRect
@property (readonly) Class superclass;
@property (nonatomic) CGRect usedLineRect; // ivar: _usedLineRect
@property (nonatomic) CGRect usedRunRect; // ivar: _usedRunRect


-(BOOL)shouldRender;
-(NSInteger)glyphCount;
-(id)font;
-(id)initWithCTRun:(struct __CTRun *)arg0 lineIndex:(NSUInteger)arg1 layoutInfo:(id)arg2 ;
-(id)string;
-(struct _NSRange )stringRange;
-(void)_enumerateGlyphsUsingBlock:(id)arg0 ;
-(void)dealloc;
-(void)enumerateGlyphsUsingBlock:(id)arg0 ;
-(void)renderInContext:(struct CGContext *)arg0 ;


@end


#endif