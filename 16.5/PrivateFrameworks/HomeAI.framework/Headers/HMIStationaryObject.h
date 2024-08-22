// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMISTATIONARYOBJECT_H
#define HMISTATIONARYOBJECT_H

@class HMFObject;


#import "HMIVideoAnalyzerEvent.h"

@interface HMIStationaryObject : HMFObject

@property (readonly) HMIVideoAnalyzerEvent *event; // ivar: _event
@property (readonly) ? time; // ivar: _time


-(id)initWithEvent:(id)arg0 time:(struct ? )arg1 ;


@end


#endif