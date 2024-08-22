// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMORPHINGLABELGLYPHSET_H
#define UIMORPHINGLABELGLYPHSET_H

@class NSAttributedString, NSArray;

#import <Foundation/Foundation.h>

#import "UIMorphingLabel.h"

@interface UIMorphingLabelGlyphSet : NSObject {
    UIMorphingLabel *_label;
    *__CTLine _line;
}


@property (readonly, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, nonatomic) NSUInteger glyphCount; // ivar: _glyphCount
@property (readonly, nonatomic) *CGRect glyphFrames; // ivar: _glyphFrames
@property (readonly, nonatomic) *CGPoint glyphPositions; // ivar: _glyphPositions
@property (readonly, nonatomic) NSArray *glyphViews; // ivar: _glyphViews
@property (readonly, nonatomic) *unsigned short glyphs; // ivar: _glyphs
@property (readonly, nonatomic) CGPoint lineOrigin; // ivar: _lineOrigin
@property (readonly, nonatomic) CGFloat lineWidth; // ivar: _lineWidth


-(id)initWithLabel:(id)arg0 attributedString:(id)arg1 ;
-(struct CGRect )boundingRectForGlyphsInRange:(struct _NSRange )arg0 ;
-(void)buildGlyphViews;
-(void)dealloc;
-(void)placeGlyphs;
-(void)removeGlyphs;


@end


#endif