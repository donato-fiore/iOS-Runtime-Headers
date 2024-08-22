// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBOUNDINGTEXTRECTSSOLVER_H
#define _UIBOUNDINGTEXTRECTSSOLVER_H

@class NSLayoutManager, NSTextContainer, NSArray;

#import <Foundation/Foundation.h>


@interface _UIBoundingTextRectsSolver : NSObject {
    _NSRange _range;
    CGRect _firstRect;
    CGRect _lastRect;
    CGRect _middleRect;
    CGRect _totalRect;
    _NSRange _firstGlyphRange;
    _NSRange _lastGlyphRange;
    _NSRange _middleGlyphRange;
    _NSRange _totalGlyphRange;
    BOOL _calculated;
    BOOL _unifyRects;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}


@property (readonly, nonatomic) CGRect bodyRect;
@property (readonly, nonatomic) CGRect boundingRect;
@property (readonly, nonatomic) CGRect firstLineRect;
@property (readonly, nonatomic) CGRect lastLineRect;
@property (readonly, nonatomic) NSArray *rects;


-(id)description;
-(id)initWithLayoutManager:(id)arg0 range:(struct _NSRange )arg1 unifyRects:(BOOL)arg2 ;
-(void)_calculate;
-(void)_calculateRectsUsingLayoutManager:(id)arg0 ;
-(void)_calculateTotalRect;


@end


#endif