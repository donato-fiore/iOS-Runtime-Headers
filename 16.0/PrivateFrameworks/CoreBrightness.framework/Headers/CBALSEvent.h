// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBALSEVENT_H
#define CBALSEVENT_H

@protocol OS_os_log;


#import "CBHIDEvent.h"

@interface CBALSEvent : CBHIDEvent {
    *__IOHIDEvent _event;
    NSObject<OS_os_log> *_logHandle;
}


@property BOOL colorMitigationTriggered; // ivar: _colorMitigationTriggered
@property ? colorSample; // ivar: _colorSample
@property float confidence; // ivar: _confidence
@property BOOL firstALSSample; // ivar: _firstALSSample
@property CGFloat illuminance; // ivar: _illuminance
@property float integrationTime; // ivar: _integrationTime
@property BOOL obstructed; // ivar: _obstructed
@property int orientation; // ivar: _orientation
@property float strength; // ivar: _strength
@property BOOL supportColor; // ivar: _supportColor
@property ? vendorData; // ivar: _vendorData


+(void)replaceLuxWithFilteredLux:(struct __IOHIDEvent *)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithHIDEvent:(struct __IOHIDEvent *)arg0 andService:(struct __IOHIDServiceClient *)arg1 ;
-(int)getServiceOrientation:(struct __IOHIDServiceClient *)arg0 ;
-(struct ? )copyVendorDataFromEvent:(struct __IOHIDEvent *)arg0 ;
-(void)dealloc;


@end


#endif