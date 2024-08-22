// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVOUTPUTDEVICEAUTHORIZEDPEERINTERNAL_H
#define AVOUTPUTDEVICEAUTHORIZEDPEERINTERNAL_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceAuthorizedPeerInternal : NSObject {
    NSString *ID;
    NSData *publicKey;
    BOOL isAdmin;
}






@end


#endif