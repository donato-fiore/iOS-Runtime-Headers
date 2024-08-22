// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKINTERPOLATEDCOLORPALETTE_H
#define NTKINTERPOLATEDCOLORPALETTE_H

@class NSCache;

#import <Foundation/Foundation.h>

#import "NTKFaceColorPalette.h"

@interface NTKInterpolatedColorPalette : NSObject {
    NSCache *_cache;
}


@property (copy, nonatomic) NTKFaceColorPalette *fromPalette; // ivar: _fromPalette
@property (copy, nonatomic) NTKFaceColorPalette *toPalette; // ivar: _toPalette
@property (nonatomic) CGFloat transitionFraction; // ivar: _transitionFraction


+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithColorPalette:(id)arg0 ;
-(id)initWithFromPalette:(id)arg0 toPalette:(id)arg1 ;
-(id)interpolatedColorFromSelector:(SEL)arg0 parameter:(id)arg1 ;
-(id)valueForKey:(id)arg0 ;


@end


#endif