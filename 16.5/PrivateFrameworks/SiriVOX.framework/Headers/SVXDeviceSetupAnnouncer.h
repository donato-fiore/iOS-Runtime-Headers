// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXDEVICESETUPANNOUNCER_H
#define SVXDEVICESETUPANNOUNCER_H

@class NSString;
@protocol SVXDeviceSetupListening;


#import "SVXAnnouncer.h"

@interface SVXDeviceSetupAnnouncer : SVXAnnouncer <SVXDeviceSetupListening>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)protocol;


@end


#endif