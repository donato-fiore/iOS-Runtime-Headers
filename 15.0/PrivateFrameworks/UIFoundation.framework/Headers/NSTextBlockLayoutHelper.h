// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSTEXTBLOCKLAYOUTHELPER_H
#define NSTEXTBLOCKLAYOUTHELPER_H


#import <Foundation/Foundation.h>

#import "NSTextTableBlock.h"

@interface NSTextBlockLayoutHelper : NSObject {
    NSTextTableBlock *_block;
    _NSRange _charRange;
    _NSRange _glyphRange;
    CGRect _layoutRect;
    CGRect _boundsRect;
    CGFloat _lMargin;
    CGFloat _lBorder;
    CGFloat _lPadding;
    CGFloat _tMargin;
    CGFloat _tBorder;
    CGFloat _tPadding;
    CGFloat _width;
    CGFloat _height;
    CGFloat _rPadding;
    CGFloat _rBorder;
    CGFloat _rMargin;
    CGFloat _bPadding;
    CGFloat _bBorder;
    CGFloat _bMargin;
}




-(id)description;
-(void)dealloc;


@end


#endif