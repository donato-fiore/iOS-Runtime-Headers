// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSKEYVALUESTOREDATABASE_H
#define SSKEYVALUESTOREDATABASE_H


#import <Foundation/Foundation.h>

#import "SSSQLiteDatabase.h"

@interface SSKeyValueStoreDatabase : NSObject {
    SSSQLiteDatabase *_database;
}




-(id)_initReadOnly:(BOOL)arg0 ;
-(id)init;
-(id)initReadOnly;
-(void)_dispatchBlockAsync:(id)arg0 ;
-(void)dealloc;
-(void)modifyAsyncUsingTransactionBlock:(id)arg0 ;
-(void)modifyUsingTransactionBlock:(id)arg0 ;
-(void)readAsyncUsingSessionBlock:(id)arg0 ;
-(void)readUsingSessionBlock:(id)arg0 ;


@end


#endif