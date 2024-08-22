// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADEVICEMYRIADCONFIGURATION_H
#define SADEVICEMYRIADCONFIGURATION_H



#import "SABaseClientBoundCommand.h"

@interface SADeviceMyriadConfiguration : SABaseClientBoundCommand

@property (nonatomic) CGFloat deviceAdjustment;
@property (nonatomic) CGFloat deviceClass;
@property (nonatomic) CGFloat deviceDelay;
@property (nonatomic) CGFloat deviceTrumpDelay;
@property (nonatomic) CGFloat deviceVTEndtimeDistanceThreshold;


+(id)deviceMyriadConfiguration;
+(id)deviceMyriadConfigurationWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif