// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULOCATIONTRIGGEREDITORCIRCLE_H
#define HULOCATIONTRIGGEREDITORCIRCLE_H

@class NSString;
@protocol MKOverlay;

#import <Foundation/Foundation.h>


@interface HULocationTriggerEditorCircle : NSObject <MKOverlay>



@property (readonly, nonatomic) ? boundingMapRect;
@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


+(id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 ;
-(struct ? )circleRect;


@end


#endif