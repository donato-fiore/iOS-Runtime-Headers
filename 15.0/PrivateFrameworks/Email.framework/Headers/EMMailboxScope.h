// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMMAILBOXSCOPE_H
#define EMMAILBOXSCOPE_H

@class NSString, NSSet;
@protocol EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EMMailboxScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding>

 {
    NSUInteger _hash;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) BOOL excludeMailboxes; // ivar: _excludeMailboxes
@property (readonly, nonatomic) BOOL excludeTypes; // ivar: _excludeTypes
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *mailboxObjectIDs; // ivar: _mailboxObjectIDs
@property (readonly, copy, nonatomic) NSSet *mailboxTypes; // ivar: _mailboxTypes
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)allMailboxesScope;
+(id)mailboxScopeForMailboxObjectIDs:(id)arg0 forExclusion:(BOOL)arg1 ;
+(id)mailboxScopeForMailboxType:(NSInteger)arg0 forExclusion:(BOOL)arg1 ;
+(id)mailboxScopeForMailboxTypes:(id)arg0 forExclusion:(BOOL)arg1 ;
+(id)noMailboxesScope;
-(BOOL)_scopeContainsMailboxWithObjectID:(id)arg0 mailboxTypeBlock:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)scopeContainsMailbox:(id)arg0 ;
-(BOOL)scopeContainsMailboxObjectID:(id)arg0 mailboxTypeResolver:(id)arg1 ;
-(id)_mailboxObjectIDsDescriptionIsDebug:(BOOL)arg0 ;
-(id)_mailboxObjectIDsForTypesWithMailboxTypeResolver:(id)arg0 ;
-(id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg0 forExclusion:(*BOOL)arg1 ;
-(id)cachedSelf;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailboxTypes:(id)arg0 excludeTypes:(BOOL)arg1 mailboxObjectIDs:(id)arg2 excludeMailboxes:(BOOL)arg3 ;
-(id)initWithMailboxTypes:(id)arg0 excludeTypes:(BOOL)arg1 mailboxObjectIDs:(id)arg2 excludeMailboxes:(BOOL)arg3 cached:(BOOL)arg4 ;
-(id)mailboxScopeByAddingMailboxes:(id)arg0 ;
-(id)mailboxScopeByRemovingMailboxes:(id)arg0 ;
-(void)_calculateHash;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif