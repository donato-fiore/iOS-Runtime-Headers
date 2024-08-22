// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMITHERMALMONITORSERVICE_H
#define HMITHERMALMONITORSERVICE_H

@class HMFObject;



@interface HMIThermalMonitorService : HMFObject {
    *__IOHIDServiceClient _service;
}




-(CGFloat)readValue;
-(id)initWithService:(struct __IOHIDServiceClient *)arg0 ;
-(void)dealloc;


@end


#endif