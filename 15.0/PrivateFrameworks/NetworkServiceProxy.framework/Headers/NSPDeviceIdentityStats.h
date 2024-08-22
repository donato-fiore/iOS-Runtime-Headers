// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPDEVICEIDENTITYSTATS_H
#define NSPDEVICEIDENTITYSTATS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPDeviceIdentityStats : NSPProxyAnalytics

@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL success; // ivar: _success


-(id)analyticsDict;
-(id)eventName;


@end


#endif