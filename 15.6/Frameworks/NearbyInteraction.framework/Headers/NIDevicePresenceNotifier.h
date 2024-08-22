// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NIDEVICEPRESENCENOTIFIER_H
#define NIDEVICEPRESENCENOTIFIER_H


#import <Foundation/Foundation.h>

#import "NISession.h"

@interface NIDevicePresenceNotifier : NSObject {
    NISession *parentSession;
}




-(id)initWithParentSession:(id)arg0 ;
-(void)notifyBluetoothSample:(id)arg0 ;


@end


#endif