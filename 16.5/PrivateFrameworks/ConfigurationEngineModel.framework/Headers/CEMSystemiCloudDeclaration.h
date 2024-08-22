// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSYSTEMICLOUDDECLARATION_H
#define CEMSYSTEMICLOUDDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemiCloudDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowCloudAddressBook; // ivar: _payloadAllowCloudAddressBook
@property (copy, nonatomic) NSNumber *payloadAllowCloudBackup; // ivar: _payloadAllowCloudBackup
@property (copy, nonatomic) NSNumber *payloadAllowCloudBookmarks; // ivar: _payloadAllowCloudBookmarks
@property (copy, nonatomic) NSNumber *payloadAllowCloudCalendar; // ivar: _payloadAllowCloudCalendar
@property (copy, nonatomic) NSNumber *payloadAllowCloudDesktopAndDocuments; // ivar: _payloadAllowCloudDesktopAndDocuments
@property (copy, nonatomic) NSNumber *payloadAllowCloudDocumentSync; // ivar: _payloadAllowCloudDocumentSync
@property (copy, nonatomic) NSNumber *payloadAllowCloudKeychainSync; // ivar: _payloadAllowCloudKeychainSync
@property (copy, nonatomic) NSNumber *payloadAllowCloudMail; // ivar: _payloadAllowCloudMail
@property (copy, nonatomic) NSNumber *payloadAllowCloudNotes; // ivar: _payloadAllowCloudNotes
@property (copy, nonatomic) NSNumber *payloadAllowCloudPhotoLibrary; // ivar: _payloadAllowCloudPhotoLibrary
@property (copy, nonatomic) NSNumber *payloadAllowCloudReminders; // ivar: _payloadAllowCloudReminders
@property (copy, nonatomic) NSNumber *payloadAllowFindMyFriendsModification; // ivar: _payloadAllowFindMyFriendsModification
@property (copy, nonatomic) NSNumber *payloadAllowPhotoStream; // ivar: _payloadAllowPhotoStream
@property (copy, nonatomic) NSNumber *payloadAllowSharedStream; // ivar: _payloadAllowSharedStream
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowCloudBackup:(id)arg1 withAllowCloudDocumentSync:(id)arg2 withAllowFindMyFriendsModification:(id)arg3 withAllowPhotoStream:(id)arg4 withAllowSharedStream:(id)arg5 withAllowCloudPhotoLibrary:(id)arg6 withAllowCloudBookmarks:(id)arg7 withAllowCloudMail:(id)arg8 withAllowCloudCalendar:(id)arg9 withAllowCloudReminders:(id)arg10 withAllowCloudAddressBook:(id)arg11 withAllowCloudNotes:(id)arg12 withAllowCloudDesktopAndDocuments:(id)arg13 withAllowCloudKeychainSync:(id)arg14 ;
+(id)profileType;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)activationLevel;


@end


#endif