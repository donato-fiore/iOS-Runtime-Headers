// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPERSISTENTCHANGEFETCHRESULT_H
#define PHPERSISTENTCHANGEFETCHRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"
#import "PHPersistentChangeFetchOptions.h"
#import "PHPersistentChangeEnumerationContext.h"

@interface PHPersistentChangeFetchResult : NSObject {
    NSArray *_transactions;
    PHPhotoLibrary *_library;
    PHPersistentChangeFetchOptions *_options;
    PHPersistentChangeEnumerationContext *_enumerationContext;
    NSUInteger _changeCount;
}




+(id)fetchResultWithToken:(id)arg0 options:(id)arg1 photoLibrary:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)changeCount;
-(id)_managedObjectContext;
-(id)initWithTransactions:(id)arg0 options:(id)arg1 photoLibrary:(id)arg2 ;
-(id)iteratorForPersistentChangeEnumeration;
-(id)nextPersistentChangeWithIterator:(id)arg0 ;
-(void)enumerateChangesWithBlock:(id)arg0 ;
-(void)enumeratePHChangesWithBlock:(id)arg0 ;


@end


#endif