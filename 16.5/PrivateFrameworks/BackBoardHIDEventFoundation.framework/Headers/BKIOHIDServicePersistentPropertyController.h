// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKIOHIDSERVICEPERSISTENTPROPERTYCONTROLLER_H
#define BKIOHIDSERVICEPERSISTENTPROPERTYCONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface BKIOHIDServicePersistentPropertyController : NSObject {
    os_unfair_lock_s _handlersLock;
    os_unfair_lock_s _defaultsLock;
    NSMutableArray *_handlersLock_handlers;
}




+(id)sharedInstance;
-(id)_senderDescriptorKey:(id)arg0 ;
-(id)allPersistentPropertiesForServicesMatchingDescriptor:(id)arg0 ;
-(id)init;
-(id)persistentPropertiesForKeys:(id)arg0 forSenderDescriptor:(id)arg1 ;
-(void)registerHandler:(id)arg0 ;
-(void)setPersistentProperties:(id)arg0 forSenderDescriptor:(id)arg1 ;


@end


#endif