// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REDUETCONTEXTSTORE_H
#define REDUETCONTEXTSTORE_H

@class NSMutableDictionary;
@protocol _CDUserContext;


#import "RESingleton.h"

@interface REDuetContextStore : RESingleton {
    id<_CDUserContext> *_context;
    NSMutableDictionary *_registrations;
}




-(id)_init;
-(id)isConnectedToAudioBluetoothDeviceQuery;
-(id)isConnectedToCarQuery;
-(void)registerForQuery:(id)arg0 updateBlock:(id)arg1 ;
-(void)unregisterForQuery:(id)arg0 ;


@end


#endif