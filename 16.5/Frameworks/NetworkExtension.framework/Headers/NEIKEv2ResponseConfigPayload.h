// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2RESPONSECONFIGPAYLOAD_H
#define NEIKEV2RESPONSECONFIGPAYLOAD_H



#import "NEIKEv2ConfigPayload.h"
#import "NEIKEv2ConfigurationMessage.h"

@interface NEIKEv2ResponseConfigPayload : NEIKEv2ConfigPayload {
    NEIKEv2ConfigurationMessage *_configurationRequest;
}




-(BOOL)parsePayloadData;


@end


#endif