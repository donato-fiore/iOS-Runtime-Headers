// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCTFRAME_H
#define PXCTFRAME_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PXCTFramesetter.h"

@interface PXCTFrame : NSObject {
    BOOL _prepared;
}


@property (readonly, nonatomic) BOOL allowTruncation; // ivar: _allowTruncation
@property (readonly, nonatomic) *__CTFrame frame; // ivar: _frame
@property (readonly, weak, nonatomic) PXCTFramesetter *framesetter; // ivar: _framesetter
@property (readonly, nonatomic) NSArray *lines; // ivar: _lines
@property (readonly, nonatomic) NSUInteger maximumLineCount; // ivar: _maximumLineCount
@property (readonly, nonatomic) CGPoint origin; // ivar: _origin
@property (readonly, nonatomic, getter=isTruncated) BOOL truncated; // ivar: _truncated


-(BOOL)_truncateLine:(struct __CTLine **)arg0 withOrigin:(struct CGPoint *)arg1 referenceAttributedString:(*id)arg2 bounds:(struct CGRect )arg3 ;
-(id)init;
-(id)initWithFrame:(struct __CTFrame *)arg0 maximumLineCount:(NSUInteger)arg1 allowTruncation:(BOOL)arg2 framesetter:(id)arg3 ;
-(void)dealloc;
-(void)prepare;


@end


#endif