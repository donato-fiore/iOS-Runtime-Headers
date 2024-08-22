// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPERSISTENTHISTORYCHANGE_H
#define NSPERSISTENTHISTORYCHANGE_H

@class NSDictionary, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSManagedObjectID.h"
#import "NSPersistentHistoryTransaction.h"

@interface NSPersistentHistoryChange : NSObject <NSCopying>



@property (readonly) NSInteger changeID;
@property (readonly) NSInteger changeType;
@property (readonly, copy) NSManagedObjectID *changedObjectID;
@property (readonly, copy) NSDictionary *tombstone;
@property (readonly) NSPersistentHistoryTransaction *transaction;
@property (readonly, copy) NSSet *updatedProperties;


+(id)entityDescription;
+(id)entityDescriptionWithContext:(id)arg0 ;
+(id)fetchRequest;
+(id)shortStringForChangeType:(NSInteger)arg0 ;
+(id)stringForChangeType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif