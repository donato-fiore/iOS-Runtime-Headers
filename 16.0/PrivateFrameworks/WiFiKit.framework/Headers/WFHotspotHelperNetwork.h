// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHOTSPOTHELPERNETWORK_H
#define WFHOTSPOTHELPERNETWORK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFHotspotHelperNetwork : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


-(id)description;
-(id)initWithSSID:(id)arg0 bundleIdentifier:(id)arg1 password:(id)arg2 label:(id)arg3 ;


@end


#endif