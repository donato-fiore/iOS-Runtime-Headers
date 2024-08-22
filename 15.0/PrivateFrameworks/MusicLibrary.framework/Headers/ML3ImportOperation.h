// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3IMPORTOPERATION_H
#define ML3IMPORTOPERATION_H

@class NSOperation, NSError, NSData;


#import "ML3ServiceDatabaseImport.h"

@interface ML3ImportOperation : NSOperation {
    id *_clientCompletionHandler;
}


@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) ML3ServiceDatabaseImport *import; // ivar: _import
@property (readonly, nonatomic) NSUInteger importSource;
@property (readonly, nonatomic) float progress; // ivar: _progress
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (readonly, nonatomic) NSData *returnData; // ivar: _returnData
@property (readonly, nonatomic) BOOL success; // ivar: _success
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


+(id)importOperationWithSourceType:(NSUInteger)arg0 databaseImport:(id)arg1 ;
-(id)_clientCompletionHandler:(SEL)arg0 ;
-(id)init;
-(id)initWithDatabaseImport:(id)arg0 ;
-(id)longDescription;
-(void)_setClientCompletionHandler:(id)arg0 ;
-(void)_writerTransactionWithBlock:(id)arg0 ;
-(void)main;


@end


#endif