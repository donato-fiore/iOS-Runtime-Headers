// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSACKNOWLEDGEPRIVACYTASK_H
#define AMSACKNOWLEDGEPRIVACYTASK_H

@class ACAccount, NSSet;


#import "AMSTask.h"

@interface AMSAcknowledgePrivacyTask : AMSTask

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) NSSet *privacyIdentifiers; // ivar: _privacyIdentifiers


+(BOOL)acknowledgementNeededForPrivacyIdentifier:(id)arg0 ;
+(BOOL)acknowledgementNeededForPrivacyIdentifier:(id)arg0 account:(id)arg1 ;
+(BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg0 ;
+(BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg0 account:(id)arg1 ;
+(BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg0 account:(id)arg1 minimumVersion:(id)arg2 ;
+(BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg0 minimumVersion:(id)arg1 ;
+(BOOL)hasRejectedPrivacyIdentifier:(id)arg0 ;
+(NSUInteger)_contentVersionForPrivacyIdentifier:(id)arg0 ;
+(id)_accountStoreForPrivacyIdentifier:(id)arg0 ;
+(id)_appleArcadePrivacyIdentifier;
+(id)_appleIDPrivacyIdentifier;
+(id)_appleMusicAppPrivacyIdentifier;
+(id)_appleTVAppPrivacyIdentifier;
+(id)_multiplexPrivacyIdentifier:(id)arg0 contentVersion:(NSUInteger)arg1 ;
+(id)_storePrivacyIdentifiers;
+(id)_valueForPreviouslyAcknowledgedPrivacyIdentifier:(id)arg0 account:(id)arg1 ;
-(id)_updatePrivacyWithAcknowledgementVersions:(id)arg0 ;
-(id)acknowledgePrivacy;
-(id)initWithPrivacyIdentifier:(id)arg0 ;
-(id)initWithPrivacyIdentifier:(id)arg0 account:(id)arg1 ;
-(id)initWithPrivacyIdentifiers:(id)arg0 ;
-(id)initWithPrivacyIdentifiers:(id)arg0 account:(id)arg1 ;
-(id)rejectPrivacy;


@end


#endif