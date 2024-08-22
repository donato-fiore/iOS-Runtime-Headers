// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REINTERFACECACHE_H
#define REINTERFACECACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "RESingleton.h"

@interface REInterfaceCache : RESingleton {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_supportedInterfaces;
}




-(BOOL)_interface:(id)arg0 implementsInterface:(id)arg1 ;
-(BOOL)_supportsCache;
-(BOOL)exportedInterfaceClass:(Class)arg0 ;
-(BOOL)exportedInterfaceProtocol:(id)arg0 ;
-(id)_accessInterfaceForKey:(id)arg0 ;
-(id)_init;
-(id)_queue_valueForKey:(id)arg0 level:(NSUInteger)arg1 ;
-(id)_supportedProtocols;
-(void)_enumerateMethodsOfInterface:(id)arg0 forProtocol:(id)arg1 usingBlock:(id)arg2 ;
-(void)_enumeratePropertiesOfInterface:(id)arg0 forProtocol:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateExportedMethodsOfClass:(Class)arg0 usingBlock:(id)arg1 ;
-(void)enumerateExportedMethodsOfProtocol:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateExportedPropertiesOfClass:(Class)arg0 usingBlock:(id)arg1 ;
-(void)enumerateExportedPropertiesOfProtocol:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif