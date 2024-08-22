// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXMOSAICGALLERYCOLUMNLAYOUT_H
#define SXMOSAICGALLERYCOLUMNLAYOUT_H


#import <Foundation/Foundation.h>


@interface SXMosaicGalleryColumnLayout : NSObject

@property (readonly, nonatomic) CGFloat gutter; // ivar: _gutter
@property (readonly, nonatomic) CGFloat width; // ivar: _width


-(CGFloat)positionForColumnRange:(struct _NSRange )arg0 numberOfColumns:(NSUInteger)arg1 ;
-(CGFloat)positionOfColumn:(NSUInteger)arg0 inNumberOfColumns:(NSUInteger)arg1 ;
-(CGFloat)widthForColumnRange:(struct _NSRange )arg0 numberOfColumns:(NSUInteger)arg1 ;
-(CGFloat)widthOfColumn:(NSUInteger)arg0 inNumberOfColumns:(NSUInteger)arg1 ;
-(id)initWithWidth:(CGFloat)arg0 gutter:(CGFloat)arg1 ;


@end


#endif