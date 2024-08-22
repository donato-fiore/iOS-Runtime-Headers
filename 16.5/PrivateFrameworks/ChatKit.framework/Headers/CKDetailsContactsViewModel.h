// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETAILSCONTACTSVIEWMODEL_H
#define CKDETAILSCONTACTSVIEWMODEL_H

@class CNContact, NSString;

#import <Foundation/Foundation.h>

#import "CKEntity.h"

@interface CKDetailsContactsViewModel : NSObject

@property (nonatomic) NSInteger callType; // ivar: _callType
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CKEntity *entity; // ivar: _entity
@property (copy, nonatomic) NSString *entityName; // ivar: _entityName
@property (nonatomic) BOOL isPendingRecipient; // ivar: _isPendingRecipient
@property (copy, nonatomic) NSString *locationString; // ivar: _locationString
@property (copy, nonatomic) NSString *preferredHandle; // ivar: _preferredHandle
@property (nonatomic) BOOL showsFaceTimeVideoButton; // ivar: _showsFaceTimeVideoButton
@property (nonatomic) BOOL showsLocation; // ivar: _showsLocation
@property (nonatomic) BOOL showsMessageButton; // ivar: _showsMessageButton
@property (nonatomic) BOOL showsPhoneButton; // ivar: _showsPhoneButton
@property (nonatomic) BOOL showsScreenSharingButton; // ivar: _showsScreenSharingButton
@property (nonatomic) BOOL showsTUConversationStatus; // ivar: _showsTUConversationStatus
@property (nonatomic) BOOL tuConversationStatusIsActive; // ivar: _tuConversationStatusIsActive
@property (nonatomic) BOOL verified; // ivar: _verified


+(id)descriptorForContactRequiredKeys;
-(id)initWithEntity:(id)arg0 locationString:(id)arg1 tuConversationStatusIsActive:(BOOL)arg2 callType:(NSInteger)arg3 showsLocation:(BOOL)arg4 showsMessageButton:(BOOL)arg5 showsFaceTimeVideoButton:(BOOL)arg6 showsPhoneButton:(BOOL)arg7 showsScreenSharingButton:(BOOL)arg8 contact:(id)arg9 isPendingRecipient:(BOOL)arg10 verified:(BOOL)arg11 showsTUConversationStatus:(BOOL)arg12 ;


@end


#endif