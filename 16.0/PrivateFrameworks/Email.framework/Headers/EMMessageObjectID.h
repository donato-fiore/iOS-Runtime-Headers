// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMESSAGEOBJECTID_H
#define EMMESSAGEOBJECTID_H



#import "EMObjectID.h"
#import "EMMessageCollectionItemID.h"
#import "EMMailboxScope.h"

@interface EMMessageObjectID : EMObjectID

@property (readonly, nonatomic) EMMessageCollectionItemID *collectionItemID; // ivar: _collectionItemID
@property (readonly, nonatomic) NSInteger globalMessageID;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope; // ivar: _mailboxScope


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionItemID:(id)arg0 mailboxScope:(id)arg1 ;
-(id)initWithCollectionItemID:(id)arg0 predicate:(id)arg1 mailboxTypeResolver:(id)arg2 ;
-(id)initWithGlobalMessageID:(NSInteger)arg0 mailboxScope:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif