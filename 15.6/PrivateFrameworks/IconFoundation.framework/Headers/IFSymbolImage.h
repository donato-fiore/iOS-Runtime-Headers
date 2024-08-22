// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IFSYMBOLIMAGE_H
#define IFSYMBOLIMAGE_H



#import "IFImage.h"

@interface IFSymbolImage : IFImage {
    *CGImage _internalCGImage;
    CGFloat _internalScale;
    CGSize _internalSize;
}


@property (readonly, nonatomic) CGRect alignmentRect; // ivar: _alignmentRect
@property (readonly, nonatomic) CGFloat baselineOffset; // ivar: _baselineOffset
@property (readonly, nonatomic) CGFloat capHeight; // ivar: _capHeight
@property (readonly, nonatomic) CGRect contentBounds; // ivar: _contentBounds
@property (readonly, nonatomic, getter=isFlippable) BOOL flippable; // ivar: _flippable
@property (readonly, nonatomic) CGFloat fontMatchingScaleFactor; // ivar: _fontMatchingScaleFactor
@property (readonly, nonatomic) CGFloat pointSize; // ivar: _pointSize
@property (readonly, nonatomic) CGFloat referencePointSize; // ivar: _referencePointSize
@property (readonly, nonatomic) NSUInteger symbolSize; // ivar: _symbolSize
@property (readonly, nonatomic) NSInteger symbolWeight; // ivar: _symbolWeight


-(CGFloat)scale;
-(id)initWithNamedVectorGlyph:(id)arg0 ;
-(struct CGImage *)CGImage;
-(struct CGSize )size;
-(void)dealloc;


@end


#endif