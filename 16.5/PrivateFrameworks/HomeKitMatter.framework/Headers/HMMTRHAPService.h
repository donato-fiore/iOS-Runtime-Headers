// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRHAPSERVICE_H
#define HMMTRHAPSERVICE_H

@class HAPService, NSNumber;



@interface HMMTRHAPService : HAPService

@property (retain, nonatomic) NSNumber *endpoint; // ivar: _endpoint


+(id)chipPluginServiceForCharacteristic:(id)arg0 ;
-(id)initWithType:(id)arg0 instanceID:(id)arg1 parsedCharacteristics:(id)arg2 serviceProperties:(NSUInteger)arg3 linkedServices:(id)arg4 endpoint:(id)arg5 ;


@end


#endif