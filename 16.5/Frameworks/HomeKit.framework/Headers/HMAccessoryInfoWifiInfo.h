// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYINFOWIFIINFO_H
#define HMACCESSORYINFOWIFIINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HMAccessoryInfoWifiInfo : NSObject

@property (readonly) NSString *macAddress; // ivar: _macAddress
@property (readonly) NSString *networkSSID; // ivar: _networkSSID


-(id)hmfWifiNetworkInfo;
-(id)initWithMacAddress:(id)arg0 networkSSID:(id)arg1 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)initWithWifiNetworkInfo:(id)arg0 ;
-(id)protoData;
-(id)protoPayload;


@end


#endif