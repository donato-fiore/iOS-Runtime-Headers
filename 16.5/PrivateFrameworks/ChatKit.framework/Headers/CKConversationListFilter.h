// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONVERSATIONLISTFILTER_H
#define CKCONVERSATIONLISTFILTER_H

@class NSPredicate, DNDConfiguration;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKConversationListFilter : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSPredicate *cachedConversationPredicate; // ivar: _cachedConversationPredicate
@property (readonly, nonatomic) NSPredicate *conversationPredicate;
@property (readonly, nonatomic) DNDConfiguration *focusConfiguration; // ivar: _focusConfiguration
@property (readonly, nonatomic) NSUInteger inbox; // ivar: _inbox
@property (readonly, nonatomic) BOOL unreadOnly; // ivar: _unreadOnly


+(BOOL)supportsSecureCoding;
+(id)defaultFilter;
-(BOOL)_conversation:(id)arg0 matchesInbox:(NSUInteger)arg1 ;
-(BOOL)_conversation:(id)arg0 matchesSpamFilterInbox:(NSUInteger)arg1 ;
-(BOOL)_conversation:(id)arg0 matchesSpamFilterInboxGroup:(NSUInteger)arg1 ;
-(BOOL)_isSpamFilteredConversation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationListFilter:(id)arg0 ;
-(NSUInteger)_defaultSpamFilterInboxForCategory:(NSInteger)arg0 ;
-(NSUInteger)_spamFilterInboxForCategory:(NSInteger)arg0 subCategory:(NSInteger)arg1 ;
-(NSUInteger)_spamFilterInboxForConversation:(id)arg0 ;
-(NSUInteger)_spamFilterInboxForConversationListInbox:(NSUInteger)arg0 ;
-(NSUInteger)_spamFilterInboxGroupForConversationListInbox:(NSUInteger)arg0 ;
-(NSUInteger)_spamFilterInboxGroupForInbox:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)_initWithInbox:(NSUInteger)arg0 unreadOnly:(BOOL)arg1 focusConfiguration:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)filterByChangingFocusConfiguration:(id)arg0 ;
-(id)filterByChangingInbox:(NSUInteger)arg0 ;
-(id)filterByChangingUnreadOnly:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif