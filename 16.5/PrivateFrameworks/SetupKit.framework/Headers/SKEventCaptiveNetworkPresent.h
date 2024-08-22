// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKEVENTCAPTIVENETWORKPRESENT_H
#define SKEVENTCAPTIVENETWORKPRESENT_H

@class NSString, NSURL;


#import "SKEvent.h"

@interface SKEventCaptiveNetworkPresent : SKEvent

@property (readonly, copy, nonatomic) NSString *captiveInterfaceIdentifier; // ivar: _captiveInterfaceIdentifier
@property (readonly, copy, nonatomic) NSString *captiveSSID; // ivar: _captiveSSID
@property (readonly, copy, nonatomic) NSURL *captiveURL; // ivar: _captiveURL


-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithCaptiveURL:(id)arg0 interfaceIdentifier:(id)arg1 ssid:(id)arg2 ;


@end


#endif