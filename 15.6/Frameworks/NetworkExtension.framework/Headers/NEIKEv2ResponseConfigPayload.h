// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2RESPONSECONFIGPAYLOAD_H
#define NEIKEV2RESPONSECONFIGPAYLOAD_H



#import "NEIKEv2ConfigPayload.h"
#import "NEIKEv2ConfigurationMessage.h"

@interface NEIKEv2ResponseConfigPayload : NEIKEv2ConfigPayload

@property (retain) NEIKEv2ConfigurationMessage *configurationRequest; // ivar: _configurationRequest


-(BOOL)parsePayloadData;
-(id)initWithResponseConfigPayload:(id)arg0 configRequest:(id)arg1 ;


@end


#endif