// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKMAILBOX_H
#define NNMKMAILBOX_H

@class NSString, NSDate, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NNMKMailbox : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *accountId; // ivar: _accountId
@property (retain, nonatomic) NSString *accountLocalId; // ivar: _accountLocalId
@property (retain, nonatomic) NSString *customName; // ivar: _customName
@property (nonatomic) BOOL databaseContentVerified; // ivar: _databaseContentVerified
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) NSUInteger filterType; // ivar: _filterType
@property (nonatomic) BOOL hasSelection; // ivar: _hasSelection
@property (nonatomic) BOOL isPushEnabled; // ivar: _isPushEnabled
@property (retain, nonatomic) NSDate *lastUpdate; // ivar: _lastUpdate
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL syncActive; // ivar: _syncActive
@property (nonatomic) BOOL syncEnabled; // ivar: _syncEnabled
@property (nonatomic) BOOL syncRequested; // ivar: _syncRequested
@property (retain, nonatomic) NSDate *syncRequestedDate; // ivar: _syncRequestedDate
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(NSUInteger)defaultFilterTypes;
+(NSUInteger)messageStateForMailboxFilterType:(NSUInteger)arg0 ;
+(NSUInteger)syncedTypeFromFilterType:(NSUInteger)arg0 ;
+(NSUInteger)syncedTypeFromMailbox:(id)arg0 ;
+(id)generateLegacyMailboxIdWithAccountId:(id)arg0 mailboxName:(id)arg1 ;
+(id)generateMailboxIdWithAccountId:(id)arg0 mailboxName:(id)arg1 ;
+(id)idsFromMailboxes:(id)arg0 ;
-(BOOL)hasAnyFilter;
-(BOOL)hasCompoundFilters;
-(BOOL)hasFilterType:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSelectedForFilterType:(NSUInteger)arg0 ;
-(BOOL)shouldFilter;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFilterType:(NSUInteger)arg0 ;
-(void)addFilterType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeFilterType:(NSUInteger)arg0 ;
-(void)resetURL;


@end


#endif