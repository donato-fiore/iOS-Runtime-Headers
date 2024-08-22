// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACPERSONAMANAGER_H
#define ACPERSONAMANAGER_H

@class NSString, NSSet, NSArray;

#import <Foundation/Foundation.h>

#import "ACAccountStore.h"

@interface ACPersonaManager : NSObject {
    NSUInteger _personaGenerationID;
    os_unfair_lock_s _personaStorageLock;
    NSString *_enterprisePersonaUID;
    NSString *_personalPersonaUID;
    NSSet *_guestPersonasUID;
    NSArray *_dataSeparatedPersonasUIDs;
    ACAccountStore *_store;
}


@property (readonly, copy, nonatomic) NSArray *dataSeparatedPersonasUIDs;
@property (readonly, copy, nonatomic) NSString *enterprisePersonaUID;
@property (readonly, copy, nonatomic) NSSet *guestPersonasUIDs;
@property (readonly, copy, nonatomic) NSString *personalPersonaUID;


+(BOOL)performWithinPersona:(id)arg0 withBlock:(id)arg1 ;
+(id)sharedInstance;
+(void)_changePersonaContextUsingPersonaID:(id)arg0 withCompletion:(id)arg1 ;
+(void)performWithinPersonaForAccount:(id)arg0 withBlock:(id)arg1 ;
+(void)performWithinPersonaForAccountIdentifier:(id)arg0 withBlock:(id)arg1 ;
-(id)init;
-(id)store;
-(void)_lockedUpdatePersonasUIDsIfNeeded;
-(void)updatePersonasUIDs;


@end


#endif