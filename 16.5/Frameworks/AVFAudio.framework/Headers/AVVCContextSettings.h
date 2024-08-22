// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVCCONTEXTSETTINGS_H
#define AVVCCONTEXTSETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVVCContextSettings : NSObject

@property (retain, nonatomic) NSString *activationDeviceUID; // ivar: _activationDeviceUID
@property (nonatomic) NSInteger activationMode; // ivar: _activationMode
@property (nonatomic) BOOL announceCallsEnabled; // ivar: _announceCallsEnabled


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMode:(NSInteger)arg0 deviceUID:(id)arg1 ;


@end


#endif