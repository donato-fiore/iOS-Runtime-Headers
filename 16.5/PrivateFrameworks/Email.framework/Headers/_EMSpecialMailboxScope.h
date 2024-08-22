// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EMSPECIALMAILBOXSCOPE_H
#define _EMSPECIALMAILBOXSCOPE_H

@class NSString;
@protocol EFCacheable;


#import "EMMailboxScope.h"

@interface _EMSpecialMailboxScope : EMMailboxScope <EFCacheable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)excludeMailboxes;
-(BOOL)excludeTypes;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)scopeContainsMailbox:(id)arg0 ;
-(BOOL)scopeContainsMailboxObjectID:(id)arg0 mailboxTypeResolver:(id)arg1 ;
-(id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg0 forExclusion:(*BOOL)arg1 ;
-(id)cachedSelf;
-(id)ef_publicDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)mailboxObjectIDs;
-(id)mailboxScopeByAddingMailboxes:(id)arg0 ;
-(id)mailboxScopeByRemovingMailboxes:(id)arg0 ;
-(id)mailboxTypes;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif