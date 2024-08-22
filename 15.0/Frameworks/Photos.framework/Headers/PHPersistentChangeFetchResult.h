// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHPERSISTENTCHANGEFETCHRESULT_H
#define PHPERSISTENTCHANGEFETCHRESULT_H

@class NSArray, NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface PHPersistentChangeFetchResult : NSObject {
    NSArray *_transactions;
    NSManagedObjectContext *_context;
    NSUInteger _maximumChangeThreshold;
}


@property (readonly, nonatomic) NSUInteger changeCount; // ivar: _changeCount


+(id)fetchResultWithToken:(id)arg0 maximumChangeThreshold:(NSUInteger)arg1 managedObjectObjectContext:(id)arg2 error:(*id)arg3 ;
-(id)initWithTransactions:(id)arg0 maximumChangeThreshold:(NSUInteger)arg1 managedObjectObjectContext:(id)arg2 ;
-(void)enumerateChangesWithBlock:(id)arg0 ;


@end


#endif