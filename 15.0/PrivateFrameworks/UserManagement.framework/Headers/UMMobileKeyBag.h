// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UMMOBILEKEYBAG_H
#define UMMOBILEKEYBAG_H


#import <Foundation/Foundation.h>


@interface UMMobileKeyBag : NSObject



+(BOOL)_start:(BOOL)arg0 syncBubbleForUser:(id)arg1 outError:(*id)arg2 ;
+(BOOL)adoptPersonaVoucherForAccoutID:(id)arg0 outError:(*id)arg1 ;
+(BOOL)clearSyncBubblesWithOutError:(*id)arg0 ;
+(BOOL)fetchAttributesForUser:(id)arg0 outError:(*id)arg1 ;
+(BOOL)inSyncBubble;
+(BOOL)isInternalBuild;
+(BOOL)isLoginSession;
+(BOOL)isMultiUser;
+(BOOL)startSyncBubbleForUser:(id)arg0 outError:(*id)arg1 ;
+(BOOL)stopSyncBubbleForUser:(id)arg0 outError:(*id)arg1 ;
+(BOOL)writeAttributesToDiskForUser:(id)arg0 outError:(*id)arg1 ;
+(CGFloat)passcodeBackOffIntervalForUser:(id)arg0 ;
+(NSUInteger)maxNumberOfUsers;
+(NSUInteger)userQuotaSize;
+(NSUInteger)userType;
+(id)_mutablePersonaSpecBase;
+(id)_uidDictForUser:(id)arg0 ;
+(id)_userAttributesForUID:(unsigned int)arg0 outError:(*id)arg1 ;
+(id)allSyncBubbleUsers;
+(id)allUsersWithFilter:(BOOL)arg0 ;
+(id)currentPersona;
+(id)currentSyncBubbleUser;
+(id)currentUser;
+(id)currentUserSwitchContext;
+(id)deleteUser:(id)arg0 ;
+(id)dictionaryRepresentationOfTask:(id)arg0 ;
+(id)lastLoggedInUser;
+(id)loadUser:(id)arg0 withPasscodeData:(id)arg1 ;
+(id)loginUser;
+(id)personaSpecForUser:(id)arg0 ;
+(id)queuedSyncBubbleUsers;
+(id)syncBubbleMachServiceNamesForUser:(id)arg0 ;
+(id)taskFromDictionaryRepresentation:(id)arg0 ;
+(id)userFromAttributes:(id)arg0 ;
+(int)_foregroundUID;
+(unsigned int)lastLoggedInUID;
+(void)_handleAttributeAccessCFError:(struct __CFError *)arg0 outError:(*id)arg1 ;
+(void)_setAttributes:(id)arg0 onUser:(id)arg1 ;
+(void)_setPasscodeTypeOnUser:(id)arg0 withPasscodeData:(id)arg1 ;
+(void)currentUserSwitchContextHasBeenUsed;
+(void)initialize;
+(void)updateLoginSessionType;


@end


#endif