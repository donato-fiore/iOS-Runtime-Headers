// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKICONIMAGE_H
#define VKICONIMAGE_H


#import <Foundation/Foundation.h>


@interface VKIconImage : NSObject {
    ? _iconImage;
    _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _fillColor;
    _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _haloColor;
    _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _glyphColor;
    _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _calloutFillColor;
    _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _calloutHaloColor;
    _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _calloutTextColor;
}




-(BOOL)isBalloonShape;
-(float)contentScale;
-(float)opacity;
-(id)init:(struct shared_ptr<grl::IconImage> )arg0 ;
-(struct CGColor *)calloutFillColor;
-(struct CGColor *)calloutHaloColor;
-(struct CGColor *)calloutTextColor;
-(struct CGColor *)fillColor;
-(struct CGColor *)glyphColor;
-(struct CGColor *)haloColor;
-(struct CGImage *)image;
-(struct CGSize )imageSize;
-(unsigned int)calloutShape;


@end


#endif