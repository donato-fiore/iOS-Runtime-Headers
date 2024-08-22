// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTOREDIRECTORY_H
#define BMSTOREDIRECTORY_H


#import <Foundation/Foundation.h>


@interface BMStoreDirectory : NSObject



+(id)compute;
+(id)flexibleStorage;
+(id)localDevice;
+(id)lock;
+(id)metadata;
+(id)persistent;
+(id)private;
+(id)public;
+(id)remoteDevices;
+(id)restricted;
+(id)sessions;
+(id)streams;
+(id)sync;
+(id)tmp;
+(id)tombstones;
+(void)setBasePathForTestingWithPath:(id)arg0 ;
+(void)unsetBasePathForTesting;


@end


#endif