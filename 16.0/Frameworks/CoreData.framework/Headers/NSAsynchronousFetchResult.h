// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSASYNCHRONOUSFETCHRESULT_H
#define NSASYNCHRONOUSFETCHRESULT_H

@class NSArray;


#import "NSPersistentStoreAsynchronousResult.h"
#import "NSAsynchronousFetchRequest.h"

@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult {
    NSArray *_finalResult;
    id *_intermediateResultCallback;
}


@property (readonly) NSAsynchronousFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (readonly) NSArray *finalResult;


-(id)initForFetchRequest:(id)arg0 withContext:(id)arg1 andProgress:(id)arg2 completetionBlock:(id)arg3 ;
-(void)dealloc;
-(void)setOperationError:(id)arg0 ;


@end


#endif