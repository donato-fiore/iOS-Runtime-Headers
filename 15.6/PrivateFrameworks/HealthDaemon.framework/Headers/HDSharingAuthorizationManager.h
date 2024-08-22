// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSHARINGAUTHORIZATIONMANAGER_H
#define HDSHARINGAUTHORIZATIONMANAGER_H

@class HKSynchronousObserverSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDSharingAuthorizationManager : NSObject {
    HDProfile *_profile;
    HKSynchronousObserverSet *_observers;
    NSMutableDictionary *_addedAuthorizationsByRecipient;
    NSMutableDictionary *_removedAuthorizationsByRecipient;
}




-(BOOL)addSharingAuthorizations:(id)arg0 recipientIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)insertOrUpdateCodableRelationships:(id)arg0 syncProvenance:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)markSharingAuthorizationsForDeletion:(id)arg0 recipientIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeSharingAuthorizations:(id)arg0 recipientIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)revokeRecipientWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateAuthorizationsForRecipientIdentifier:(id)arg0 sharingAuthorizationsToAdd:(id)arg1 sharingAuthorizationsToRemove:(id)arg2 error:(*id)arg3 ;
-(id)initWithProfile:(id)arg0 ;
-(id)recipientIdentifiersForSharingAuthorizations:(id)arg0 error:(*id)arg1 ;
-(id)sharingAuthorizationsForRecipientIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)sharingAuthorizationsMarkedForDeletionForRecipientIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)deleteMarkedSharingAuthorizations;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif