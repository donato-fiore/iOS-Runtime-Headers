// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSUBSCRIPTION_H
#define FCSUBSCRIPTION_H

@class NSDate, NSString, NSNumber, NSURL;
@protocol FCReorderableTagSubscription;

#import <Foundation/Foundation.h>


@interface FCSubscription : NSObject <FCReorderableTagSubscription>



@property (readonly, nonatomic) BOOL canRetry; // ivar: _canRetry
@property (readonly, copy, nonatomic) NSDate *dateAdded; // ivar: _dateAdded
@property (readonly, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) BOOL notificationsEnabled; // ivar: _notificationsEnabled
@property (readonly, copy, nonatomic) NSNumber *order; // ivar: _order
@property (readonly, nonatomic) NSURL *pollingURL; // ivar: _pollingURL
@property (readonly, copy, nonatomic) NSString *subscriptionID; // ivar: _subscriptionID
@property (readonly, nonatomic) NSUInteger subscriptionOrigin; // ivar: _subscriptionOrigin
@property (readonly, nonatomic) NSUInteger subscriptionType; // ivar: _subscriptionType
@property (readonly, nonatomic) NSString *tagID; // ivar: _tagID
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSUInteger zone; // ivar: _zone


+(id)pendingSubscriptionWithSubscriptionID:(id)arg0 url:(id)arg1 title:(id)arg2 pollingURL:(id)arg3 dateAdded:(id)arg4 ;
+(id)subscriptionWithSubscriptionID:(id)arg0 dictionaryRepresentation:(id)arg1 ;
+(id)subscriptionWithSubscriptionID:(id)arg0 tagID:(id)arg1 type:(NSUInteger)arg2 order:(id)arg3 origin:(NSUInteger)arg4 groupID:(id)arg5 dateAdded:(id)arg6 notificationsEnabled:(BOOL)arg7 zone:(NSUInteger)arg8 ;
-(BOOL)isDeprecated;
-(BOOL)isTypeAutoFavoriteTag;
-(BOOL)isTypeGroupableTag;
-(BOOL)isTypeIgnoredTag;
-(BOOL)isTypeMutedTag;
-(BOOL)isTypePending;
-(BOOL)isTypeTag;
-(NSInteger)comparePriority:(id)arg0 ;
-(NSUInteger)priority;
-(id)asCKRecord;
-(id)copyWithOrder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithSubscriptionID:(id)arg0 tagID:(id)arg1 groupID:(id)arg2 dateAdded:(id)arg3 subscriptionType:(NSUInteger)arg4 order:(id)arg5 origin:(NSUInteger)arg6 notificationsEnabled:(BOOL)arg7 zone:(NSUInteger)arg8 ;
-(id)initWithSubscriptionID:(id)arg0 url:(id)arg1 title:(id)arg2 pollingURL:(id)arg3 dateAdded:(id)arg4 ;


@end


#endif