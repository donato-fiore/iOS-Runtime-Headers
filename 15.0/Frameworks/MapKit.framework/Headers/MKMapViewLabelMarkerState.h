// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKMAPVIEWLABELMARKERSTATE_H
#define MKMAPVIEWLABELMARKERSTATE_H


#import <Foundation/Foundation.h>


@interface MKMapViewLabelMarkerState : NSObject

@property (nonatomic) unsigned char balloonBehavior; // ivar: _balloonBehavior
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


+(id)stateForLabelMarker:(id)arg0 ;


@end


#endif