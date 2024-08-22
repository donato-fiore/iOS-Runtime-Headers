// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSQLDATABASEHANDLEPOOL_H
#define PPSQLDATABASEHANDLEPOOL_H

@class _PASSqliteDatabase, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PPSQLDatabaseHandlePool : NSObject {
    _PASSqliteDatabase *readWriteHandle;
    NSMutableArray *availableReadOnlyHandles;
    NSUInteger totalReadOnlyHandles;
}






@end


#endif