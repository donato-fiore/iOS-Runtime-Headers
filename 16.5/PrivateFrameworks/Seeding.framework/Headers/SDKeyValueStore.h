// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SDKEYVALUESTORE_H
#define SDKEYVALUESTORE_H


#import <Foundation/Foundation.h>


@interface SDKeyValueStore : NSObject



+(id)deviceDictionaryForDeviceIdentifier:(id)arg0 ;
+(id)devicesDictionary;
+(void)insertOrUpdateDevice:(id)arg0 ;
+(void)synchronize;


@end


#endif