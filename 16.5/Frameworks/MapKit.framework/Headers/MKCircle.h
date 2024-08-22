// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKCIRCLE_H
#define MKCIRCLE_H

@class NSString;
@protocol MKOverlay;


#import "MKShape.h"

@interface MKCircle : MKShape <MKOverlay>



@property (readonly, nonatomic) ? boundingMapRect; // ivar: _boundingMapRect
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


+(id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 ;
+(id)circleWithMapRect:(struct ? )arg0 ;
-(BOOL)intersectsMapRect:(struct ? )arg0 ;
-(id)_initWithCenterCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 ;


@end


#endif