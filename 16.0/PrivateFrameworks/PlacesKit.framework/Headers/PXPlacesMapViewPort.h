// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPLACESMAPVIEWPORT_H
#define PXPLACESMAPVIEWPORT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXPlacesMapViewPort : NSObject <NSCopying>



@property (nonatomic) ? mapRect; // ivar: _mapRect
@property (nonatomic) CGFloat pitch; // ivar: _pitch
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGSize viewSize; // ivar: _viewSize
@property (nonatomic) CGFloat zoomLevel; // ivar: _zoomLevel


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSpanning180thMerdian;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMapRect:(struct ? )arg0 andViewSize:(struct CGSize )arg1 zoomLevel:(CGFloat)arg2 pitch:(CGFloat)arg3 ;
-(id)viewPortsBySplitingAt180thMerdian;


@end


#endif