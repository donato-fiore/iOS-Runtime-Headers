// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRWIFINETWORKASSOCIATION_H
#define HMMTRWIFINETWORKASSOCIATION_H

@class NSData;

#import <Foundation/Foundation.h>


@interface HMMTRWiFiNetworkAssociation : NSObject

@property (readonly, nonatomic) NSData *credentials; // ivar: _credentials
@property (readonly, nonatomic) NSData *ssid; // ivar: _ssid


-(id)initWithSSID:(id)arg0 credentials:(id)arg1 ;


@end


#endif