// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATABASETRANSACTIONCONTEXT_H
#define HDDATABASETRANSACTIONCONTEXT_H

@class NSMutableSet, NSSet;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "HDDatabaseTransactionContextStatistics.h"

@interface HDDatabaseTransactionContext : NSObject <NSCopying, NSMutableCopying>

 {
    NSUInteger _options;
    NSMutableSet *_accessibilityAssertions;
}


@property (readonly, copy, nonatomic) NSSet *accessibilityAssertions;
@property (readonly, nonatomic) NSInteger cacheScope; // ivar: _cacheScope
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) BOOL highPriority;
@property (readonly, nonatomic) NSInteger journalType; // ivar: _journalType
@property (readonly, nonatomic) BOOL requiresNewDatabaseConnection;
@property (readonly, nonatomic) BOOL requiresProtectedData;
@property (readonly, nonatomic) BOOL requiresWrite;
@property (readonly, nonatomic) BOOL skipJournalMerge;
@property (readonly, nonatomic) BOOL skipTransactionStartTasks;
@property (readonly, nonatomic) HDDatabaseTransactionContextStatistics *statistics; // ivar: _statistics


+(id)contextForAccessibilityAssertion:(id)arg0 ;
+(id)contextForReading;
+(id)contextForReadingProtectedData;
+(id)contextForWriting;
+(id)contextForWritingProtectedData;
-(BOOL)containsContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithOptions:(NSUInteger)arg0 ;
-(id)copyForReadingProtectedData;
-(id)copyForWriting;
-(id)copyForWritingProtectedData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mergedContextWithContext:(id)arg0 error:(*id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif