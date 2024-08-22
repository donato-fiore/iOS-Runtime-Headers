// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSOBJECTQUEUE_H
#define MSOBJECTQUEUE_H


#import <Foundation/Foundation.h>


@interface MSObjectQueue : NSObject {
    *sqlite3 _db;
    *__CFDictionary _statements;
}


@property (readonly) NSInteger count;


-(id)_objectWrapperFromQueueQuery:(struct sqlite3_stmt *)arg0 outSize:(*NSInteger)arg1 ;
-(id)allObjectWrappersMaxCount:(NSInteger)arg0 ;
-(id)allObjectWrappersOrderedByDescendingErrorCountMaxCount:(NSInteger)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)objectWrappersWithZeroSizeMaxCount:(NSInteger)arg0 ;
-(id)smallestObjectWrappersTargetTotalSize:(NSInteger)arg0 maxCount:(NSInteger)arg1 ;
-(struct sqlite3_stmt *)_statementLabel:(id)arg0 query:(char *)arg1 ;
-(void)appendObjectWrappers:(id)arg0 ;
-(void)commitErrorCountsForObjectWrappers:(id)arg0 ;
-(void)commitObjectsWrappers:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjectWrappersFromQueue;
-(void)removeObjectWrappersFromQueue:(id)arg0 ;


@end


#endif