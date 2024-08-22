// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKUSERLOCATIONINTERNALVIEW_H
#define _MKUSERLOCATIONINTERNALVIEW_H



#import "MKUserLocationView.h"

@interface _MKUserLocationInternalView : MKUserLocationView

@property (weak, nonatomic) MKUserLocationView *parentView; // ivar: _parentView


-(CGFloat)_pointsForDistance:(CGFloat)arg0 ;
-(id)_annotationContainer;
-(id)_containerView;
-(id)_mapView;


@end


#endif