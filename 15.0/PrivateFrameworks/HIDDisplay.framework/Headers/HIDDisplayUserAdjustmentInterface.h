// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HIDDISPLAYUSERADJUSTMENTINTERFACE_H
#define HIDDISPLAYUSERADJUSTMENTINTERFACE_H

@class NSDictionary;


#import "HIDDisplayInterface.h"

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}


@property (readonly) BOOL valid;


-(BOOL)invalidate:(*id)arg0 ;
-(BOOL)set:(id)arg0 error:(*id)arg1 ;
-(BOOL)setupInterface;
-(id)get:(*id)arg0 ;
-(id)getHIDDevices;
-(id)initWithContainerID:(id)arg0 ;
-(id)initWithService:(unsigned int)arg0 ;


@end


#endif