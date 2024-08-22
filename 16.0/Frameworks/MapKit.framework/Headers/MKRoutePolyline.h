// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKROUTEPOLYLINE_H
#define MKROUTEPOLYLINE_H

@class NSString;
@protocol MKDirectionsResponsePolyline;


#import "MKPolyline.h"

@interface MKRoutePolyline : MKPolyline <MKDirectionsResponsePolyline>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_requiresModernMap, setter=_setRequiresModernMap:) BOOL requiresModernMap; // ivar: _requiresModernMap
@property (readonly) Class superclass;


-(id)_stepWithRange:(struct _NSRange )arg0 ;


@end


#endif