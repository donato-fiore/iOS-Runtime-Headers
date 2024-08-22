// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDUSERDOMAINCONCEPTENTITYREGISTRY_H
#define HDUSERDOMAINCONCEPTENTITYREGISTRY_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDUserDomainConceptEntityRegistry : NSObject {
    os_unfair_lock_s _lock;
    NSDictionary *_lock_typeIdentifierToEntityClass;
}


@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon


+(id)registryWithDaemon:(id)arg0 setSharedInstance:(BOOL)arg1 ;
+(id)sharedInstance;
+(void)_setSharedInstance:(id)arg0 ;
+(void)unitTesting_setSharedInstance:(id)arg0 ;
-(Class)userDomainConceptEntityClassForTypeIdentifier:(id)arg0 ;
-(id)_builtinUserDomainConceptEntityClasses;
-(id)_registeredUserDomainConceptEntityClasses;
-(id)initWithDaemon:(id)arg0 ;
-(id)registeredDictionaryOfEntities;
-(id)registeredUserDomainConceptEntityClasses;
-(void)_lock_loadUserDomainConceptEntities;
-(void)_registerUserDomainConceptClassesFromProvider:(id)arg0 classRegistry:(id)arg1 ;


@end


#endif