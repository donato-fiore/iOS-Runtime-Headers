// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGTEXTMESSAGE_H
#define SGTEXTMESSAGE_H

@class NSString, NSArray, CSPerson;


#import "SGMessage.h"

@interface SGTextMessage : SGMessage

@property (readonly) NSString *attachmentFilename; // ivar: _attachmentFilename
@property (retain) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (retain) NSString *nickname; // ivar: _nickname
@property (retain) NSString *photoPath; // ivar: _photoPath
@property (retain) NSArray *recipients; // ivar: _recipients
@property (retain) CSPerson *sender; // ivar: _sender
@property BOOL senderIsAccountOwner; // ivar: _senderIsAccountOwner
@property (readonly) BOOL senderIsBusinessChat; // ivar: _senderIsBusinessChat


+(BOOL)isSent:(id)arg0 ;
-(id)author;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMessageDictionary:(id)arg0 ;
-(id)initWithMessagesContentEvent:(id)arg0 contentProtection:(id)arg1 ;
-(id)initWithSearchableItem:(id)arg0 ;
-(id)spotlightBundleIdentifier;
-(id)spotlightDomainIdentifier;


@end


#endif