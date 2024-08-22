// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKTEXTSELECTIONRECT_H
#define WKTEXTSELECTIONRECT_H

@class UITextSelectionRect;



@interface WKTextSelectionRect : UITextSelectionRect {
    SelectionGeometry _selectionGeometry;
    CGFloat _scaleFactor;
}




-(BOOL)containsEnd;
-(BOOL)containsStart;
-(BOOL)isVertical;
-(NSInteger)writingDirection;
-(id)_customHandleInfo;
-(id)_path;
-(id)initWithCGRect:(struct CGRect )arg0 ;
-(id)initWithSelectionGeometry:(*void)arg0 scaleFactor:(CGFloat)arg1 ;
-(id)range;
-(struct CGRect )rect;


@end


#endif