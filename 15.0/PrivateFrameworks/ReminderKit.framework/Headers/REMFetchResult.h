// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMFETCHRESULT_H
#define REMFETCHRESULT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMFetchResultToken.h"
#import "REMFetchMetadata.h"

@interface REMFetchResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (retain, nonatomic) REMFetchResultToken *fetchResultToken; // ivar: _fetchResultToken
@property (readonly, nonatomic) NSArray *fetchedAccountStorages; // ivar: _fetchedAccountStorages
@property (readonly, nonatomic) NSArray *fetchedListStorages; // ivar: _fetchedListStorages
@property (readonly, nonatomic) NSArray *fetchedReminderStorages; // ivar: _fetchedReminderStorages
@property (readonly, nonatomic) REMFetchMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSArray *requestedObjectIDs; // ivar: _requestedObjectIDs
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAccountStorages:(id)arg0 ;
-(id)initWithAccountStorages:(id)arg0 listStorages:(id)arg1 reminderStorages:(id)arg2 requestedObjectIDs:(id)arg3 metadata:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCount:(NSInteger)arg0 ;
-(id)initWithListStorages:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 ;
-(id)initWithReminderStorages:(id)arg0 ;
-(id)initWithRequestedObjectIDs:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif