// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBCOMMUNICATIONCONTEXT_H
#define BBCOMMUNICATIONCONTEXT_H

@class NSString, NSURL, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBContact.h"

@interface BBCommunicationContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *associatedObjectUri; // ivar: _associatedObjectUri
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSInteger capabilities; // ivar: _capabilities
@property (readonly, copy, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (readonly, nonatomic) BOOL mentionsCurrentUser; // ivar: _mentionsCurrentUser
@property (readonly, nonatomic) BOOL notifyRecipientAnyway; // ivar: _notifyRecipientAnyway
@property (readonly, nonatomic) NSUInteger recipientCount; // ivar: _recipientCount
@property (readonly, copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser; // ivar: _replyToCurrentUser
@property (readonly, copy, nonatomic) BBContact *sender; // ivar: _sender
@property (readonly, nonatomic) BOOL systemImage; // ivar: _systemImage


+(BOOL)supportsSecureCoding;
+(id)communicationContextWithIdentifier:(id)arg0 associatedObjectUri:(id)arg1 displayName:(id)arg2 sender:(id)arg3 recipients:(id)arg4 contentURL:(id)arg5 imageName:(id)arg6 systemImage:(BOOL)arg7 mentionsCurrentUser:(BOOL)arg8 notifyRecipientAnyway:(BOOL)arg9 replyToCurrentUser:(BOOL)arg10 recipientCount:(NSUInteger)arg11 ;
+(id)communicationContextWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 associatedObjectUri:(id)arg2 displayName:(id)arg3 sender:(id)arg4 recipients:(id)arg5 contentURL:(id)arg6 ;
+(id)communicationContextWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 associatedObjectUri:(id)arg2 displayName:(id)arg3 sender:(id)arg4 recipients:(id)arg5 contentURL:(id)arg6 imageName:(id)arg7 systemImage:(BOOL)arg8 mentionsCurrentUser:(BOOL)arg9 notifyRecipientAnyway:(BOOL)arg10 replyToCurrentUser:(BOOL)arg11 recipientCount:(NSUInteger)arg12 ;
+(id)communicationContextWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 associatedObjectUri:(id)arg2 displayName:(id)arg3 sender:(id)arg4 recipients:(id)arg5 contentURL:(id)arg6 mentionsCurrentUser:(BOOL)arg7 notifyRecipientAnyway:(BOOL)arg8 replyToCurrentUser:(BOOL)arg9 recipientCount:(NSUInteger)arg10 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 associatedObjectUri:(id)arg2 displayName:(id)arg3 sender:(id)arg4 recipients:(id)arg5 contentURL:(id)arg6 imageName:(id)arg7 systemImage:(BOOL)arg8 mentionsCurrentUser:(BOOL)arg9 notifyRecipientAnyway:(BOOL)arg10 replyToCurrentUser:(BOOL)arg11 recipientCount:(NSUInteger)arg12 capabilities:(NSInteger)arg13 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif