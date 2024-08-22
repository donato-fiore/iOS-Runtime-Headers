// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYINFOWIFIINFO_H
#define HMACCESSORYINFOWIFIINFO_H

@class NSString;


#import "HMAccessoryInfo.h"

@interface HMAccessoryInfoWifiInfo : HMAccessoryInfo

@property (readonly) NSString *macAddress; // ivar: _macAddress
@property (readonly) NSString *networkSSID; // ivar: _networkSSID


-(id)hmfWifiNetworkInfo;
-(id)initWithMacAddress:(id)arg0 networkSSID:(id)arg1 readOnly:(BOOL)arg2 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)initWithWifiNetworkInfo:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)protoPayload;


@end


#endif