// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSPUSHREGISTRATIONREPOSITORY_H
#define UNSPUSHREGISTRATIONREPOSITORY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSKeyedDictionaryRepository.h"

@interface UNSPushRegistrationRepository : NSObject {
    UNSKeyedDictionaryRepository *_repository;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_queue_registrationForBundleIdentifier:(id)arg0 ;
-(id)allBundleIdentifiers;
-(id)initWithDirectory:(id)arg0 librarian:(id)arg1 ;
-(id)registrationForBundleIdentifier:(id)arg0 ;
-(void)_queue_performMigration;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg0 ;
-(void)_queue_removeRegistrationForBundleIdentifier:(id)arg0 ;
-(void)_queue_setRegistration:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg0 ;
-(void)performMigration;
-(void)removeRegistrationForBundleIdentifier:(id)arg0 ;
-(void)setRegistration:(id)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif