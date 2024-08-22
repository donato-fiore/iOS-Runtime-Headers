// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLITEADAPTER_H
#define NSSQLITEADAPTER_H


#import <Foundation/Foundation.h>

#import "NSSQLCore.h"
#import "NSSQLModel.h"

@interface NSSQLiteAdapter : NSObject {
    NSSQLCore *_sqlCore;
    NSSQLModel *_model;
    *__CFDictionary _cachedDeleteTriggersByEntity;
    os_unfair_lock_s _lock;
}




-(id)initWithSQLCore:(id)arg0 ;
-(id)sqlCore;
-(void)dealloc;


@end


#endif