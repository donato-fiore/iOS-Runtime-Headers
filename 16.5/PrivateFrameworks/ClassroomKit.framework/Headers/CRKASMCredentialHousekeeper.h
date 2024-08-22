// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKASMCREDENTIALHOUSEKEEPER_H
#define CRKASMCREDENTIALHOUSEKEEPER_H

@protocol CRKASMRoster;

#import <Foundation/Foundation.h>

#import "CRKASMCredentialStore.h"

@interface CRKASMCredentialHousekeeper : NSObject

@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore; // ivar: _credentialStore
@property (readonly, nonatomic) NSObject<CRKASMRoster> *roster; // ivar: _roster


-(BOOL)isEntryValid:(id)arg0 allowedUserIdentifiers:(id)arg1 ;
-(id)entriesInManifest:(id)arg0 forPersistentIDs:(id)arg1 ;
-(id)initWithRoster:(id)arg0 credentialStore:(id)arg1 ;
-(id)knownTrustedUserIdentifiers;
-(id)knownUserIdentifiers;
-(void)housekeep;
-(void)housekeepTrustedUserCertificates;
-(void)housekeepUserIdentities;
-(void)removeAllUserIdentitiesInManifest:(id)arg0 ;
-(void)removeTrustedUserCertificates:(id)arg0 manifest:(id)arg1 ;
-(void)removeUserIdentities:(id)arg0 manifest:(id)arg1 ;


@end


#endif