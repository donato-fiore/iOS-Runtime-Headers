// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINHAPSERVICE_H
#define CHIPPLUGINHAPSERVICE_H

@class HAPService, NSNumber;



@interface CHIPPluginHAPService : HAPService

@property (retain, nonatomic) NSNumber *endpoint; // ivar: _endpoint


+(id)chipPluginServiceForCharacteristic:(id)arg0 ;
-(id)initWithType:(id)arg0 instanceID:(id)arg1 parsedCharacteristics:(id)arg2 serviceProperties:(NSUInteger)arg3 linkedServices:(id)arg4 endpoint:(id)arg5 ;


@end


#endif