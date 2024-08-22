// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRRECENTCONTACT_H
#define CRRECENTCONTACT_H

@class NSMutableArray, NSString, NSNumber, NSDate, NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRRecentContact : NSObject <NSSecureCoding>

 {
    NSMutableArray *_recentDates;
}


@property (copy, nonatomic) NSString *address; // ivar: _address
@property (nonatomic) NSInteger contactID; // ivar: _contactID
@property (readonly, nonatomic) NSUInteger countOfRecents;
@property (retain, nonatomic) NSNumber *decayedWeight; // ivar: _decayedWeight
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic, getter=isGroup) BOOL group;
@property (nonatomic) NSUInteger groupKind; // ivar: _groupKind
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (copy, nonatomic) NSString *lastSendingAddress; // ivar: _lastSendingAddress
@property (readonly, copy, nonatomic) NSDate *leastRecentDate;
@property (copy, nonatomic) NSArray *members; // ivar: _members
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSDate *mostRecentDate;
@property (copy, nonatomic) NSString *originalSource; // ivar: _originalSource
@property (copy, nonatomic) NSString *rawAddress; // ivar: _rawAddress
@property (copy, nonatomic) NSArray *recentDates;
@property (nonatomic) NSInteger recentID; // ivar: _recentID
@property (copy, nonatomic) NSString *recentsDomain; // ivar: _recentsDomain
@property (retain, nonatomic) NSNumber *weight; // ivar: _weight


+(BOOL)supportsSecureCoding;
-(BOOL)hasFullTextMatch:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)insertionIndexForDate:(id)arg0 wouldBeUnique:(*BOOL)arg1 ;
-(id)archivableContactID;
-(id)archivableGroupKind;
-(id)archivableGroupMembers;
-(id)archivableMetadata;
-(id)archivableRecentID;
-(id)description;
-(id)initWithAddress:(id)arg0 displayName:(id)arg1 kind:(id)arg2 recentDate:(id)arg3 recentsDomain:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactID:(NSInteger)arg0 ;
-(id)initWithMembers:(id)arg0 displayName:(id)arg1 recentDate:(id)arg2 recentsDomain:(id)arg3 ;
-(struct __CFStringTokenizer *)_wordTokenizerForString:(id)arg0 locale:(id)arg1 ;
-(void)_enumerateWordsInString:(id)arg0 usingBlock:(id)arg1 ;
-(void)applyWeight:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateArchivablePropertiesWithBlock:(id)arg0 ;
-(void)insertDate:(id)arg0 atIndex:(NSUInteger)arg1 required:(BOOL)arg2 ;
-(void)lazilyCreateRecentDates;
-(void)recordRecentEventForDate:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)setArchivableContactID:(id)arg0 ;
-(void)setArchivableGroupKind:(id)arg0 ;
-(void)setArchivableGroupMembers:(id)arg0 ;
-(void)setArchivableMetadata:(id)arg0 ;
-(void)setArchivableRecentID:(id)arg0 ;


@end


#endif