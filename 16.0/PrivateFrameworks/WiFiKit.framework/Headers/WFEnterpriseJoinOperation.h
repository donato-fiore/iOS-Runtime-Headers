// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFENTERPRISEJOINOPERATION_H
#define WFENTERPRISEJOINOPERATION_H

@class NSString, CWFAssocParameters, CWFInterface;


#import "WFOperation.h"
#import "WFNetworkScanRecord.h"
#import "WFNetworkProfile.h"

@interface WFEnterpriseJoinOperation : WFOperation {
    NSString *_name;
}


@property (retain, nonatomic) CWFAssocParameters *associationParameters; // ivar: _associationParameters
@property (nonatomic) *__WiFiDeviceClient device; // ivar: _device
@property (retain, nonatomic) CWFInterface *interface; // ivar: _interface
@property (nonatomic) *__WiFiManagerClient manager; // ivar: _manager
@property (retain, nonatomic) WFNetworkScanRecord *network; // ivar: _network
@property (retain, nonatomic) WFNetworkProfile *profile; // ivar: _profile


-(id)initWithAssocParameters:(id)arg0 interface:(id)arg1 ;
-(id)initWithNetwork:(id)arg0 profile:(id)arg1 ;
-(id)name;
-(void)_handleEnterpriseJoinResult:(NSInteger)arg0 userInfo:(id)arg1 network:(struct __WiFiNetwork *)arg2 ;
-(void)_joinComplete:(int)arg0 userInfo:(struct __CFDictionary *)arg1 network:(struct __WiFiNetwork *)arg2 ;
-(void)_joinWithCoreWiFi;
-(void)_joinWithMobileWiFi;
-(void)dealloc;
-(void)joinNetworkRef:(struct __WiFiNetwork *)arg0 ;
-(void)setName:(id)arg0 ;
-(void)start;


@end


#endif