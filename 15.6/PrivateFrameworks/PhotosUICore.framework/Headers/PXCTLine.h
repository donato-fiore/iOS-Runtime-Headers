// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCTLINE_H
#define PXCTLINE_H

@class NSAttributedString, NSShadow, NSString;

#import <Foundation/Foundation.h>

#import "PXCTFrame.h"

@interface PXCTLine : NSObject {
    BOOL _prepared;
    CGFloat _width;
    CGRect _imageBounds;
}


@property (readonly, nonatomic) CGFloat ascent; // ivar: _ascent
@property (readonly, nonatomic) CGFloat ascentPosition;
@property (readonly, nonatomic) CGFloat baselinePosition;
@property (readonly, nonatomic) CGRect contentBounds;
@property (readonly, nonatomic) *CGContext context; // ivar: _context
@property (readonly, nonatomic) CGFloat descent; // ivar: _descent
@property (readonly, nonatomic) CGFloat descentPosition;
@property (readonly, nonatomic, getter=isEndOfString) BOOL endOfString; // ivar: _endOfString
@property (readonly, weak, nonatomic) PXCTFrame *frame; // ivar: _frame
@property (readonly, nonatomic) CGRect imageBounds;
@property (readonly, nonatomic) *__CTLine line; // ivar: _line
@property (readonly, nonatomic) CGPoint origin; // ivar: _origin
@property (readonly, nonatomic) NSAttributedString *referenceAttributedString; // ivar: _referenceAttributedString
@property (readonly, nonatomic) NSShadow *shadow; // ivar: _shadow
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) _NSRange stringRange; // ivar: _stringRange
@property (readonly, nonatomic) CGPoint textPosition;
@property (readonly, nonatomic) CGAffineTransform transform; // ivar: _transform
@property (readonly, nonatomic, getter=isTruncated) BOOL truncated; // ivar: _truncated
@property (readonly, nonatomic) CGFloat width;


-(id)description;
-(id)init;
-(id)initWithLine:(struct __CTLine *)arg0 origin:(struct CGPoint )arg1 frame:(id)arg2 referenceAttributedString:(id)arg3 truncated:(BOOL)arg4 ;
-(struct CGPath *)createPath;
-(void)_transformBy:(struct CGAffineTransform )arg0 ;
-(void)dealloc;
-(void)draw;
-(void)prepare;
-(void)scaleBy:(CGFloat)arg0 ;
-(void)scaleVerticallyBy:(CGFloat)arg0 ;
-(void)translateHorizontallyBy:(CGFloat)arg0 ;
-(void)translateVerticallyBy:(CGFloat)arg0 ;


@end


#endif