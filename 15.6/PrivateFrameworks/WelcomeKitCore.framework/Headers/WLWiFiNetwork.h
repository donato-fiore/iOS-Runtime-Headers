// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLWIFINETWORK_H
#define WLWIFINETWORK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLWiFiNetwork : NSObject

@property (nonatomic) *__WiFiNetwork ref; // ivar: _ref
@property (readonly, nonatomic) NSString *ssid;


-(id)initWithWiFiNetworkRef:(struct __WiFiNetwork *)arg0 ;
-(void)dealloc;


@end


#endif