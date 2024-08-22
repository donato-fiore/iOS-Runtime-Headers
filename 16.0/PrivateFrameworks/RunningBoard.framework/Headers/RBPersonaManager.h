// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBPERSONAMANAGER_H
#define RBPERSONAMANAGER_H

@class UMUserPersonaAttributes, NSMutableDictionary;
@protocol RBPersonaManaging;

#import <Foundation/Foundation.h>


@interface RBPersonaManager : NSObject <RBPersonaManaging>

 {
    BOOL _hasUserManagement;
    BOOL _personasSupported;
    os_unfair_lock_s _lock;
    UMUserPersonaAttributes *_personalAttributes;
    NSMutableDictionary *_personaAttributesCache;
}




-(BOOL)isConcretePersona:(id)arg0 ;
-(BOOL)personaForIdentity:(id)arg0 context:(id)arg1 personaUID:(*unsigned int)arg2 personaUniqueString:(*id)arg3 ;
-(BOOL)personasAreSupported;
-(id)init;
-(id)personalPersonaUniqueString;


@end


#endif