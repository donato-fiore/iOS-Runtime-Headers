// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPREQUESTPAIRINGDESCRIPTION_H
#define MTSDEVICESETUPREQUESTPAIRINGDESCRIPTION_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTSDeviceSetupRequestPairingDescription : NSObject

@property (readonly, copy) NSNumber *nodeID; // ivar: _nodeID
@property (readonly, copy) NSData *rootPublicKey; // ivar: _rootPublicKey


-(id)initWithRootPublicKey:(id)arg0 nodeID:(id)arg1 ;


@end


#endif