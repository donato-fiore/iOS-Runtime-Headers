// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPOLYLINEVIEW_H
#define MKPOLYLINEVIEW_H



#import "MKOverlayPathView.h"
#import "MKPolyline.h"

@interface MKPolylineView : MKOverlayPathView

@property (readonly, nonatomic) MKPolyline *polyline;


-(id)initWithPolyline:(id)arg0 ;
-(void)createPath;
-(void)drawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;


@end


#endif