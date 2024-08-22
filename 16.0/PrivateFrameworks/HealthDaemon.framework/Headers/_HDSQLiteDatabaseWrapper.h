// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDSQLITEDATABASEWRAPPER_H
#define _HDSQLITEDATABASEWRAPPER_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "HDSQLiteDatabase.h"

@interface _HDSQLiteDatabaseWrapper : NSObject {
    HDSQLiteDatabase *_database;
    NSObject<OS_dispatch_group> *_flushGroup;
    NSUInteger _generation;
    NSUInteger _threadID;
    NSUInteger _options;
}






@end


#endif