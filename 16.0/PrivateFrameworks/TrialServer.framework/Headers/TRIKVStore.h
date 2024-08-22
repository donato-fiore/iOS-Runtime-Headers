// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIKVSTORE_H
#define TRIKVSTORE_H


#import <Foundation/Foundation.h>

#import "TRIDatabase.h"

@interface TRIKVStore : NSObject {
    TRIDatabase *_db;
}




-(id)blobForKey:(id)arg0 usingTransaction:(id)arg1 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )readTransactionWithFailableBlock:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )writeTransactionWithFailableBlock:(id)arg0 ;
-(void)removeBlobForKey:(id)arg0 usingTransaction:(id)arg1 ;
-(void)setBlob:(id)arg0 forKey:(id)arg1 usingTransaction:(id)arg2 ;


@end


#endif