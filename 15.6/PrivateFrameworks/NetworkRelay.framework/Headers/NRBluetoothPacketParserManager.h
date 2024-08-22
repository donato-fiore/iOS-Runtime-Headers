// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRBLUETOOTHPACKETPARSERMANAGER_H
#define NRBLUETOOTHPACKETPARSERMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NRBluetoothPacketParserManager : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_parserDictionary;
}




-(id)init;


@end


#endif