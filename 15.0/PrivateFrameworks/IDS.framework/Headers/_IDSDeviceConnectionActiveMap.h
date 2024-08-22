// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IDSDEVICECONNECTIONACTIVEMAP_H
#define _IDSDEVICECONNECTIONACTIVEMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _IDSDeviceConnectionActiveMap : NSObject {
    NSMutableDictionary *_activeConnectionMap;
    os_unfair_lock_s _writeLock;
}




+(id)sharedInstance;
-(BOOL)hasActiveConnection:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(void)removeActiveConnection:(id)arg0 forKey:(id)arg1 ;
-(void)setActiveConnection:(id)arg0 forKey:(id)arg1 ;


@end


#endif