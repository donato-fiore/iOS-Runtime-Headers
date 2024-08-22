// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSTROKEACCUMULATOR_H
#define RBSTROKEACCUMULATOR_H

@class NSString;
@protocol RBStroke, RBLineStroke, RBParticleStroke, NSCopying;

#import <Foundation/Foundation.h>


@interface RBStrokeAccumulator : NSObject <RBStroke, RBLineStroke, RBParticleStroke, NSCopying>

 {
    vector<RBStrokeElement, 0UL, unsigned long> _elements;
    vector<float, 0UL, unsigned long> _values;
    cf_ptr<CGImage *> _image;
    float _imageScale;
    NSUInteger _imageCount;
    int _strokeType;
    int _blendMode;
    int _lineCap;
    int _lineJoin;
    float _miterLimit;
    float _maxLineWidth;
    NSInteger _seed;
    CGRect _bounds;
    float _borderWidth;
    BOOL _hasBounds;
    BOOL _committed;
    BOOL _rotatesImage;
}


@property (nonatomic) int blendMode;
@property (readonly, nonatomic) float borderWidth;
@property (readonly, nonatomic) CGRect boundingRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) *CGImage image;
@property (nonatomic) NSUInteger imageCount;
@property (nonatomic) float imageScale;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (readonly, nonatomic) float maxLineWidth;
@property (nonatomic) float miterLimit;
@property (nonatomic) BOOL rotatesImage;
@property (nonatomic) NSInteger seed;
@property (nonatomic) int strokeType;
@property (readonly) Class superclass;


-(id)commit;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)addElement:(unsigned char)arg0 args:(*float)arg1 ;
-(void)addPath:(struct CGPath *)arg0 transform:(struct CGAffineTransform )arg1 ;
-(void)applyFunction:(*unk)arg0 info:(*void)arg1 ;
-(void)removeAllElements;


@end


#endif