// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSPERSONADATABASE_H
#define _LSPERSONADATABASE_H

@class NSDictionary, NSString;
@protocol UMUserPersonaUpdateObserver;

#import <Foundation/Foundation.h>


@interface _LSPersonaDatabase : NSObject <UMUserPersonaUpdateObserver>

 {
    os_unfair_lock_s _ivarLock;
    os_unfair_lock_s _uncachedCalloutLock;
    BOOL _registered;
    NSDictionary *_cachedBundleIDToPersonasMap;
    NSString *_cachedSystemPersonaIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)personaListContainsSystemPersona:(id)arg0 ;
-(id)getBundleIDToPersonasMap;
-(id)getSystemPersonaIdentifier;
-(id)initPrivately;
-(id)personaIdentifiersForBundleIdentifier:(id)arg0 ;
-(void)getCachedBundleIDToPersonasMap:(*id)arg0 systemPersonaIdentifier:(*id)arg1 ;
-(void)getUncachedBundleIDToPersonasMap:(*id)arg0 systemPersonaIdentifier:(*id)arg1 ;
-(void)personaListDidUpdate;
-(void)registerWithUserManager;
-(void)registerWithUserManagerForAttempt:(NSUInteger)arg0 maxAttempts:(NSUInteger)arg1 ;


@end


#endif