// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKMAILBOXSELECTION_H
#define NNMKMAILBOXSELECTION_H

@class NSArray, NSSet, NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NNMKMailboxSelection : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *aggregatedMailboxes; // ivar: _aggregatedMailboxes
@property (nonatomic) NSUInteger aggregatedMailboxesFilterTypes; // ivar: _aggregatedMailboxesFilterTypes
@property (retain, nonatomic) NSSet *aggregatedMailboxesId; // ivar: _aggregatedMailboxesId
@property (retain, nonatomic) NSArray *allMailboxesSyncEnabled; // ivar: _allMailboxesSyncEnabled
@property (retain, nonatomic) NSMutableDictionary *allMailboxesSyncEnabledById; // ivar: _allMailboxesSyncEnabledById
@property (retain, nonatomic) NSArray *mailboxesWithAllMessagesSyncEnabled; // ivar: _mailboxesWithAllMessagesSyncEnabled
@property (retain, nonatomic) NSSet *mailboxesWithAllMessagesSyncEnabledIds; // ivar: _mailboxesWithAllMessagesSyncEnabledIds


+(BOOL)supportsSecureCoding;
+(NSUInteger)firstFilterTypeFromTypes:(NSUInteger)arg0 ;
+(id)mailboxChangesApplyingSelection:(id)arg0 previousSelection:(id)arg1 ;
-(BOOL)containsMailboxFilter:(id)arg0 ;
-(BOOL)hasAggregateMailboxesForAllMessagesOnly;
-(BOOL)hasSelection;
-(BOOL)hasSingleMailboxSelectionOnly;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMailboxFilterEnabled:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAccounts:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailboxes:(id)arg0 ;
-(id)mailboxWithId:(id)arg0 ;
-(void)_setupWithAccounts:(id)arg0 ;
-(void)_setupWithMailboxes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif