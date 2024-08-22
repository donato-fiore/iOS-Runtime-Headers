// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSSUGGESTIONTEMPLATE_H
#define _PSSUGGESTIONTEMPLATE_H

@class NSString, NSDictionary, INImage, NSArray;

#import <Foundation/Foundation.h>


@interface _PSSuggestionTemplate : NSObject

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSDictionary *contactIdToHandleMapping; // ivar: _contactIdToHandleMapping
@property (readonly, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly, nonatomic) NSDictionary *handleToDisplayNameMapping; // ivar: _handleToDisplayNameMapping
@property (readonly, nonatomic) INImage *image; // ivar: _image
@property (readonly, nonatomic) NSString *interactionRecipients; // ivar: _interactionRecipients
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSString *reasonType; // ivar: _reasonType
@property (readonly, nonatomic) NSArray *recipientContactIDs; // ivar: _recipientContactIDs
@property (readonly, nonatomic) NSArray *recipientDisplayNames; // ivar: _recipientDisplayNames
@property (readonly, nonatomic) NSArray *recipientEmailAddresses; // ivar: _recipientEmailAddresses
@property (readonly, nonatomic) NSArray *recipientPhoneNumbers; // ivar: _recipientPhoneNumbers


-(id)description;
-(id)initWithBundleID:(id)arg0 interactionRecipients:(id)arg1 image:(id)arg2 groupName:(id)arg3 recipientContactIDs:(id)arg4 recipientEmailAddresses:(id)arg5 recipientPhoneNumbers:(id)arg6 recipientDisplayNames:(id)arg7 contactIdToHandleMapping:(id)arg8 handleToDisplayNameMapping:(id)arg9 reason:(id)arg10 reasonType:(id)arg11 ;
-(id)initWithBundleID:(id)arg0 interactionRecipients:(id)arg1 image:(id)arg2 groupName:(id)arg3 recipientContactIDs:(id)arg4 recipientEmailAddresses:(id)arg5 recipientPhoneNumbers:(id)arg6 recipientDisplayNames:(id)arg7 contactIdToHandleMapping:(id)arg8 reason:(id)arg9 reasonType:(id)arg10 ;
-(id)suggestionWithContactIDMapping:(id)arg0 phoneMapping:(id)arg1 emailMapping:(id)arg2 contactStore:(id)arg3 contactKeysToFetch:(id)arg4 ;


@end


#endif