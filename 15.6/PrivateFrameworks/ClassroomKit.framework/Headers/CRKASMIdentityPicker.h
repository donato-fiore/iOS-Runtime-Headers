// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKASMIDENTITYPICKER_H
#define CRKASMIDENTITYPICKER_H

@class NSString;
@protocol CRKIdentity;

#import <Foundation/Foundation.h>

#import "CRKASMCredentialStore.h"

@interface CRKASMIdentityPicker : NSObject

@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore; // ivar: _credentialStore
@property (readonly, nonatomic) NSObject<CRKIdentity> *identity;
@property (readonly, copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


-(BOOL)isManifestEntryValid:(id)arg0 manifest:(id)arg1 ;
-(id)arrayBySortingPersistentIDs:(id)arg0 ;
-(id)candidatePersistentIDsInManifest:(id)arg0 ;
-(id)initWithCredentialStore:(id)arg0 userIdentifier:(id)arg1 ;
-(id)manifest;
-(id)pickIdentityFromCandidates:(id)arg0 manifest:(id)arg1 ;
-(id)pickIdentityFromOrderedCandidates:(id)arg0 manifest:(id)arg1 ;


@end


#endif