// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKPOLYLINEOVERLAYRENDERREGION_H
#define VKPOLYLINEOVERLAYRENDERREGION_H


#import <Foundation/Foundation.h>


@interface VKPolylineOverlayRenderRegion : NSObject {
    Box<double, 2> _visibleRect;
    MultiRectRegion _snappingRegion;
}


@property (readonly, nonatomic) *void routeLineDatas; // ivar: _routeLineDatas
@property ? visibleRect;


-(BOOL)isEquivalentToNewRegion:(id)arg0 ;
-(id)initForVisibleRect:(*void)arg0 snappingRegion:(*void)arg1 routeLineDatas:(*void)arg2 ;


@end


#endif