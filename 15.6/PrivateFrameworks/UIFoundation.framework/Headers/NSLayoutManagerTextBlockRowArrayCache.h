// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSLAYOUTMANAGERTEXTBLOCKROWARRAYCACHE_H
#define NSLAYOUTMANAGERTEXTBLOCKROWARRAYCACHE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NSLayoutManagerTextBlockRowArrayCache : NSObject {
    _NSRange _rowCharRange;
    CGFloat _containerWidth;
    NSArray *_rowArray;
    BOOL _collapseBorders;
}




-(id)initWithRowCharRange:(struct _NSRange )arg0 containerWidth:(CGFloat)arg1 rowArray:(id)arg2 collapseBorders:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif