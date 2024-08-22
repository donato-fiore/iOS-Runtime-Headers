// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPERSISTENTHISTORYTRANSACTION_H
#define NSPERSISTENTHISTORYTRANSACTION_H

@class NSString, NSArray, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSPersistentHistoryToken.h"

@interface NSPersistentHistoryTransaction : NSObject <NSCopying>



@property (readonly, copy) NSString *author;
@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSArray *changes;
@property (readonly, copy) NSString *contextName;
@property (readonly, copy) NSString *processID;
@property (readonly, copy) NSString *storeID;
@property (readonly, copy) NSDate *timestamp;
@property (readonly) NSPersistentHistoryToken *token;
@property (readonly) NSInteger transactionNumber;


+(id)entityDescription;
+(id)entityDescriptionWithContext:(id)arg0 ;
+(id)fetchRequest;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initialQueryGenerationToken;
-(id)objectIDNotification;
-(id)postQueryGenerationToken;


@end


#endif